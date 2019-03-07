/****************************************************************************************
 * arch/arm/src/samd5e5/chip/sam_cmcc.h
 * Cortex M Cache Controller (CMCC) for the SAMD5/E5
 *
 *   Copyright (C) 2018 Gregory Nutt. All rights reserved.
 *   Author: Gregory Nutt <gnutt@nuttx.org>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************************/

#ifndef __ARCH_ARM_SRC_SAMD5E5_CHIP_SAM_CMCC_H
#define __ARCH_ARM_SRC_SAMD5E5_CHIP_SAM_CMCC_H

/****************************************************************************************
 * Included Files
 ****************************************************************************************/

#include <nuttx/config.h>

#include "chip/sam_memorymap.h"

/****************************************************************************************
 * Pre-processor Definitions
 ****************************************************************************************/
/* This information is available in the Cache Type Register.  How every, it is more
 * efficient if we do not to do the decoding on each cache access.
 *
 *  CacheSize = CacheLineSize * NCacheLines * NWays
 *  CacheAddressRange = CacheLineSize * NCacheLines = CacheSize / NWays
 */

#define CMCC_CACHE_SIZE              4096 /* 4Kb L1 data/instruction cache */
#define CMCC_CACHE_LINE_SIZE         16   /* 16 byte cache line size */
#define CMCC_NWAYS                   4    /* 4 ways */

/* CMCC register offsets ****************************************************************/

#define SAM_CMCC_TYPE_OFFSET         0x0000 /* Cache Type Register */
#define SAM_CMCC_CFG_OFFSET          0x0004 /* Cache Configuration Register */
#define SAM_CMCC_CTRL_OFFSET         0x0008 /* Cache Control Register */
#define SAM_CMCC_SR_OFFSET           0x000c /* Cache Status Register */
#define SAM_CMCC_LCKWAY_OFFSET       0x0010 /* Cache Lock per Way */
                                            /* 0x0014-0x001c Reserved */
#define SAM_CMCC_MAINT0_OFFSET       0x0020 /* Cache Maintenance Register 0 */
#define SAM_CMCC_MAINT1_OFFSET       0x0024 /* Cache Maintenance Register 1 */
#define SAM_CMCC_MCFG_OFFSET         0x0028 /* Cache Monitor Configuration Register */
#define SAM_CMCC_MEN_OFFSET          0x002c /* Cache Monitor Enable Register */
#define SAM_CMCC_MCTRL_OFFSET        0x0030 /* Cache Monitor Control Register */
#define SAM_CMCC_MSR_OFFSET          0x0034 /* Cache Monitor Status Register */
                                            /* 0x0038-0x00fc Reserved */

/* CMCC register addresses **************************************************************/

#define SAM_CMCC_TYPE                (SAM_CMCC_BASE + SAM_CMCC_TYPE_OFFSET)
#define SAM_CMCC_CFG                 (SAM_CMCC_BASE + SAM_CMCC_CFG_OFFSET)
#define SAM_CMCC_CTRL                (SAM_CMCC_BASE + SAM_CMCC_CTRL_OFFSET)
#define SAM_CMCC_SR                  (SAM_CMCC_BASE + SAM_CMCC_SR_OFFSET)
#define SAM_CMCC_MAINT0              (SAM_CMCC_BASE + SAM_CMCC_MAINT0_OFFSET)
#define SAM_CMCC_MAINT1              (SAM_CMCC_BASE + SAM_CMCC_MAINT1_OFFSET)
#define SAM_CMCC_MCFG                (SAM_CMCC_BASE + SAM_CMCC_MCFG_OFFSET)
#define SAM_CMCC_MEN                 (SAM_CMCC_BASE + SAM_CMCC_MEN_OFFSET)
#define SAM_CMCC_MCTRL               (SAM_CMCC_BASE + SAM_CMCC_MCTRL_OFFSET)
#define SAM_CMCC_MSR                 (SAM_CMCC_BASE + SAM_CMCC_MSR_OFFSET)

/* CMCC register bit definitions ********************************************************/

/* Cache Type Register */

#define CMCC_TYPE_AP                 (1 << 0)  /* Bit 0:  Access Port Access Allowed */
#define CMCC_TYPE_GCLK               (1 << 1)  /* Bit 1:  Dynamic Clock Gating Supported */
#define CMCC_TYPE_RANDP              (1 << 2)  /* Bit 2:  Random Selection Policy Supported */
#define CMCC_TYPE_LRUP               (1 << 3)  /* Bit 3:  Least Recently Used Policy Supported */
#define CMCC_TYPE_RRP                (1 << 4)  /* Bit 4:  Random Selection Policy Supported */
#define CMCC_TYPE_WAYNUM_SHIFT       (5)       /* Bits 5-6: Number of Way */
#define CMCC_TYPE_WAYNUM_MASK        (3 << CMCC_TYPE_WAYNUM_SHIFT)
#  define CMCC_TYPE_WAYNUM_DMAPPED   (0 << CMCC_TYPE_WAYNUM_SHIFT) /* Direct Mapped Cache */
#  define CMCC_TYPE_WAYNUM_ARCH2WAY  (1 << CMCC_TYPE_WAYNUM_SHIFT) /* 2-WAY set associative */
#  define CMCC_TYPE_WAYNUM_ARCH4WAY  (2 << CMCC_TYPE_WAYNUM_SHIFT) /* 4-WAY set associative */
#  define CMCC_TYPE_WAYNUM_ARCH8WAY  (3 << CMCC_TYPE_WAYNUM_SHIFT) /* 8-WAY set associative */
#define CMCC_TYPE_LCKDOWN            (1 << 7)  /* Bit 7:  Lock Down Supported */
#define CMCC_TYPE_CSIZE_SHIFT        (8)       /* Bits 8-10: Cache Size */
#define CMCC_TYPE_CSIZE_MASK         (7 << CMCC_TYPE_CSIZE_SHIFT)
#  define CMCC_TYPE_CSIZE_1KB        (0 << CMCC_TYPE_CSIZE_SHIFT) /* Cache Size 1 Kbytes */
#  define CMCC_TYPE_CSIZE_2KB        (1 << CMCC_TYPE_CSIZE_SHIFT) /* Cache Size 2 Kbytes */
#  define CMCC_TYPE_CSIZE_4KB        (2 << CMCC_TYPE_CSIZE_SHIFT) /* Cache Size 4 Kbytes */
#  define CMCC_TYPE_CSIZE_8KB        (3 << CMCC_TYPE_CSIZE_SHIFT) /* Cache Size 8 Kbytes */
#define CMCC_TYPE_CLSIZE_SHIFT       (11)      /* Bits 11-13: Cache Line Size */
#define CMCC_TYPE_CLSIZE_MASK        (7 << CMCC_TYPE_CLSIZE_SHIFT)
#  define CMCC_TYPE_CLSIZE_4B        (0 << CMCC_TYPE_CLSIZE_SHIFT) /* 4 Bytes */
#  define CMCC_TYPE_CLSIZE_8B        (1 << CMCC_TYPE_CLSIZE_SHIFT) /* 8 Bytes */
#  define CMCC_TYPE_CLSIZE_16B       (2 << CMCC_TYPE_CLSIZE_SHIFT) /* 16 Bytes */
#  define CMCC_TYPE_CLSIZE_32B       (3 << CMCC_TYPE_CLSIZE_SHIFT) /* 32 Bytes */

/* Cache Configuration Register */

#define CMCC_CFG_GCLKDIS             (1 << 0)  /* Bit 0:  Disable Clock Gating */
#define CMCC_CFG_ICDIS               (1 << 1)  /* Bit 1:  Instruction Cache Disable */
#define CMCC_CFG_DCDIS               (1 << 2)  /* Bit 2:  Data Cache Disable */
#define CMCC_CFG_CSIZEW_SHIFT        (8)       /* Bits 4-6: Cache Size Configured by Software */
#define CMCC_CFG_CSIZEW_MASK         (7 << CMCC_CFG_CSIZEW_SHIFT)
#  define CMCC_CFG_CSIZEW_1KB        (0 << CMCC_CFG_CSIZEW_SHIFT) /* Cache Size configured to 1KB */
#  define CMCC_CFG_CSIZEW_2KB        (1 << CMCC_CFG_CSIZEW_SHIFT) /* Cache Size configured to 2KB */
#  define CMCC_CFG_CSIZEW_4KB        (2 << CMCC_CFG_CSIZEW_SHIFT) /* Cache Size configured to 4KB */
#  define CMCC_CFG_CSIZEW_8KB        (3 << CMCC_CFG_CSIZEW_SHIFT) /* Cache Size configured to 8KB */
#  define CMCC_CFG_CSIZEW_16KB       (4 << CMCC_CFG_CSIZEW_SHIFT) /* Cache Size configured to 16KB */
#  define CMCC_CFG_CSIZEW_32KB       (5 << CMCC_CFG_CSIZEW_SHIFT) /* Cache Size configured to 32KB */
#  define CMCC_CFG_CSIZEW_64KB       (6 << CMCC_CFG_CSIZEW_SHIFT) /* Cache Size configured to 64KB */

/* Cache Control Register */

#define CMCC_CTRL_CEN                (1 << 0)  /* Bit 0:  Cache Controller Enable */

/* Cache Status Register */

#define CMCC_SR_CSTS                 (1 << 0)  /* Bit 0:  Cache Controller Status */

/* Cache Lock per Way */

#define CMCC_LCKWAY_SHIFT            (0)       /* Bits 0-3: Lockdown Way Register */
#define CMCC_LCKWAY_MASK             (7 << CMCC_LCKWAY_SHIFT)
#define CMCC_LCKWAY(n)               ((uint32_t)(n) << CMCC_LCKWAY_SHIFT)

/* Cache Maintenance Register 0 */

#define CMCC_MAINT0_INVALL           (1 << 0)  /* Bit 0:  Cache Controller Invalidate All */

/* Cache Maintenance Register 1 */

#define CMCC_MAINT1_INDEX_SHIFT      (4)       /* Bits 4-11: Invalidate Index */
#define CMCC_MAINT1_INDEX_MASK       (0xff << CMCC_MAINT1_INDEX_SHIFT)
#  define CMCC_MAINT1_INDEX(n)       ((uint32_t)(n) << CMCC_MAINT1_INDEX_SHIFT)
#define CMCC_MAINT1_WAY_SHIFT        (28)      /* Bits 28-31: Invalidate Way */
#define CMCC_MAINT1_WAY_MASK         (15 << CMCC_MAINT1_WAY_SHIFT)
#  define CMCC_MAINT1_WAY(n)         ((uint32_t)(n) << CMCC_MAINT1_WAY_SHIFT)
#  define CMCC_MAINT1_WAY0           (0 << CMCC_MAINT1_WAY_SHIFT) /* Way 0 selected */
#  define CMCC_MAINT1_WAY1           (1 << CMCC_MAINT1_WAY_SHIFT) /* Way 1 selected */
#  define CMCC_MAINT1_WAY2           (2 << CMCC_MAINT1_WAY_SHIFT) /* Way 2 selected */
#  define CMCC_MAINT1_WAY3           (3 << CMCC_MAINT1_WAY_SHIFT) /* Way 3 selected */

/* Cache Monitor Configuration Register */

#define CMCC_MCFG_MODE_SHIFT         (0)       /* Bits 0-1: Cache Controller Monitor Counter Mode */
#define CMCC_MCFG_MODE_MASK          (3 << CMCC_MCFG_MODE_SHIFT)
#  define CMCC_MCFG_MODE_CYCLECOUNT  (0 << CMCC_MCFG_MODE_SHIFT) /* Cycle counter */
#  define CMCC_MCFG_MODE_IHITCOUNT   (1 << CMCC_MCFG_MODE_SHIFT) /* Instruction hit counter */
#  define CMCC_MCFG_MODE_DHITCOUNT   (2 << CMCC_MCFG_MODE_SHIFT) /* Data hit counter */

/* Cache Monitor Enable Register */

#define CMCC_MEN_MENABLE             (1 << 0)  /* Bit 0:  Cache Controller Monitor Enable */

/* Cache Monitor Control Register */

#define CMCC_MCTRL_SWRST             (1 << 0)  /* Bit 0:  Monitor */

/* Cache Monitor Status Register -- 32-bit event count */

/****************************************************************************************
 * Public Types
 ****************************************************************************************/

/****************************************************************************************
 * Public Data
 ****************************************************************************************/

/****************************************************************************************
 * Public Functions
 ****************************************************************************************/

#endif /* __ARCH_ARM_SRC_SAMD5E5_CHIP_SAM_CMCC_H */

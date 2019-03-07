
"use strict";

let SetMavFrame = require('./SetMavFrame.js')
let FileList = require('./FileList.js')
let SetMode = require('./SetMode.js')
let FileRemoveDir = require('./FileRemoveDir.js')
let WaypointClear = require('./WaypointClear.js')
let CommandBool = require('./CommandBool.js')
let ParamPush = require('./ParamPush.js')
let FileRead = require('./FileRead.js')
let ParamSet = require('./ParamSet.js')
let FileMakeDir = require('./FileMakeDir.js')
let LogRequestEnd = require('./LogRequestEnd.js')
let FileChecksum = require('./FileChecksum.js')
let VehicleInfoGet = require('./VehicleInfoGet.js')
let ParamPull = require('./ParamPull.js')
let CommandTriggerControl = require('./CommandTriggerControl.js')
let CommandTriggerInterval = require('./CommandTriggerInterval.js')
let WaypointSetCurrent = require('./WaypointSetCurrent.js')
let CommandLong = require('./CommandLong.js')
let CommandInt = require('./CommandInt.js')
let FileClose = require('./FileClose.js')
let FileWrite = require('./FileWrite.js')
let WaypointPull = require('./WaypointPull.js')
let FileRename = require('./FileRename.js')
let StreamRate = require('./StreamRate.js')
let LogRequestData = require('./LogRequestData.js')
let MessageInterval = require('./MessageInterval.js')
let FileOpen = require('./FileOpen.js')
let FileTruncate = require('./FileTruncate.js')
let LogRequestList = require('./LogRequestList.js')
let ParamGet = require('./ParamGet.js')
let FileRemove = require('./FileRemove.js')
let WaypointPush = require('./WaypointPush.js')
let CommandTOL = require('./CommandTOL.js')
let CommandHome = require('./CommandHome.js')

module.exports = {
  SetMavFrame: SetMavFrame,
  FileList: FileList,
  SetMode: SetMode,
  FileRemoveDir: FileRemoveDir,
  WaypointClear: WaypointClear,
  CommandBool: CommandBool,
  ParamPush: ParamPush,
  FileRead: FileRead,
  ParamSet: ParamSet,
  FileMakeDir: FileMakeDir,
  LogRequestEnd: LogRequestEnd,
  FileChecksum: FileChecksum,
  VehicleInfoGet: VehicleInfoGet,
  ParamPull: ParamPull,
  CommandTriggerControl: CommandTriggerControl,
  CommandTriggerInterval: CommandTriggerInterval,
  WaypointSetCurrent: WaypointSetCurrent,
  CommandLong: CommandLong,
  CommandInt: CommandInt,
  FileClose: FileClose,
  FileWrite: FileWrite,
  WaypointPull: WaypointPull,
  FileRename: FileRename,
  StreamRate: StreamRate,
  LogRequestData: LogRequestData,
  MessageInterval: MessageInterval,
  FileOpen: FileOpen,
  FileTruncate: FileTruncate,
  LogRequestList: LogRequestList,
  ParamGet: ParamGet,
  FileRemove: FileRemove,
  WaypointPush: WaypointPush,
  CommandTOL: CommandTOL,
  CommandHome: CommandHome,
};

# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(WARNING "Invoking generate_messages() without having added any message or service file before.
You should either add add_message_files() and/or add_service_files() calls or remove the invocation of generate_messages().")
message(STATUS "offb_ex: 0 messages, 0 services")

set(MSG_I_FLAGS "-Istd_msgs:/opt/ros/kinetic/share/std_msgs/cmake/../msg;-Igeometry_msgs:/opt/ros/kinetic/share/geometry_msgs/cmake/../msg;-Imavros_msgs:/home/poojith/catkin_ws/src/mavros/mavros_msgs/msg;-Isensor_msgs:/opt/ros/kinetic/share/sensor_msgs/cmake/../msg;-Igeographic_msgs:/opt/ros/kinetic/share/geographic_msgs/cmake/../msg;-Iuuid_msgs:/opt/ros/kinetic/share/uuid_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(offb_ex_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages

### Generating Services

### Generating Module File
_generate_module_cpp(offb_ex
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/offb_ex
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(offb_ex_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(offb_ex_generate_messages offb_ex_generate_messages_cpp)

# add dependencies to all check dependencies targets

# target for backward compatibility
add_custom_target(offb_ex_gencpp)
add_dependencies(offb_ex_gencpp offb_ex_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS offb_ex_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages

### Generating Services

### Generating Module File
_generate_module_eus(offb_ex
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/offb_ex
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(offb_ex_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(offb_ex_generate_messages offb_ex_generate_messages_eus)

# add dependencies to all check dependencies targets

# target for backward compatibility
add_custom_target(offb_ex_geneus)
add_dependencies(offb_ex_geneus offb_ex_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS offb_ex_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages

### Generating Services

### Generating Module File
_generate_module_lisp(offb_ex
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/offb_ex
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(offb_ex_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(offb_ex_generate_messages offb_ex_generate_messages_lisp)

# add dependencies to all check dependencies targets

# target for backward compatibility
add_custom_target(offb_ex_genlisp)
add_dependencies(offb_ex_genlisp offb_ex_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS offb_ex_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages

### Generating Services

### Generating Module File
_generate_module_nodejs(offb_ex
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/offb_ex
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(offb_ex_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(offb_ex_generate_messages offb_ex_generate_messages_nodejs)

# add dependencies to all check dependencies targets

# target for backward compatibility
add_custom_target(offb_ex_gennodejs)
add_dependencies(offb_ex_gennodejs offb_ex_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS offb_ex_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages

### Generating Services

### Generating Module File
_generate_module_py(offb_ex
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/offb_ex
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(offb_ex_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(offb_ex_generate_messages offb_ex_generate_messages_py)

# add dependencies to all check dependencies targets

# target for backward compatibility
add_custom_target(offb_ex_genpy)
add_dependencies(offb_ex_genpy offb_ex_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS offb_ex_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/offb_ex)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/offb_ex
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(offb_ex_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(offb_ex_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()
if(TARGET mavros_msgs_generate_messages_cpp)
  add_dependencies(offb_ex_generate_messages_cpp mavros_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/offb_ex)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/offb_ex
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(offb_ex_generate_messages_eus std_msgs_generate_messages_eus)
endif()
if(TARGET geometry_msgs_generate_messages_eus)
  add_dependencies(offb_ex_generate_messages_eus geometry_msgs_generate_messages_eus)
endif()
if(TARGET mavros_msgs_generate_messages_eus)
  add_dependencies(offb_ex_generate_messages_eus mavros_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/offb_ex)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/offb_ex
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(offb_ex_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(offb_ex_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()
if(TARGET mavros_msgs_generate_messages_lisp)
  add_dependencies(offb_ex_generate_messages_lisp mavros_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/offb_ex)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/offb_ex
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(offb_ex_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()
if(TARGET geometry_msgs_generate_messages_nodejs)
  add_dependencies(offb_ex_generate_messages_nodejs geometry_msgs_generate_messages_nodejs)
endif()
if(TARGET mavros_msgs_generate_messages_nodejs)
  add_dependencies(offb_ex_generate_messages_nodejs mavros_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/offb_ex)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/offb_ex\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/offb_ex
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(offb_ex_generate_messages_py std_msgs_generate_messages_py)
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(offb_ex_generate_messages_py geometry_msgs_generate_messages_py)
endif()
if(TARGET mavros_msgs_generate_messages_py)
  add_dependencies(offb_ex_generate_messages_py mavros_msgs_generate_messages_py)
endif()

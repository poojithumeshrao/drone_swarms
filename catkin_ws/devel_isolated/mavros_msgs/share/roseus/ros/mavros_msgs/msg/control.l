;; Auto-generated. Do not edit!


(when (boundp 'mavros_msgs::control)
  (if (not (find-package "MAVROS_MSGS"))
    (make-package "MAVROS_MSGS"))
  (shadow 'control (find-package "MAVROS_MSGS")))
(unless (find-package "MAVROS_MSGS::CONTROL")
  (make-package "MAVROS_MSGS::CONTROL"))

(in-package "ROS")
;;//! \htmlinclude control.msg.html


(defclass mavros_msgs::control
  :super ros::object
  :slots (_uav_no _waypoint ))

(defmethod mavros_msgs::control
  (:init
   (&key
    ((:uav_no __uav_no) 0)
    ((:waypoint __waypoint) (instance mavros_msgs::Waypoint :init))
    )
   (send-super :init)
   (setq _uav_no (round __uav_no))
   (setq _waypoint __waypoint)
   self)
  (:uav_no
   (&optional __uav_no)
   (if __uav_no (setq _uav_no __uav_no)) _uav_no)
  (:waypoint
   (&rest __waypoint)
   (if (keywordp (car __waypoint))
       (send* _waypoint __waypoint)
     (progn
       (if __waypoint (setq _waypoint (car __waypoint)))
       _waypoint)))
  (:serialization-length
   ()
   (+
    ;; uint16 _uav_no
    2
    ;; mavros_msgs/Waypoint _waypoint
    (send _waypoint :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint16 _uav_no
       (write-word _uav_no s)
     ;; mavros_msgs/Waypoint _waypoint
       (send _waypoint :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint16 _uav_no
     (setq _uav_no (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; mavros_msgs/Waypoint _waypoint
     (send _waypoint :deserialize buf ptr-) (incf ptr- (send _waypoint :serialization-length))
   ;;
   self)
  )

(setf (get mavros_msgs::control :md5sum-) "b22c3da27199b85b440e51dfef537fee")
(setf (get mavros_msgs::control :datatype-) "mavros_msgs/control")
(setf (get mavros_msgs::control :definition-)
      "uint16 uav_no
mavros_msgs/Waypoint waypoint

================================================================================
MSG: mavros_msgs/Waypoint
# Waypoint.msg
#
# ROS representation of MAVLink MISSION_ITEM
# See mavlink documentation



# see enum MAV_FRAME
uint8 frame
uint8 FRAME_GLOBAL = 0
uint8 FRAME_LOCAL_NED = 1
uint8 FRAME_MISSION = 2
uint8 FRAME_GLOBAL_REL_ALT = 3
uint8 FRAME_LOCAL_ENU = 4

# see enum MAV_CMD and CommandCode.msg
uint16 command

bool is_current
bool autocontinue
# meaning of this params described in enum MAV_CMD
float32 param1
float32 param2
float32 param3
float32 param4
float64 x_lat
float64 y_long
float64 z_alt

")



(provide :mavros_msgs/control "b22c3da27199b85b440e51dfef537fee")



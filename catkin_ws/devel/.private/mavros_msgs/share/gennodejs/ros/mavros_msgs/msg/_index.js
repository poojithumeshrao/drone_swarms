
"use strict";

let Mavlink = require('./Mavlink.js');
let Trajectory = require('./Trajectory.js');
let RTCM = require('./RTCM.js');
let State = require('./State.js');
let FileEntry = require('./FileEntry.js');
let HilActuatorControls = require('./HilActuatorControls.js');
let RadioStatus = require('./RadioStatus.js');
let ExtendedState = require('./ExtendedState.js');
let WaypointReached = require('./WaypointReached.js');
let Waypoint = require('./Waypoint.js');
let LogData = require('./LogData.js');
let VFR_HUD = require('./VFR_HUD.js');
let WaypointList = require('./WaypointList.js');
let ParamValue = require('./ParamValue.js');
let PositionTarget = require('./PositionTarget.js');
let StatusText = require('./StatusText.js');
let VehicleInfo = require('./VehicleInfo.js');
let CamIMUStamp = require('./CamIMUStamp.js');
let Thrust = require('./Thrust.js');
let RCOut = require('./RCOut.js');
let HilGPS = require('./HilGPS.js');
let ActuatorControl = require('./ActuatorControl.js');
let Altitude = require('./Altitude.js');
let ADSBVehicle = require('./ADSBVehicle.js');
let Vibration = require('./Vibration.js');
let AttitudeTarget = require('./AttitudeTarget.js');
let ManualControl = require('./ManualControl.js');
let HilSensor = require('./HilSensor.js');
let BatteryStatus = require('./BatteryStatus.js');
let RCIn = require('./RCIn.js');
let OpticalFlowRad = require('./OpticalFlowRad.js');
let GlobalPositionTarget = require('./GlobalPositionTarget.js');
let LogEntry = require('./LogEntry.js');
let DebugValue = require('./DebugValue.js');
let Param = require('./Param.js');
let WheelOdomStamped = require('./WheelOdomStamped.js');
let CompanionProcessStatus = require('./CompanionProcessStatus.js');
let TimesyncStatus = require('./TimesyncStatus.js');
let CommandCode = require('./CommandCode.js');
let HomePosition = require('./HomePosition.js');
let OverrideRCIn = require('./OverrideRCIn.js');
let HilStateQuaternion = require('./HilStateQuaternion.js');
let HilControls = require('./HilControls.js');

module.exports = {
  Mavlink: Mavlink,
  Trajectory: Trajectory,
  RTCM: RTCM,
  State: State,
  FileEntry: FileEntry,
  HilActuatorControls: HilActuatorControls,
  RadioStatus: RadioStatus,
  ExtendedState: ExtendedState,
  WaypointReached: WaypointReached,
  Waypoint: Waypoint,
  LogData: LogData,
  VFR_HUD: VFR_HUD,
  WaypointList: WaypointList,
  ParamValue: ParamValue,
  PositionTarget: PositionTarget,
  StatusText: StatusText,
  VehicleInfo: VehicleInfo,
  CamIMUStamp: CamIMUStamp,
  Thrust: Thrust,
  RCOut: RCOut,
  HilGPS: HilGPS,
  ActuatorControl: ActuatorControl,
  Altitude: Altitude,
  ADSBVehicle: ADSBVehicle,
  Vibration: Vibration,
  AttitudeTarget: AttitudeTarget,
  ManualControl: ManualControl,
  HilSensor: HilSensor,
  BatteryStatus: BatteryStatus,
  RCIn: RCIn,
  OpticalFlowRad: OpticalFlowRad,
  GlobalPositionTarget: GlobalPositionTarget,
  LogEntry: LogEntry,
  DebugValue: DebugValue,
  Param: Param,
  WheelOdomStamped: WheelOdomStamped,
  CompanionProcessStatus: CompanionProcessStatus,
  TimesyncStatus: TimesyncStatus,
  CommandCode: CommandCode,
  HomePosition: HomePosition,
  OverrideRCIn: OverrideRCIn,
  HilStateQuaternion: HilStateQuaternion,
  HilControls: HilControls,
};

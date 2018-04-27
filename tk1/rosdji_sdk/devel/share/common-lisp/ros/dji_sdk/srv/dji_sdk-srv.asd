
(cl:in-package :asdf)

(defsystem "dji_sdk-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :dji_sdk-msg
)
  :components ((:file "_package")
    (:file "MessageFrequencyControl" :depends-on ("_package_MessageFrequencyControl"))
    (:file "_package_MessageFrequencyControl" :depends-on ("_package"))
    (:file "MissionFmSetTarget" :depends-on ("_package_MissionFmSetTarget"))
    (:file "_package_MissionFmSetTarget" :depends-on ("_package"))
    (:file "VelocityControl" :depends-on ("_package_VelocityControl"))
    (:file "_package_VelocityControl" :depends-on ("_package"))
    (:file "MissionCancel" :depends-on ("_package_MissionCancel"))
    (:file "_package_MissionCancel" :depends-on ("_package"))
    (:file "GimbalAngleControl" :depends-on ("_package_GimbalAngleControl"))
    (:file "_package_GimbalAngleControl" :depends-on ("_package"))
    (:file "MissionWpSetSpeed" :depends-on ("_package_MissionWpSetSpeed"))
    (:file "_package_MissionWpSetSpeed" :depends-on ("_package"))
    (:file "GimbalSpeedControl" :depends-on ("_package_GimbalSpeedControl"))
    (:file "_package_GimbalSpeedControl" :depends-on ("_package"))
    (:file "MissionHpSetSpeed" :depends-on ("_package_MissionHpSetSpeed"))
    (:file "_package_MissionHpSetSpeed" :depends-on ("_package"))
    (:file "VirtualRCDataControl" :depends-on ("_package_VirtualRCDataControl"))
    (:file "_package_VirtualRCDataControl" :depends-on ("_package"))
    (:file "MissionFmUpload" :depends-on ("_package_MissionFmUpload"))
    (:file "_package_MissionFmUpload" :depends-on ("_package"))
    (:file "MissionWpDownload" :depends-on ("_package_MissionWpDownload"))
    (:file "_package_MissionWpDownload" :depends-on ("_package"))
    (:file "MissionStart" :depends-on ("_package_MissionStart"))
    (:file "_package_MissionStart" :depends-on ("_package"))
    (:file "DroneArmControl" :depends-on ("_package_DroneArmControl"))
    (:file "_package_DroneArmControl" :depends-on ("_package"))
    (:file "MissionHpSetRadius" :depends-on ("_package_MissionHpSetRadius"))
    (:file "_package_MissionHpSetRadius" :depends-on ("_package"))
    (:file "LocalPositionControl" :depends-on ("_package_LocalPositionControl"))
    (:file "_package_LocalPositionControl" :depends-on ("_package"))
    (:file "MissionWpUpload" :depends-on ("_package_MissionWpUpload"))
    (:file "_package_MissionWpUpload" :depends-on ("_package"))
    (:file "MissionHpDownload" :depends-on ("_package_MissionHpDownload"))
    (:file "_package_MissionHpDownload" :depends-on ("_package"))
    (:file "VersionCheck" :depends-on ("_package_VersionCheck"))
    (:file "_package_VersionCheck" :depends-on ("_package"))
    (:file "SendDataToRemoteDevice" :depends-on ("_package_SendDataToRemoteDevice"))
    (:file "_package_SendDataToRemoteDevice" :depends-on ("_package"))
    (:file "VirtualRCEnableControl" :depends-on ("_package_VirtualRCEnableControl"))
    (:file "_package_VirtualRCEnableControl" :depends-on ("_package"))
    (:file "DroneTaskControl" :depends-on ("_package_DroneTaskControl"))
    (:file "_package_DroneTaskControl" :depends-on ("_package"))
    (:file "MissionHpResetYaw" :depends-on ("_package_MissionHpResetYaw"))
    (:file "_package_MissionHpResetYaw" :depends-on ("_package"))
    (:file "GlobalPositionControl" :depends-on ("_package_GlobalPositionControl"))
    (:file "_package_GlobalPositionControl" :depends-on ("_package"))
    (:file "Activation" :depends-on ("_package_Activation"))
    (:file "_package_Activation" :depends-on ("_package"))
    (:file "MissionWpGetSpeed" :depends-on ("_package_MissionWpGetSpeed"))
    (:file "_package_MissionWpGetSpeed" :depends-on ("_package"))
    (:file "MissionHpUpload" :depends-on ("_package_MissionHpUpload"))
    (:file "_package_MissionHpUpload" :depends-on ("_package"))
    (:file "CameraActionControl" :depends-on ("_package_CameraActionControl"))
    (:file "_package_CameraActionControl" :depends-on ("_package"))
    (:file "MissionPause" :depends-on ("_package_MissionPause"))
    (:file "_package_MissionPause" :depends-on ("_package"))
    (:file "AttitudeControl" :depends-on ("_package_AttitudeControl"))
    (:file "_package_AttitudeControl" :depends-on ("_package"))
    (:file "SDKPermissionControl" :depends-on ("_package_SDKPermissionControl"))
    (:file "_package_SDKPermissionControl" :depends-on ("_package"))
    (:file "SyncFlagControl" :depends-on ("_package_SyncFlagControl"))
    (:file "_package_SyncFlagControl" :depends-on ("_package"))
  ))
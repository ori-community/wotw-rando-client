namespace app {
struct IVRSystem_GetControllerRoleForTrackedDeviceIndex__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct IVRSystem_GetControllerRoleForTrackedDeviceIndex__StaticFields {
};
struct IVRSystem_GetControllerRoleForTrackedDeviceIndex__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_GetControllerRoleForTrackedDeviceIndex__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_GetControllerRoleForTrackedDeviceIndex__VTable vtable;
};

struct IVRSystem_GetTrackedDeviceClass__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_GetTrackedDeviceClass {
  struct IVRSystem_GetTrackedDeviceClass__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_GetTrackedDeviceClass__Fields fields;
};
struct IVRSystem_GetTrackedDeviceClass__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct IVRSystem_GetTrackedDeviceClass__StaticFields {
};
struct IVRSystem_GetTrackedDeviceClass__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_GetTrackedDeviceClass__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_GetTrackedDeviceClass__VTable vtable;
};

struct IVRSystem_IsTrackedDeviceConnected__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_IsTrackedDeviceConnected {
  struct IVRSystem_IsTrackedDeviceConnected__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_IsTrackedDeviceConnected__Fields fields;
};
struct IVRSystem_IsTrackedDeviceConnected__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct IVRSystem_IsTrackedDeviceConnected__StaticFields {
};
struct IVRSystem_IsTrackedDeviceConnected__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_IsTrackedDeviceConnected__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_IsTrackedDeviceConnected__VTable vtable;
};

struct IVRSystem_GetBoolTrackedDeviceProperty__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_GetBoolTrackedDeviceProperty {
  struct IVRSystem_GetBoolTrackedDeviceProperty__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_GetBoolTrackedDeviceProperty__Fields fields;
};
enum ETrackedDeviceProperty__Enum : int32_t {
  ETrackedDeviceProperty__Enum_Prop_Invalid = 0,
  ETrackedDeviceProperty__Enum_Prop_TrackingSystemName_String = 1000,
  ETrackedDeviceProperty__Enum_Prop_ModelNumber_String = 1001,
  ETrackedDeviceProperty__Enum_Prop_SerialNumber_String = 1002,
  ETrackedDeviceProperty__Enum_Prop_RenderModelName_String = 1003,
  ETrackedDeviceProperty__Enum_Prop_WillDriftInYaw_Bool = 1004,
  ETrackedDeviceProperty__Enum_Prop_ManufacturerName_String = 1005,
  ETrackedDeviceProperty__Enum_Prop_TrackingFirmwareVersion_String = 1006,
  ETrackedDeviceProperty__Enum_Prop_HardwareRevision_String = 1007,
  ETrackedDeviceProperty__Enum_Prop_AllWirelessDongleDescriptions_String = 1008,
  ETrackedDeviceProperty__Enum_Prop_ConnectedWirelessDongle_String = 1009,
  ETrackedDeviceProperty__Enum_Prop_DeviceIsWireless_Bool = 1010,
  ETrackedDeviceProperty__Enum_Prop_DeviceIsCharging_Bool = 1011,
  ETrackedDeviceProperty__Enum_Prop_DeviceBatteryPercentage_Float = 1012,
  ETrackedDeviceProperty__Enum_Prop_StatusDisplayTransform_Matrix34 = 1013,
  ETrackedDeviceProperty__Enum_Prop_Firmware_UpdateAvailable_Bool = 1014,
  ETrackedDeviceProperty__Enum_Prop_Firmware_ManualUpdate_Bool = 1015,
  ETrackedDeviceProperty__Enum_Prop_Firmware_ManualUpdateURL_String = 1016,
  ETrackedDeviceProperty__Enum_Prop_HardwareRevision_Uint64 = 1017,
  ETrackedDeviceProperty__Enum_Prop_FirmwareVersion_Uint64 = 1018,
  ETrackedDeviceProperty__Enum_Prop_FPGAVersion_Uint64 = 1019,
  ETrackedDeviceProperty__Enum_Prop_VRCVersion_Uint64 = 1020,
  ETrackedDeviceProperty__Enum_Prop_RadioVersion_Uint64 = 1021,
  ETrackedDeviceProperty__Enum_Prop_DongleVersion_Uint64 = 1022,
  ETrackedDeviceProperty__Enum_Prop_BlockServerShutdown_Bool = 1023,
  ETrackedDeviceProperty__Enum_Prop_CanUnifyCoordinateSystemWithHmd_Bool = 1024,
  ETrackedDeviceProperty__Enum_Prop_ContainsProximitySensor_Bool = 1025,
  ETrackedDeviceProperty__Enum_Prop_DeviceProvidesBatteryStatus_Bool = 1026,
  ETrackedDeviceProperty__Enum_Prop_DeviceCanPowerOff_Bool = 1027,
  ETrackedDeviceProperty__Enum_Prop_Firmware_ProgrammingTarget_String = 1028,
  ETrackedDeviceProperty__Enum_Prop_DeviceClass_Int32 = 1029,
  ETrackedDeviceProperty__Enum_Prop_HasCamera_Bool = 1030,
  ETrackedDeviceProperty__Enum_Prop_DriverVersion_String = 1031,
  ETrackedDeviceProperty__Enum_Prop_Firmware_ForceUpdateRequired_Bool = 1032,
  ETrackedDeviceProperty__Enum_Prop_ViveSystemButtonFixRequired_Bool = 1033,
  ETrackedDeviceProperty__Enum_Prop_ParentDriver_Uint64 = 1034,
  ETrackedDeviceProperty__Enum_Prop_ResourceRoot_String = 1035,
  ETrackedDeviceProperty__Enum_Prop_ReportsTimeSinceVSync_Bool = 2000,
  ETrackedDeviceProperty__Enum_Prop_SecondsFromVsyncToPhotons_Float = 2001,
  ETrackedDeviceProperty__Enum_Prop_DisplayFrequency_Float = 2002,
  ETrackedDeviceProperty__Enum_Prop_UserIpdMeters_Float = 2003,
  ETrackedDeviceProperty__Enum_Prop_CurrentUniverseId_Uint64 = 2004,
  ETrackedDeviceProperty__Enum_Prop_PreviousUniverseId_Uint64 = 2005,
  ETrackedDeviceProperty__Enum_Prop_DisplayFirmwareVersion_Uint64 = 2006,
  ETrackedDeviceProperty__Enum_Prop_IsOnDesktop_Bool = 2007,
  ETrackedDeviceProperty__Enum_Prop_DisplayMCType_Int32 = 2008,
  ETrackedDeviceProperty__Enum_Prop_DisplayMCOffset_Float = 2009,
  ETrackedDeviceProperty__Enum_Prop_DisplayMCScale_Float = 2010,
  ETrackedDeviceProperty__Enum_Prop_EdidVendorID_Int32 = 2011,
  ETrackedDeviceProperty__Enum_Prop_DisplayMCImageLeft_String = 2012,
  ETrackedDeviceProperty__Enum_Prop_DisplayMCImageRight_String = 2013,
  ETrackedDeviceProperty__Enum_Prop_DisplayGCBlackClamp_Float = 2014,
  ETrackedDeviceProperty__Enum_Prop_EdidProductID_Int32 = 2015,
  ETrackedDeviceProperty__Enum_Prop_CameraToHeadTransform_Matrix34 = 2016,
  ETrackedDeviceProperty__Enum_Prop_DisplayGCType_Int32 = 2017,
  ETrackedDeviceProperty__Enum_Prop_DisplayGCOffset_Float = 2018,
  ETrackedDeviceProperty__Enum_Prop_DisplayGCScale_Float = 2019,
  ETrackedDeviceProperty__Enum_Prop_DisplayGCPrescale_Float = 2020,
  ETrackedDeviceProperty__Enum_Prop_DisplayGCImage_String = 2021,
  ETrackedDeviceProperty__Enum_Prop_LensCenterLeftU_Float = 2022,
  ETrackedDeviceProperty__Enum_Prop_LensCenterLeftV_Float = 2023,
  ETrackedDeviceProperty__Enum_Prop_LensCenterRightU_Float = 2024,
  ETrackedDeviceProperty__Enum_Prop_LensCenterRightV_Float = 2025,
  ETrackedDeviceProperty__Enum_Prop_UserHeadToEyeDepthMeters_Float = 2026,
  ETrackedDeviceProperty__Enum_Prop_CameraFirmwareVersion_Uint64 = 2027,
  ETrackedDeviceProperty__Enum_Prop_CameraFirmwareDescription_String = 2028,
  ETrackedDeviceProperty__Enum_Prop_DisplayFPGAVersion_Uint64 = 2029,
  ETrackedDeviceProperty__Enum_Prop_DisplayBootloaderVersion_Uint64 = 2030,
  ETrackedDeviceProperty__Enum_Prop_DisplayHardwareVersion_Uint64 = 2031,
  ETrackedDeviceProperty__Enum_Prop_AudioFirmwareVersion_Uint64 = 2032,
  ETrackedDeviceProperty__Enum_Prop_CameraCompatibilityMode_Int32 = 2033,
  ETrackedDeviceProperty__Enum_Prop_ScreenshotHorizontalFieldOfViewDegrees_Float = 2034,
  ETrackedDeviceProperty__Enum_Prop_ScreenshotVerticalFieldOfViewDegrees_Float = 2035,
  ETrackedDeviceProperty__Enum_Prop_DisplaySuppressed_Bool = 2036,
  ETrackedDeviceProperty__Enum_Prop_DisplayAllowNightMode_Bool = 2037,
  ETrackedDeviceProperty__Enum_Prop_DisplayMCImageWidth_Int32 = 2038,
  ETrackedDeviceProperty__Enum_Prop_DisplayMCImageHeight_Int32 = 2039,
  ETrackedDeviceProperty__Enum_Prop_DisplayMCImageNumChannels_Int32 = 2040,
  ETrackedDeviceProperty__Enum_Prop_DisplayMCImageData_Binary = 2041,
  ETrackedDeviceProperty__Enum_Prop_SecondsFromPhotonsToVblank_Float = 2042,
  ETrackedDeviceProperty__Enum_Prop_DriverDirectModeSendsVsyncEvents_Bool = 2043,
  ETrackedDeviceProperty__Enum_Prop_DisplayDebugMode_Bool = 2044,
  ETrackedDeviceProperty__Enum_Prop_GraphicsAdapterLuid_Uint64 = 2045,
  ETrackedDeviceProperty__Enum_Prop_DriverProvidedChaperonePath_String = 2048,
  ETrackedDeviceProperty__Enum_Prop_AttachedDeviceId_String = 3000,
  ETrackedDeviceProperty__Enum_Prop_SupportedButtons_Uint64 = 3001,
  ETrackedDeviceProperty__Enum_Prop_Axis0Type_Int32 = 3002,
  ETrackedDeviceProperty__Enum_Prop_Axis1Type_Int32 = 3003,
  ETrackedDeviceProperty__Enum_Prop_Axis2Type_Int32 = 3004,
  ETrackedDeviceProperty__Enum_Prop_Axis3Type_Int32 = 3005,
  ETrackedDeviceProperty__Enum_Prop_Axis4Type_Int32 = 3006,
  ETrackedDeviceProperty__Enum_Prop_ControllerRoleHint_Int32 = 3007,
  ETrackedDeviceProperty__Enum_Prop_FieldOfViewLeftDegrees_Float = 4000,
  ETrackedDeviceProperty__Enum_Prop_FieldOfViewRightDegrees_Float = 4001,
  ETrackedDeviceProperty__Enum_Prop_FieldOfViewTopDegrees_Float = 4002,
  ETrackedDeviceProperty__Enum_Prop_FieldOfViewBottomDegrees_Float = 4003,
  ETrackedDeviceProperty__Enum_Prop_TrackingRangeMinimumMeters_Float = 4004,
  ETrackedDeviceProperty__Enum_Prop_TrackingRangeMaximumMeters_Float = 4005,
  ETrackedDeviceProperty__Enum_Prop_ModeLabel_String = 4006,
  ETrackedDeviceProperty__Enum_Prop_IconPathName_String = 5000,
  ETrackedDeviceProperty__Enum_Prop_NamedIconPathDeviceOff_String = 5001,
  ETrackedDeviceProperty__Enum_Prop_NamedIconPathDeviceSearching_String = 5002,
  ETrackedDeviceProperty__Enum_Prop_NamedIconPathDeviceSearchingAlert_String = 5003,
  ETrackedDeviceProperty__Enum_Prop_NamedIconPathDeviceReady_String = 5004,
  ETrackedDeviceProperty__Enum_Prop_NamedIconPathDeviceReadyAlert_String = 5005,
  ETrackedDeviceProperty__Enum_Prop_NamedIconPathDeviceNotReady_String = 5006,
  ETrackedDeviceProperty__Enum_Prop_NamedIconPathDeviceStandby_String = 5007,
  ETrackedDeviceProperty__Enum_Prop_NamedIconPathDeviceAlertLow_String = 5008,
  ETrackedDeviceProperty__Enum_Prop_DisplayHiddenArea_Binary_Start = 5100,
  ETrackedDeviceProperty__Enum_Prop_DisplayHiddenArea_Binary_End = 5150,
  ETrackedDeviceProperty__Enum_Prop_UserConfigPath_String = 6000,
  ETrackedDeviceProperty__Enum_Prop_InstallPath_String = 6001,
  ETrackedDeviceProperty__Enum_Prop_HasDisplayComponent_Bool = 6002,
  ETrackedDeviceProperty__Enum_Prop_HasControllerComponent_Bool = 6003,
  ETrackedDeviceProperty__Enum_Prop_HasCameraComponent_Bool = 6004,
  ETrackedDeviceProperty__Enum_Prop_HasDriverDirectModeComponent_Bool = 6005,
  ETrackedDeviceProperty__Enum_Prop_HasVirtualDisplayComponent_Bool = 6006,
  ETrackedDeviceProperty__Enum_Prop_VendorSpecific_Reserved_Start = 10000,
  ETrackedDeviceProperty__Enum_Prop_VendorSpecific_Reserved_End = 10999,
};
struct ETrackedDeviceProperty__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ETrackedDeviceProperty__Enum value;
};
enum ETrackedPropertyError__Enum : int32_t {
  ETrackedPropertyError__Enum_TrackedProp_Success = 0,
  ETrackedPropertyError__Enum_TrackedProp_WrongDataType = 1,
  ETrackedPropertyError__Enum_TrackedProp_WrongDeviceClass = 2,
  ETrackedPropertyError__Enum_TrackedProp_BufferTooSmall = 3,
  ETrackedPropertyError__Enum_TrackedProp_UnknownProperty = 4,
  ETrackedPropertyError__Enum_TrackedProp_InvalidDevice = 5,
  ETrackedPropertyError__Enum_TrackedProp_CouldNotContactServer = 6,
  ETrackedPropertyError__Enum_TrackedProp_ValueNotProvidedByDevice = 7,
  ETrackedPropertyError__Enum_TrackedProp_StringExceedsMaximumLength = 8,
  ETrackedPropertyError__Enum_TrackedProp_NotYetAvailable = 9,
  ETrackedPropertyError__Enum_TrackedProp_PermissionDenied = 10,
  ETrackedPropertyError__Enum_TrackedProp_InvalidOperation = 11,
};
struct ETrackedPropertyError__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ETrackedPropertyError__Enum value;
};
struct IVRSystem_GetBoolTrackedDeviceProperty__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct IVRSystem_GetBoolTrackedDeviceProperty__StaticFields {
};
struct IVRSystem_GetBoolTrackedDeviceProperty__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_GetBoolTrackedDeviceProperty__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_GetBoolTrackedDeviceProperty__VTable vtable;
};

struct IVRSystem_GetFloatTrackedDeviceProperty__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_GetFloatTrackedDeviceProperty {
  struct IVRSystem_GetFloatTrackedDeviceProperty__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_GetFloatTrackedDeviceProperty__Fields fields;
};
struct IVRSystem_GetFloatTrackedDeviceProperty__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct IVRSystem_GetFloatTrackedDeviceProperty__StaticFields {
};
struct IVRSystem_GetFloatTrackedDeviceProperty__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_GetFloatTrackedDeviceProperty__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_GetFloatTrackedDeviceProperty__VTable vtable;
};

struct IVRSystem_GetInt32TrackedDeviceProperty__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_GetInt32TrackedDeviceProperty {
  struct IVRSystem_GetInt32TrackedDeviceProperty__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_GetInt32TrackedDeviceProperty__Fields fields;
};
struct IVRSystem_GetInt32TrackedDeviceProperty__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct IVRSystem_GetInt32TrackedDeviceProperty__StaticFields {
};
struct IVRSystem_GetInt32TrackedDeviceProperty__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_GetInt32TrackedDeviceProperty__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_GetInt32TrackedDeviceProperty__VTable vtable;
};

struct IVRSystem_GetUint64TrackedDeviceProperty__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_GetUint64TrackedDeviceProperty {
  struct IVRSystem_GetUint64TrackedDeviceProperty__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_GetUint64TrackedDeviceProperty__Fields fields;
};
struct IVRSystem_GetUint64TrackedDeviceProperty__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct IVRSystem_GetUint64TrackedDeviceProperty__StaticFields {
};
struct IVRSystem_GetUint64TrackedDeviceProperty__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_GetUint64TrackedDeviceProperty__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_GetUint64TrackedDeviceProperty__VTable vtable;
};

struct IVRSystem_GetMatrix34TrackedDeviceProperty__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_GetMatrix34TrackedDeviceProperty {
  struct IVRSystem_GetMatrix34TrackedDeviceProperty__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_GetMatrix34TrackedDeviceProperty__Fields fields;
};
struct IVRSystem_GetMatrix34TrackedDeviceProperty__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct IVRSystem_GetMatrix34TrackedDeviceProperty__StaticFields {
};
struct IVRSystem_GetMatrix34TrackedDeviceProperty__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_GetMatrix34TrackedDeviceProperty__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_GetMatrix34TrackedDeviceProperty__VTable vtable;
};

struct IVRSystem_GetStringTrackedDeviceProperty__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_GetStringTrackedDeviceProperty {
  struct IVRSystem_GetStringTrackedDeviceProperty__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_GetStringTrackedDeviceProperty__Fields fields;
};
struct IVRSystem_GetStringTrackedDeviceProperty__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct IVRSystem_GetStringTrackedDeviceProperty__StaticFields {
};
struct IVRSystem_GetStringTrackedDeviceProperty__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_GetStringTrackedDeviceProperty__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_GetStringTrackedDeviceProperty__VTable vtable;
};

struct IVRSystem_GetPropErrorNameFromEnum__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_GetPropErrorNameFromEnum {
  struct IVRSystem_GetPropErrorNameFromEnum__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_GetPropErrorNameFromEnum__Fields fields;
};
struct IVRSystem_GetPropErrorNameFromEnum__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct IVRSystem_GetPropErrorNameFromEnum__StaticFields {
};
struct IVRSystem_GetPropErrorNameFromEnum__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IVRSystem_GetPropErrorNameFromEnum__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IVRSystem_GetPropErrorNameFromEnum__VTable vtable;
};

struct IVRSystem_PollNextEvent__Fields {
  struct MulticastDelegate__Fields _;
};
struct IVRSystem_PollNextEvent {
  struct IVRSystem_PollNextEvent__Class *klass;
  struct MonitorData *monitor;
  struct IVRSystem_PollNextEvent__Fields fields;
};
struct VREvent_Reserved_t {
  uint64_t reserved0;
  uint64_t reserved1;
};
struct VREvent_Reserved_t__Boxed {
  struct VREvent_Reserved_t__Class *klass;
  struct MonitorData *monitor;
  struct VREvent_Reserved_t fields;
};
struct VREvent_Controller_t {
  uint32_t button;
};
struct VREvent_Controller_t__Boxed {
  struct VREvent_Controller_t__Class *klass;
  struct MonitorData *monitor;
  struct VREvent_Controller_t fields;
};
struct VREvent_Mouse_t {
  float x;
  float y;
  uint32_t button;
};
struct VREvent_Mouse_t__Boxed {
  struct VREvent_Mouse_t__Class *klass;
  struct MonitorData *monitor;
  struct VREvent_Mouse_t fields;
};
struct VREvent_Scroll_t {
  float xdelta;
  float ydelta;
  uint32_t repeatCount;
};
struct VREvent_Scroll_t__Boxed {
  struct VREvent_Scroll_t__Class *klass;
  struct MonitorData *monitor;
  struct VREvent_Scroll_t fields;
};
struct VREvent_Process_t {
  uint32_t pid;
  uint32_t oldPid;
  bool bForced;
};
struct VREvent_Process_t__Boxed {
  struct VREvent_Process_t__Class *klass;
  struct MonitorData *monitor;
  struct VREvent_Process_t fields;
};
struct VREvent_Notification_t {
  uint64_t ulUserValue;
  uint32_t notificationId;
};
struct VREvent_Notification_t__Boxed {
  struct VREvent_Notification_t__Class *klass;
  struct MonitorData *monitor;
  struct VREvent_Notification_t fields;
};
struct VREvent_Overlay_t {
  uint64_t overlayHandle;
};
struct VREvent_Overlay_t__Boxed {
  struct VREvent_Overlay_t__Class *klass;
  struct MonitorData *monitor;
  struct VREvent_Overlay_t fields;
};
struct VREvent_Status_t {
  uint32_t statusState;
};
struct VREvent_Status_t__Boxed {
  struct VREvent_Status_t__Class *klass;
  struct MonitorData *monitor;
  struct VREvent_Status_t fields;
};
struct VREvent_Ipd_t {
  float ipdMeters;
};
struct VREvent_Ipd_t__Boxed {
  struct VREvent_Ipd_t__Class *klass;
  struct MonitorData *monitor;
  struct VREvent_Ipd_t fields;
};
struct VREvent_Chaperone_t {
  uint64_t m_nPreviousUniverse;
  uint64_t m_nCurrentUniverse;
};
struct VREvent_Chaperone_t__Boxed {
  struct VREvent_Chaperone_t__Class *klass;
  struct MonitorData *monitor;
  struct VREvent_Chaperone_t fields;
};
struct VREvent_PerformanceTest_t {
  uint32_t m_nFidelityLevel;
};
struct VREvent_PerformanceTest_t__Boxed {
  struct VREvent_PerformanceTest_t__Class *klass;
  struct MonitorData *monitor;
  struct VREvent_PerformanceTest_t fields;
};
struct VREvent_TouchPadMove_t {
  bool bFingerDown;
  float flSecondsFingerDown;
  float fValueXFirst;
  float fValueYFirst;
  float fValueXRaw;
  float fValueYRaw;
};
struct VREvent_TouchPadMove_t__Boxed {
  struct VREvent_TouchPadMove_t__Class *klass;
  struct MonitorData *monitor;
  struct VREvent_TouchPadMove_t fields;
};
struct VREvent_SeatedZeroPoseReset_t {
  bool bResetBySystemMenu;
};
struct VREvent_SeatedZeroPoseReset_t__Boxed {
  struct VREvent_SeatedZeroPoseReset_t__Class *klass;
  struct MonitorData *monitor;
  struct VREvent_SeatedZeroPoseReset_t fields;
};
struct VREvent_Screenshot_t {
  uint32_t handle;
  uint32_t type;
};
struct VREvent_Screenshot_t__Boxed {
  struct VREvent_Screenshot_t__Class *klass;
  struct MonitorData *monitor;
  struct VREvent_Screenshot_t fields;
};
struct VREvent_ScreenshotProgress_t {
  float progress;
};
struct VREvent_ScreenshotProgress_t__Boxed {
  struct VREvent_ScreenshotProgress_t__Class *klass;
  struct MonitorData *monitor;
  struct VREvent_ScreenshotProgress_t fields;
};
struct VREvent_ApplicationLaunch_t {
  uint32_t pid;
  uint32_t unArgsHandle;
};
struct VREvent_ApplicationLaunch_t__Boxed {
  struct VREvent_ApplicationLaunch_t__Class *klass;
  struct MonitorData *monitor;
  struct VREvent_ApplicationLaunch_t fields;
};
struct VREvent_EditingCameraSurface_t {
  uint64_t overlayHandle;
  uint32_t nVisualMode;
};
struct VREvent_EditingCameraSurface_t__Boxed {
  struct VREvent_EditingCameraSurface_t__Class *klass;
  struct MonitorData *monitor;
  struct VREvent_EditingCameraSurface_t fields;
};
struct VREvent_MessageOverlay_t {
  uint32_t unVRMessageOverlayResponse;
};
struct VREvent_MessageOverlay_t__Boxed {
  struct VREvent_MessageOverlay_t__Class *klass;
  struct MonitorData *monitor;
  struct VREvent_MessageOverlay_t fields;
};
struct VREvent_Keyboard_t {
  uint8_t cNewInput0;
  uint8_t cNewInput1;
  uint8_t cNewInput2;
  uint8_t cNewInput3;
  uint8_t cNewInput4;
  uint8_t cNewInput5;
  uint8_t cNewInput6;
  uint8_t cNewInput7;
  uint64_t uUserValue;
};
struct VREvent_Keyboard_t__Boxed {
  struct VREvent_Keyboard_t__Class *klass;
  struct MonitorData *monitor;
  struct VREvent_Keyboard_t fields;
};
struct VREvent_Data_t {
  struct VREvent_Reserved_t reserved;
  struct VREvent_Controller_t controller;
  struct VREvent_Mouse_t mouse;
  struct VREvent_Scroll_t scroll;
  struct VREvent_Process_t process;
  struct VREvent_Notification_t notification;
  struct VREvent_Overlay_t overlay;
  struct VREvent_Status_t status;
  struct VREvent_Ipd_t ipd;
  struct VREvent_Chaperone_t chaperone;
  struct VREvent_PerformanceTest_t performanceTest;
  struct VREvent_TouchPadMove_t touchPadMove;
  struct VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset;
  struct VREvent_Screenshot_t screenshot;
  struct VREvent_ScreenshotProgress_t screenshotProgress;
  struct VREvent_ApplicationLaunch_t applicationLaunch;
  struct VREvent_EditingCameraSurface_t cameraSurface;
  struct VREvent_MessageOverlay_t messageOverlay;
  struct VREvent_Keyboard_t keyboard;
};
struct VREvent_Data_t__Boxed {
  struct VREvent_Data_t__Class *klass;
  struct MonitorData *monitor;
  struct VREvent_Data_t fields;
};
struct VREvent_t {
  uint32_t eventType;
  uint32_t trackedDeviceIndex;
  float eventAgeSeconds;
  struct VREvent_Data_t data;
};
struct VREvent_t__Boxed {
  struct VREvent_t__Class *klass;
  struct MonitorData *monitor;
  struct VREvent_t fields;
};
struct VREvent_Reserved_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VREvent_Reserved_t__StaticFields {
};
struct VREvent_Reserved_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VREvent_Reserved_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VREvent_Reserved_t__VTable vtable;
};
struct VREvent_Controller_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VREvent_Controller_t__StaticFields {
};
struct VREvent_Controller_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VREvent_Controller_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VREvent_Controller_t__VTable vtable;
};
struct VREvent_Mouse_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VREvent_Mouse_t__StaticFields {
};
struct VREvent_Mouse_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VREvent_Mouse_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VREvent_Mouse_t__VTable vtable;
};
struct VREvent_Scroll_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VREvent_Scroll_t__StaticFields {
};
struct VREvent_Scroll_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VREvent_Scroll_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VREvent_Scroll_t__VTable vtable;
};
struct VREvent_Process_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VREvent_Process_t__StaticFields {
};
struct VREvent_Process_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VREvent_Process_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VREvent_Process_t__VTable vtable;
};
struct VREvent_Notification_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VREvent_Notification_t__StaticFields {
};
struct VREvent_Notification_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VREvent_Notification_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VREvent_Notification_t__VTable vtable;
};
struct VREvent_Overlay_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VREvent_Overlay_t__StaticFields {
};
struct VREvent_Overlay_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VREvent_Overlay_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VREvent_Overlay_t__VTable vtable;
};
struct VREvent_Status_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VREvent_Status_t__StaticFields {
};
struct VREvent_Status_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VREvent_Status_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VREvent_Status_t__VTable vtable;
};
struct VREvent_Ipd_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VREvent_Ipd_t__StaticFields {
};
struct VREvent_Ipd_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VREvent_Ipd_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VREvent_Ipd_t__VTable vtable;
};
struct VREvent_Chaperone_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VREvent_Chaperone_t__StaticFields {
};
struct VREvent_Chaperone_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VREvent_Chaperone_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VREvent_Chaperone_t__VTable vtable;
};
struct VREvent_PerformanceTest_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VREvent_PerformanceTest_t__StaticFields {
};
struct VREvent_PerformanceTest_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VREvent_PerformanceTest_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VREvent_PerformanceTest_t__VTable vtable;
};
struct VREvent_TouchPadMove_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VREvent_TouchPadMove_t__StaticFields {
};
struct VREvent_TouchPadMove_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VREvent_TouchPadMove_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VREvent_TouchPadMove_t__VTable vtable;
};
struct VREvent_SeatedZeroPoseReset_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VREvent_SeatedZeroPoseReset_t__StaticFields {
};
struct VREvent_SeatedZeroPoseReset_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VREvent_SeatedZeroPoseReset_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VREvent_SeatedZeroPoseReset_t__VTable vtable;
};
struct VREvent_Screenshot_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VREvent_Screenshot_t__StaticFields {
};
struct VREvent_Screenshot_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VREvent_Screenshot_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VREvent_Screenshot_t__VTable vtable;
};
struct VREvent_ScreenshotProgress_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VREvent_ScreenshotProgress_t__StaticFields {
};
struct VREvent_ScreenshotProgress_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VREvent_ScreenshotProgress_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VREvent_ScreenshotProgress_t__VTable vtable;
};
struct VREvent_ApplicationLaunch_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VREvent_ApplicationLaunch_t__StaticFields {
};
struct VREvent_ApplicationLaunch_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VREvent_ApplicationLaunch_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VREvent_ApplicationLaunch_t__VTable vtable;
};
struct VREvent_EditingCameraSurface_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VREvent_EditingCameraSurface_t__StaticFields {
};
struct VREvent_EditingCameraSurface_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VREvent_EditingCameraSurface_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VREvent_EditingCameraSurface_t__VTable vtable;
};
struct VREvent_MessageOverlay_t__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VREvent_MessageOverlay_t__StaticFields {
};
struct VREvent_MessageOverlay_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VREvent_MessageOverlay_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VREvent_MessageOverlay_t__VTable vtable;
};}
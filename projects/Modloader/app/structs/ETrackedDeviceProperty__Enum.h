#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ETrackedDeviceProperty__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ETrackedDeviceProperty__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ETrackedDeviceProperty__Enum_DEFINED)
#define IL2CPP_STRUCT_ETrackedDeviceProperty__Enum_DEFINED
enum class ETrackedDeviceProperty__Enum : int32_t {
    Prop_Invalid = 0x00000000,
    Prop_TrackingSystemName_String = 0x000003e8,
    Prop_ModelNumber_String = 0x000003e9,
    Prop_SerialNumber_String = 0x000003ea,
    Prop_RenderModelName_String = 0x000003eb,
    Prop_WillDriftInYaw_Bool = 0x000003ec,
    Prop_ManufacturerName_String = 0x000003ed,
    Prop_TrackingFirmwareVersion_String = 0x000003ee,
    Prop_HardwareRevision_String = 0x000003ef,
    Prop_AllWirelessDongleDescriptions_String = 0x000003f0,
    Prop_ConnectedWirelessDongle_String = 0x000003f1,
    Prop_DeviceIsWireless_Bool = 0x000003f2,
    Prop_DeviceIsCharging_Bool = 0x000003f3,
    Prop_DeviceBatteryPercentage_Float = 0x000003f4,
    Prop_StatusDisplayTransform_Matrix34 = 0x000003f5,
    Prop_Firmware_UpdateAvailable_Bool = 0x000003f6,
    Prop_Firmware_ManualUpdate_Bool = 0x000003f7,
    Prop_Firmware_ManualUpdateURL_String = 0x000003f8,
    Prop_HardwareRevision_Uint64 = 0x000003f9,
    Prop_FirmwareVersion_Uint64 = 0x000003fa,
    Prop_FPGAVersion_Uint64 = 0x000003fb,
    Prop_VRCVersion_Uint64 = 0x000003fc,
    Prop_RadioVersion_Uint64 = 0x000003fd,
    Prop_DongleVersion_Uint64 = 0x000003fe,
    Prop_BlockServerShutdown_Bool = 0x000003ff,
    Prop_CanUnifyCoordinateSystemWithHmd_Bool = 0x00000400,
    Prop_ContainsProximitySensor_Bool = 0x00000401,
    Prop_DeviceProvidesBatteryStatus_Bool = 0x00000402,
    Prop_DeviceCanPowerOff_Bool = 0x00000403,
    Prop_Firmware_ProgrammingTarget_String = 0x00000404,
    Prop_DeviceClass_Int32 = 0x00000405,
    Prop_HasCamera_Bool = 0x00000406,
    Prop_DriverVersion_String = 0x00000407,
    Prop_Firmware_ForceUpdateRequired_Bool = 0x00000408,
    Prop_ViveSystemButtonFixRequired_Bool = 0x00000409,
    Prop_ParentDriver_Uint64 = 0x0000040a,
    Prop_ResourceRoot_String = 0x0000040b,
    Prop_ReportsTimeSinceVSync_Bool = 0x000007d0,
    Prop_SecondsFromVsyncToPhotons_Float = 0x000007d1,
    Prop_DisplayFrequency_Float = 0x000007d2,
    Prop_UserIpdMeters_Float = 0x000007d3,
    Prop_CurrentUniverseId_Uint64 = 0x000007d4,
    Prop_PreviousUniverseId_Uint64 = 0x000007d5,
    Prop_DisplayFirmwareVersion_Uint64 = 0x000007d6,
    Prop_IsOnDesktop_Bool = 0x000007d7,
    Prop_DisplayMCType_Int32 = 0x000007d8,
    Prop_DisplayMCOffset_Float = 0x000007d9,
    Prop_DisplayMCScale_Float = 0x000007da,
    Prop_EdidVendorID_Int32 = 0x000007db,
    Prop_DisplayMCImageLeft_String = 0x000007dc,
    Prop_DisplayMCImageRight_String = 0x000007dd,
    Prop_DisplayGCBlackClamp_Float = 0x000007de,
    Prop_EdidProductID_Int32 = 0x000007df,
    Prop_CameraToHeadTransform_Matrix34 = 0x000007e0,
    Prop_DisplayGCType_Int32 = 0x000007e1,
    Prop_DisplayGCOffset_Float = 0x000007e2,
    Prop_DisplayGCScale_Float = 0x000007e3,
    Prop_DisplayGCPrescale_Float = 0x000007e4,
    Prop_DisplayGCImage_String = 0x000007e5,
    Prop_LensCenterLeftU_Float = 0x000007e6,
    Prop_LensCenterLeftV_Float = 0x000007e7,
    Prop_LensCenterRightU_Float = 0x000007e8,
    Prop_LensCenterRightV_Float = 0x000007e9,
    Prop_UserHeadToEyeDepthMeters_Float = 0x000007ea,
    Prop_CameraFirmwareVersion_Uint64 = 0x000007eb,
    Prop_CameraFirmwareDescription_String = 0x000007ec,
    Prop_DisplayFPGAVersion_Uint64 = 0x000007ed,
    Prop_DisplayBootloaderVersion_Uint64 = 0x000007ee,
    Prop_DisplayHardwareVersion_Uint64 = 0x000007ef,
    Prop_AudioFirmwareVersion_Uint64 = 0x000007f0,
    Prop_CameraCompatibilityMode_Int32 = 0x000007f1,
    Prop_ScreenshotHorizontalFieldOfViewDegrees_Float = 0x000007f2,
    Prop_ScreenshotVerticalFieldOfViewDegrees_Float = 0x000007f3,
    Prop_DisplaySuppressed_Bool = 0x000007f4,
    Prop_DisplayAllowNightMode_Bool = 0x000007f5,
    Prop_DisplayMCImageWidth_Int32 = 0x000007f6,
    Prop_DisplayMCImageHeight_Int32 = 0x000007f7,
    Prop_DisplayMCImageNumChannels_Int32 = 0x000007f8,
    Prop_DisplayMCImageData_Binary = 0x000007f9,
    Prop_SecondsFromPhotonsToVblank_Float = 0x000007fa,
    Prop_DriverDirectModeSendsVsyncEvents_Bool = 0x000007fb,
    Prop_DisplayDebugMode_Bool = 0x000007fc,
    Prop_GraphicsAdapterLuid_Uint64 = 0x000007fd,
    Prop_DriverProvidedChaperonePath_String = 0x00000800,
    Prop_AttachedDeviceId_String = 0x00000bb8,
    Prop_SupportedButtons_Uint64 = 0x00000bb9,
    Prop_Axis0Type_Int32 = 0x00000bba,
    Prop_Axis1Type_Int32 = 0x00000bbb,
    Prop_Axis2Type_Int32 = 0x00000bbc,
    Prop_Axis3Type_Int32 = 0x00000bbd,
    Prop_Axis4Type_Int32 = 0x00000bbe,
    Prop_ControllerRoleHint_Int32 = 0x00000bbf,
    Prop_FieldOfViewLeftDegrees_Float = 0x00000fa0,
    Prop_FieldOfViewRightDegrees_Float = 0x00000fa1,
    Prop_FieldOfViewTopDegrees_Float = 0x00000fa2,
    Prop_FieldOfViewBottomDegrees_Float = 0x00000fa3,
    Prop_TrackingRangeMinimumMeters_Float = 0x00000fa4,
    Prop_TrackingRangeMaximumMeters_Float = 0x00000fa5,
    Prop_ModeLabel_String = 0x00000fa6,
    Prop_IconPathName_String = 0x00001388,
    Prop_NamedIconPathDeviceOff_String = 0x00001389,
    Prop_NamedIconPathDeviceSearching_String = 0x0000138a,
    Prop_NamedIconPathDeviceSearchingAlert_String = 0x0000138b,
    Prop_NamedIconPathDeviceReady_String = 0x0000138c,
    Prop_NamedIconPathDeviceReadyAlert_String = 0x0000138d,
    Prop_NamedIconPathDeviceNotReady_String = 0x0000138e,
    Prop_NamedIconPathDeviceStandby_String = 0x0000138f,
    Prop_NamedIconPathDeviceAlertLow_String = 0x00001390,
    Prop_DisplayHiddenArea_Binary_Start = 0x000013ec,
    Prop_DisplayHiddenArea_Binary_End = 0x0000141e,
    Prop_UserConfigPath_String = 0x00001770,
    Prop_InstallPath_String = 0x00001771,
    Prop_HasDisplayComponent_Bool = 0x00001772,
    Prop_HasControllerComponent_Bool = 0x00001773,
    Prop_HasCameraComponent_Bool = 0x00001774,
    Prop_HasDriverDirectModeComponent_Bool = 0x00001775,
    Prop_HasVirtualDisplayComponent_Bool = 0x00001776,
    Prop_VendorSpecific_Reserved_Start = 0x00002710,
    Prop_VendorSpecific_Reserved_End = 0x00002af7,
};
#endif
#if !defined(IL2CPP_STRUCT_ETrackedDeviceProperty__Enum_FWDDECL)
#define IL2CPP_STRUCT_ETrackedDeviceProperty__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ETrackedDeviceProperty__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ETrackedDeviceProperty__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ETrackedDeviceProperty__Enum_FWDDECL)
#include <Modloader/app/structs/ETrackedDeviceProperty__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ETrackedDeviceProperty__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

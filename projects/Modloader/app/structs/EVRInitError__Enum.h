#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EVRInitError__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EVRInitError__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRInitError__Enum_DEFINED)
#define IL2CPP_STRUCT_EVRInitError__Enum_DEFINED
enum class EVRInitError__Enum : int32_t {
    None = 0x00000000,
    Unknown = 0x00000001,
    Init_InstallationNotFound = 0x00000064,
    Init_InstallationCorrupt = 0x00000065,
    Init_VRClientDLLNotFound = 0x00000066,
    Init_FileNotFound = 0x00000067,
    Init_FactoryNotFound = 0x00000068,
    Init_InterfaceNotFound = 0x00000069,
    Init_InvalidInterface = 0x0000006a,
    Init_UserConfigDirectoryInvalid = 0x0000006b,
    Init_HmdNotFound = 0x0000006c,
    Init_NotInitialized = 0x0000006d,
    Init_PathRegistryNotFound = 0x0000006e,
    Init_NoConfigPath = 0x0000006f,
    Init_NoLogPath = 0x00000070,
    Init_PathRegistryNotWritable = 0x00000071,
    Init_AppInfoInitFailed = 0x00000072,
    Init_Retry = 0x00000073,
    Init_InitCanceledByUser = 0x00000074,
    Init_AnotherAppLaunching = 0x00000075,
    Init_SettingsInitFailed = 0x00000076,
    Init_ShuttingDown = 0x00000077,
    Init_TooManyObjects = 0x00000078,
    Init_NoServerForBackgroundApp = 0x00000079,
    Init_NotSupportedWithCompositor = 0x0000007a,
    Init_NotAvailableToUtilityApps = 0x0000007b,
    Init_Internal = 0x0000007c,
    Init_HmdDriverIdIsNone = 0x0000007d,
    Init_HmdNotFoundPresenceFailed = 0x0000007e,
    Init_VRMonitorNotFound = 0x0000007f,
    Init_VRMonitorStartupFailed = 0x00000080,
    Init_LowPowerWatchdogNotSupported = 0x00000081,
    Init_InvalidApplicationType = 0x00000082,
    Init_NotAvailableToWatchdogApps = 0x00000083,
    Init_WatchdogDisabledInSettings = 0x00000084,
    Init_VRDashboardNotFound = 0x00000085,
    Init_VRDashboardStartupFailed = 0x00000086,
    Init_VRHomeNotFound = 0x00000087,
    Init_VRHomeStartupFailed = 0x00000088,
    Init_RebootingBusy = 0x00000089,
    Init_FirmwareUpdateBusy = 0x0000008a,
    Init_FirmwareRecoveryBusy = 0x0000008b,
    Driver_Failed = 0x000000c8,
    Driver_Unknown = 0x000000c9,
    Driver_HmdUnknown = 0x000000ca,
    Driver_NotLoaded = 0x000000cb,
    Driver_RuntimeOutOfDate = 0x000000cc,
    Driver_HmdInUse = 0x000000cd,
    Driver_NotCalibrated = 0x000000ce,
    Driver_CalibrationInvalid = 0x000000cf,
    Driver_HmdDisplayNotFound = 0x000000d0,
    Driver_TrackedDeviceInterfaceUnknown = 0x000000d1,
    Driver_HmdDriverIdOutOfBounds = 0x000000d3,
    Driver_HmdDisplayMirrored = 0x000000d4,
    IPC_ServerInitFailed = 0x0000012c,
    IPC_ConnectFailed = 0x0000012d,
    IPC_SharedStateInitFailed = 0x0000012e,
    IPC_CompositorInitFailed = 0x0000012f,
    IPC_MutexInitFailed = 0x00000130,
    IPC_Failed = 0x00000131,
    IPC_CompositorConnectFailed = 0x00000132,
    IPC_CompositorInvalidConnectResponse = 0x00000133,
    IPC_ConnectFailedAfterMultipleAttempts = 0x00000134,
    Compositor_Failed = 0x00000190,
    Compositor_D3D11HardwareRequired = 0x00000191,
    Compositor_FirmwareRequiresUpdate = 0x00000192,
    Compositor_OverlayInitFailed = 0x00000193,
    Compositor_ScreenshotsInitFailed = 0x00000194,
    Compositor_UnableToCreateDevice = 0x00000195,
    VendorSpecific_UnableToConnectToOculusRuntime = 0x000003e8,
    VendorSpecific_HmdFound_CantOpenDevice = 0x0000044d,
    VendorSpecific_HmdFound_UnableToRequestConfigStart = 0x0000044e,
    VendorSpecific_HmdFound_NoStoredConfig = 0x0000044f,
    VendorSpecific_HmdFound_ConfigTooBig = 0x00000450,
    VendorSpecific_HmdFound_ConfigTooSmall = 0x00000451,
    VendorSpecific_HmdFound_UnableToInitZLib = 0x00000452,
    VendorSpecific_HmdFound_CantReadFirmwareVersion = 0x00000453,
    VendorSpecific_HmdFound_UnableToSendUserDataStart = 0x00000454,
    VendorSpecific_HmdFound_UnableToGetUserDataStart = 0x00000455,
    VendorSpecific_HmdFound_UnableToGetUserDataNext = 0x00000456,
    VendorSpecific_HmdFound_UserDataAddressRange = 0x00000457,
    VendorSpecific_HmdFound_UserDataError = 0x00000458,
    VendorSpecific_HmdFound_ConfigFailedSanityCheck = 0x00000459,
    Steam_SteamInstallationNotFound = 0x000007d0,
};
#endif
#if !defined(IL2CPP_STRUCT_EVRInitError__Enum_FWDDECL)
#define IL2CPP_STRUCT_EVRInitError__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EVRInitError__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRInitError__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EVRInitError__Enum_FWDDECL)
#include <Modloader/app/structs/EVRInitError__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EVRInitError__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

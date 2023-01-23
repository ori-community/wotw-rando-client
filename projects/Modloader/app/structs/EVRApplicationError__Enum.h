#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EVRApplicationError__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EVRApplicationError__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRApplicationError__Enum_DEFINED)
#define IL2CPP_STRUCT_EVRApplicationError__Enum_DEFINED
enum class EVRApplicationError__Enum : int32_t {
    None = 0x00000000,
    AppKeyAlreadyExists = 0x00000064,
    NoManifest = 0x00000065,
    NoApplication = 0x00000066,
    InvalidIndex = 0x00000067,
    UnknownApplication = 0x00000068,
    IPCFailed = 0x00000069,
    ApplicationAlreadyRunning = 0x0000006a,
    InvalidManifest = 0x0000006b,
    InvalidApplication = 0x0000006c,
    LaunchFailed = 0x0000006d,
    ApplicationAlreadyStarting = 0x0000006e,
    LaunchInProgress = 0x0000006f,
    OldApplicationQuitting = 0x00000070,
    TransitionAborted = 0x00000071,
    IsTemplate = 0x00000072,
    SteamVRIsExiting = 0x00000073,
    BufferTooSmall = 0x000000c8,
    PropertyNotSet = 0x000000c9,
    UnknownProperty = 0x000000ca,
    InvalidParameter = 0x000000cb,
};
#endif
#if !defined(IL2CPP_STRUCT_EVRApplicationError__Enum_FWDDECL)
#define IL2CPP_STRUCT_EVRApplicationError__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EVRApplicationError__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRApplicationError__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EVRApplicationError__Enum_FWDDECL)
#include <Modloader/app/structs/EVRApplicationError__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EVRApplicationError__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EVRTrackedCameraError__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EVRTrackedCameraError__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRTrackedCameraError__Enum_DEFINED)
#define IL2CPP_STRUCT_EVRTrackedCameraError__Enum_DEFINED
enum class EVRTrackedCameraError__Enum : int32_t {
    None = 0x00000000,
    OperationFailed = 0x00000064,
    InvalidHandle = 0x00000065,
    InvalidFrameHeaderVersion = 0x00000066,
    OutOfHandles = 0x00000067,
    IPCFailure = 0x00000068,
    NotSupportedForThisDevice = 0x00000069,
    SharedMemoryFailure = 0x0000006a,
    FrameBufferingFailure = 0x0000006b,
    StreamSetupFailure = 0x0000006c,
    InvalidGLTextureId = 0x0000006d,
    InvalidSharedTextureHandle = 0x0000006e,
    FailedToGetGLTextureId = 0x0000006f,
    SharedTextureFailure = 0x00000070,
    NoFrameAvailable = 0x00000071,
    InvalidArgument = 0x00000072,
    InvalidFrameBufferSize = 0x00000073,
};
#endif
#if !defined(IL2CPP_STRUCT_EVRTrackedCameraError__Enum_FWDDECL)
#define IL2CPP_STRUCT_EVRTrackedCameraError__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EVRTrackedCameraError__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRTrackedCameraError__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EVRTrackedCameraError__Enum_FWDDECL)
#include <Modloader/app/structs/EVRTrackedCameraError__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EVRTrackedCameraError__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrameReceivedEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrameReceivedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameReceivedEventArgs_DEFINED)
#define IL2CPP_STRUCT_FrameReceivedEventArgs_DEFINED
struct XRCameraSubsystem;
struct FrameReceivedEventArgs {
    struct XRCameraSubsystem* m_CameraSubsystem;
};
#endif
#if !defined(IL2CPP_STRUCT_FrameReceivedEventArgs_FWDDECL)
#define IL2CPP_STRUCT_FrameReceivedEventArgs_FWDDECL
#include <Modloader/app/structs/XRCameraSubsystem.h>
#endif
#undef IL2CPP_STRUCT_FrameReceivedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameReceivedEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_FrameReceivedEventArgs_FWDDECL)
#include <Modloader/app/structs/FrameReceivedEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrameReceivedEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

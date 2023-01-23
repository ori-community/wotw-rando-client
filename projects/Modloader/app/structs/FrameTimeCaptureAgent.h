#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrameTimeCaptureAgent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrameTimeCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameTimeCaptureAgent_DEFINED)
#define IL2CPP_STRUCT_FrameTimeCaptureAgent_DEFINED
struct FrameTimeCaptureAgent__Class;
struct FrameTimeCaptureAgent {
    struct FrameTimeCaptureAgent__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_FrameTimeCaptureAgent_FWDDECL)
#define IL2CPP_STRUCT_FrameTimeCaptureAgent_FWDDECL
#include <Modloader/app/structs/FrameTimeCaptureAgent__Class.h>
#endif
#undef IL2CPP_STRUCT_FrameTimeCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameTimeCaptureAgent_DEFINED) && !defined(IL2CPP_STRUCT_FrameTimeCaptureAgent_FWDDECL)
#include <Modloader/app/structs/FrameTimeCaptureAgent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrameTimeCaptureAgent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

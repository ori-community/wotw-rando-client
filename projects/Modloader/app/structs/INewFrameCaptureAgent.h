#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_INewFrameCaptureAgent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_INewFrameCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_INewFrameCaptureAgent_DEFINED)
#define IL2CPP_STRUCT_INewFrameCaptureAgent_DEFINED
struct INewFrameCaptureAgent__Class;
struct INewFrameCaptureAgent {
    struct INewFrameCaptureAgent__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_INewFrameCaptureAgent_FWDDECL)
#define IL2CPP_STRUCT_INewFrameCaptureAgent_FWDDECL
#include <Modloader/app/structs/INewFrameCaptureAgent__Class.h>
#endif
#undef IL2CPP_STRUCT_INewFrameCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_INewFrameCaptureAgent_DEFINED) && !defined(IL2CPP_STRUCT_INewFrameCaptureAgent_FWDDECL)
#include <Modloader/app/structs/INewFrameCaptureAgent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/INewFrameCaptureAgent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

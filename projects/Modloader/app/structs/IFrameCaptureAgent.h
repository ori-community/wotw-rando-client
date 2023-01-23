#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IFrameCaptureAgent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IFrameCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_IFrameCaptureAgent_DEFINED)
#define IL2CPP_STRUCT_IFrameCaptureAgent_DEFINED
struct IFrameCaptureAgent__Class;
struct IFrameCaptureAgent {
    struct IFrameCaptureAgent__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IFrameCaptureAgent_FWDDECL)
#define IL2CPP_STRUCT_IFrameCaptureAgent_FWDDECL
#include <Modloader/app/structs/IFrameCaptureAgent__Class.h>
#endif
#undef IL2CPP_STRUCT_IFrameCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_IFrameCaptureAgent_DEFINED) && !defined(IL2CPP_STRUCT_IFrameCaptureAgent_FWDDECL)
#include <Modloader/app/structs/IFrameCaptureAgent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IFrameCaptureAgent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DRSCaptureAgent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DRSCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_DRSCaptureAgent_DEFINED)
#define IL2CPP_STRUCT_DRSCaptureAgent_DEFINED
struct DRSCaptureAgent__Class;
struct DRSCaptureAgent {
    struct DRSCaptureAgent__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DRSCaptureAgent_FWDDECL)
#define IL2CPP_STRUCT_DRSCaptureAgent_FWDDECL
#include <Modloader/app/structs/DRSCaptureAgent__Class.h>
#endif
#undef IL2CPP_STRUCT_DRSCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_DRSCaptureAgent_DEFINED) && !defined(IL2CPP_STRUCT_DRSCaptureAgent_FWDDECL)
#include <Modloader/app/structs/DRSCaptureAgent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DRSCaptureAgent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

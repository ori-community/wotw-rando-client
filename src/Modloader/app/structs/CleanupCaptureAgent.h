#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CleanupCaptureAgent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CleanupCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_CleanupCaptureAgent_DEFINED)
#include <Modloader/app/structs/CleanupCaptureAgent__Fields.h>
#if defined(IL2CPP_STRUCT_CleanupCaptureAgent__Fields_DEFINED)
#define IL2CPP_STRUCT_CleanupCaptureAgent_DEFINED
struct CleanupCaptureAgent__Class;
struct CleanupCaptureAgent {
    struct CleanupCaptureAgent__Class* klass;
    MonitorData* monitor;
    struct CleanupCaptureAgent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CleanupCaptureAgent_FWDDECL)
#define IL2CPP_STRUCT_CleanupCaptureAgent_FWDDECL
#include <Modloader/app/structs/CleanupCaptureAgent__Class.h>
#endif
#undef IL2CPP_STRUCT_CleanupCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_CleanupCaptureAgent_DEFINED) && !defined(IL2CPP_STRUCT_CleanupCaptureAgent_FWDDECL)
#include <Modloader/app/structs/CleanupCaptureAgent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CleanupCaptureAgent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

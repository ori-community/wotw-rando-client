#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectProfilingCaptureAgent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectProfilingCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectProfilingCaptureAgent_DEFINED)
#include <Modloader/app/structs/ObjectProfilingCaptureAgent__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectProfilingCaptureAgent__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectProfilingCaptureAgent_DEFINED
struct ObjectProfilingCaptureAgent__Class;
struct ObjectProfilingCaptureAgent {
    struct ObjectProfilingCaptureAgent__Class* klass;
    MonitorData* monitor;
    struct ObjectProfilingCaptureAgent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectProfilingCaptureAgent_FWDDECL)
#define IL2CPP_STRUCT_ObjectProfilingCaptureAgent_FWDDECL
#include <Modloader/app/structs/ObjectProfilingCaptureAgent__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectProfilingCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectProfilingCaptureAgent_DEFINED) && !defined(IL2CPP_STRUCT_ObjectProfilingCaptureAgent_FWDDECL)
#include <Modloader/app/structs/ObjectProfilingCaptureAgent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectProfilingCaptureAgent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

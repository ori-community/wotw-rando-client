#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityDataCaptureAgent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityDataCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityDataCaptureAgent_DEFINED)
#include <Modloader/app/structs/EntityDataCaptureAgent__Fields.h>
#if defined(IL2CPP_STRUCT_EntityDataCaptureAgent__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityDataCaptureAgent_DEFINED
struct EntityDataCaptureAgent__Class;
struct EntityDataCaptureAgent {
    struct EntityDataCaptureAgent__Class* klass;
    MonitorData* monitor;
    struct EntityDataCaptureAgent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityDataCaptureAgent_FWDDECL)
#define IL2CPP_STRUCT_EntityDataCaptureAgent_FWDDECL
#include <Modloader/app/structs/EntityDataCaptureAgent__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityDataCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityDataCaptureAgent_DEFINED) && !defined(IL2CPP_STRUCT_EntityDataCaptureAgent_FWDDECL)
#include <Modloader/app/structs/EntityDataCaptureAgent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityDataCaptureAgent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

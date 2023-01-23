#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineEntityTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineEntityTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineEntityTask_DEFINED)
#include <Modloader/app/structs/TimelineEntityTask__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntityTask__Fields_DEFINED)
#define IL2CPP_STRUCT_TimelineEntityTask_DEFINED
struct TimelineEntityTask__Class;
struct TimelineEntityTask {
    struct TimelineEntityTask__Class* klass;
    MonitorData* monitor;
    struct TimelineEntityTask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimelineEntityTask_FWDDECL)
#define IL2CPP_STRUCT_TimelineEntityTask_FWDDECL
#include <Modloader/app/structs/TimelineEntityTask__Class.h>
#endif
#undef IL2CPP_STRUCT_TimelineEntityTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineEntityTask_DEFINED) && !defined(IL2CPP_STRUCT_TimelineEntityTask_FWDDECL)
#include <Modloader/app/structs/TimelineEntityTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineEntityTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

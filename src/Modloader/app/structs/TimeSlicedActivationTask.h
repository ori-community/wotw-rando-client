#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeSlicedActivationTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeSlicedActivationTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSlicedActivationTask_DEFINED)
#include <Modloader/app/structs/TimeSlicedActivationTask__Fields.h>
#if defined(IL2CPP_STRUCT_TimeSlicedActivationTask__Fields_DEFINED)
#define IL2CPP_STRUCT_TimeSlicedActivationTask_DEFINED
struct TimeSlicedActivationTask__Class;
struct TimeSlicedActivationTask {
    struct TimeSlicedActivationTask__Class* klass;
    MonitorData* monitor;
    struct TimeSlicedActivationTask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeSlicedActivationTask_FWDDECL)
#define IL2CPP_STRUCT_TimeSlicedActivationTask_FWDDECL
#include <Modloader/app/structs/TimeSlicedActivationTask__Class.h>
#endif
#undef IL2CPP_STRUCT_TimeSlicedActivationTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSlicedActivationTask_DEFINED) && !defined(IL2CPP_STRUCT_TimeSlicedActivationTask_FWDDECL)
#include <Modloader/app/structs/TimeSlicedActivationTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeSlicedActivationTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

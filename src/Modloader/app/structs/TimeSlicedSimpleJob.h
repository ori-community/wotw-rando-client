#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeSlicedSimpleJob_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeSlicedSimpleJob_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSlicedSimpleJob_DEFINED)
#include <Modloader/app/structs/TimeSlicedSimpleJob__Fields.h>
#if defined(IL2CPP_STRUCT_TimeSlicedSimpleJob__Fields_DEFINED)
#define IL2CPP_STRUCT_TimeSlicedSimpleJob_DEFINED
struct TimeSlicedSimpleJob__Class;
struct TimeSlicedSimpleJob {
    struct TimeSlicedSimpleJob__Class* klass;
    MonitorData* monitor;
    struct TimeSlicedSimpleJob__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeSlicedSimpleJob_FWDDECL)
#define IL2CPP_STRUCT_TimeSlicedSimpleJob_FWDDECL
#include <Modloader/app/structs/TimeSlicedSimpleJob__Class.h>
#endif
#undef IL2CPP_STRUCT_TimeSlicedSimpleJob_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSlicedSimpleJob_DEFINED) && !defined(IL2CPP_STRUCT_TimeSlicedSimpleJob_FWDDECL)
#include <Modloader/app/structs/TimeSlicedSimpleJob.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeSlicedSimpleJob.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

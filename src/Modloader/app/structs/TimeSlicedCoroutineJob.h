#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeSlicedCoroutineJob_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeSlicedCoroutineJob_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSlicedCoroutineJob_DEFINED)
#include <Modloader/app/structs/TimeSlicedCoroutineJob__Fields.h>
#if defined(IL2CPP_STRUCT_TimeSlicedCoroutineJob__Fields_DEFINED)
#define IL2CPP_STRUCT_TimeSlicedCoroutineJob_DEFINED
struct TimeSlicedCoroutineJob__Class;
struct TimeSlicedCoroutineJob {
    struct TimeSlicedCoroutineJob__Class* klass;
    MonitorData* monitor;
    struct TimeSlicedCoroutineJob__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeSlicedCoroutineJob_FWDDECL)
#define IL2CPP_STRUCT_TimeSlicedCoroutineJob_FWDDECL
#include <Modloader/app/structs/TimeSlicedCoroutineJob__Class.h>
#endif
#undef IL2CPP_STRUCT_TimeSlicedCoroutineJob_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSlicedCoroutineJob_DEFINED) && !defined(IL2CPP_STRUCT_TimeSlicedCoroutineJob_FWDDECL)
#include <Modloader/app/structs/TimeSlicedCoroutineJob.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeSlicedCoroutineJob.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

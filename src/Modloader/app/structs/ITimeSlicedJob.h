#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITimeSlicedJob_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITimeSlicedJob_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITimeSlicedJob_DEFINED)
#define IL2CPP_STRUCT_ITimeSlicedJob_DEFINED
struct ITimeSlicedJob__Class;
struct ITimeSlicedJob {
    struct ITimeSlicedJob__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITimeSlicedJob_FWDDECL)
#define IL2CPP_STRUCT_ITimeSlicedJob_FWDDECL
#include <Modloader/app/structs/ITimeSlicedJob__Class.h>
#endif
#undef IL2CPP_STRUCT_ITimeSlicedJob_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITimeSlicedJob_DEFINED) && !defined(IL2CPP_STRUCT_ITimeSlicedJob_FWDDECL)
#include <Modloader/app/structs/ITimeSlicedJob.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITimeSlicedJob.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

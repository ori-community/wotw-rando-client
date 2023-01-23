#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JobRanges__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JobRanges__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_JobRanges__Boxed_DEFINED)
#include <Modloader/app/structs/JobRanges.h>
#if defined(IL2CPP_STRUCT_JobRanges_DEFINED)
#define IL2CPP_STRUCT_JobRanges__Boxed_DEFINED
struct JobRanges__Class;
struct JobRanges__Boxed {
    struct JobRanges__Class* klass;
    MonitorData* monitor;
    struct JobRanges fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JobRanges__Boxed_FWDDECL)
#define IL2CPP_STRUCT_JobRanges__Boxed_FWDDECL
#include <Modloader/app/structs/JobRanges__Class.h>
#endif
#undef IL2CPP_STRUCT_JobRanges__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_JobRanges__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_JobRanges__Boxed_FWDDECL)
#include <Modloader/app/structs/JobRanges__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JobRanges__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

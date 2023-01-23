#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineHelper_DEFINED)
#define IL2CPP_STRUCT_TimelineHelper_DEFINED
struct TimelineHelper__Class;
struct TimelineHelper {
    struct TimelineHelper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TimelineHelper_FWDDECL)
#define IL2CPP_STRUCT_TimelineHelper_FWDDECL
#include <Modloader/app/structs/TimelineHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_TimelineHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineHelper_DEFINED) && !defined(IL2CPP_STRUCT_TimelineHelper_FWDDECL)
#include <Modloader/app/structs/TimelineHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

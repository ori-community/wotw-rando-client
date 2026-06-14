#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineDoubleEndQueue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineDoubleEndQueue_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineDoubleEndQueue_DEFINED)
#include <Modloader/app/structs/TimelineDoubleEndQueue__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineDoubleEndQueue__Fields_DEFINED)
#define IL2CPP_STRUCT_TimelineDoubleEndQueue_DEFINED
struct TimelineDoubleEndQueue__Class;
struct TimelineDoubleEndQueue {
    struct TimelineDoubleEndQueue__Class* klass;
    MonitorData* monitor;
    struct TimelineDoubleEndQueue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimelineDoubleEndQueue_FWDDECL)
#define IL2CPP_STRUCT_TimelineDoubleEndQueue_FWDDECL
#include <Modloader/app/structs/TimelineDoubleEndQueue__Class.h>
#endif
#undef IL2CPP_STRUCT_TimelineDoubleEndQueue_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineDoubleEndQueue_DEFINED) && !defined(IL2CPP_STRUCT_TimelineDoubleEndQueue_FWDDECL)
#include <Modloader/app/structs/TimelineDoubleEndQueue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineDoubleEndQueue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

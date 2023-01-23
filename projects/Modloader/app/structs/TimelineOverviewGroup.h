#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineOverviewGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineOverviewGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineOverviewGroup_DEFINED)
#include <Modloader/app/structs/TimelineOverviewGroup__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineOverviewGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_TimelineOverviewGroup_DEFINED
struct TimelineOverviewGroup__Class;
struct TimelineOverviewGroup {
    struct TimelineOverviewGroup__Class* klass;
    MonitorData* monitor;
    struct TimelineOverviewGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimelineOverviewGroup_FWDDECL)
#define IL2CPP_STRUCT_TimelineOverviewGroup_FWDDECL
#include <Modloader/app/structs/TimelineOverviewGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_TimelineOverviewGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineOverviewGroup_DEFINED) && !defined(IL2CPP_STRUCT_TimelineOverviewGroup_FWDDECL)
#include <Modloader/app/structs/TimelineOverviewGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineOverviewGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

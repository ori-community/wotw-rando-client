#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MasterTimelineCompleted_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MasterTimelineCompleted_INITIALIZING
#if !defined(IL2CPP_STRUCT_MasterTimelineCompleted_DEFINED)
#include <Modloader/app/structs/MasterTimelineCompleted__Fields.h>
#if defined(IL2CPP_STRUCT_MasterTimelineCompleted__Fields_DEFINED)
#define IL2CPP_STRUCT_MasterTimelineCompleted_DEFINED
struct MasterTimelineCompleted__Class;
struct MasterTimelineCompleted {
    struct MasterTimelineCompleted__Class* klass;
    MonitorData* monitor;
    struct MasterTimelineCompleted__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MasterTimelineCompleted_FWDDECL)
#define IL2CPP_STRUCT_MasterTimelineCompleted_FWDDECL
#include <Modloader/app/structs/MasterTimelineCompleted__Class.h>
#endif
#undef IL2CPP_STRUCT_MasterTimelineCompleted_INITIALIZING
#if !defined(IL2CPP_STRUCT_MasterTimelineCompleted_DEFINED) && !defined(IL2CPP_STRUCT_MasterTimelineCompleted_FWDDECL)
#include <Modloader/app/structs/MasterTimelineCompleted.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MasterTimelineCompleted.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

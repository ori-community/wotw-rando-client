#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitForTimeTimelineEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitForTimeTimelineEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForTimeTimelineEntity_DEFINED)
#include <Modloader/app/structs/WaitForTimeTimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_WaitForTimeTimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_WaitForTimeTimelineEntity_DEFINED
struct WaitForTimeTimelineEntity__Class;
struct WaitForTimeTimelineEntity {
    struct WaitForTimeTimelineEntity__Class* klass;
    MonitorData* monitor;
    struct WaitForTimeTimelineEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitForTimeTimelineEntity_FWDDECL)
#define IL2CPP_STRUCT_WaitForTimeTimelineEntity_FWDDECL
#include <Modloader/app/structs/WaitForTimeTimelineEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_WaitForTimeTimelineEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForTimeTimelineEntity_DEFINED) && !defined(IL2CPP_STRUCT_WaitForTimeTimelineEntity_FWDDECL)
#include <Modloader/app/structs/WaitForTimeTimelineEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitForTimeTimelineEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

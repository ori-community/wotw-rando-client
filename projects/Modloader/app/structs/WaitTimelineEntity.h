#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitTimelineEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitTimelineEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitTimelineEntity_DEFINED)
#include <Modloader/app/structs/WaitTimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_WaitTimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_WaitTimelineEntity_DEFINED
struct WaitTimelineEntity__Class;
struct WaitTimelineEntity {
    struct WaitTimelineEntity__Class* klass;
    MonitorData* monitor;
    struct WaitTimelineEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitTimelineEntity_FWDDECL)
#define IL2CPP_STRUCT_WaitTimelineEntity_FWDDECL
#include <Modloader/app/structs/WaitTimelineEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_WaitTimelineEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitTimelineEntity_DEFINED) && !defined(IL2CPP_STRUCT_WaitTimelineEntity_FWDDECL)
#include <Modloader/app/structs/WaitTimelineEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitTimelineEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

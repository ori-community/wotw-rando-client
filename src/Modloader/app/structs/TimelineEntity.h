#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineEntity_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_TimelineEntity_DEFINED
struct TimelineEntity__Class;
struct TimelineEntity {
    struct TimelineEntity__Class* klass;
    MonitorData* monitor;
    struct TimelineEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimelineEntity_FWDDECL)
#define IL2CPP_STRUCT_TimelineEntity_FWDDECL
#include <Modloader/app/structs/TimelineEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_TimelineEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineEntity_DEFINED) && !defined(IL2CPP_STRUCT_TimelineEntity_FWDDECL)
#include <Modloader/app/structs/TimelineEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

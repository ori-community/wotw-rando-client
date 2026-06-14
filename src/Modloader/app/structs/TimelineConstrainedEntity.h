#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineConstrainedEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineConstrainedEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineConstrainedEntity_DEFINED)
#include <Modloader/app/structs/TimelineConstrainedEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineConstrainedEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_TimelineConstrainedEntity_DEFINED
struct TimelineConstrainedEntity__Class;
struct TimelineConstrainedEntity {
    struct TimelineConstrainedEntity__Class* klass;
    MonitorData* monitor;
    struct TimelineConstrainedEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimelineConstrainedEntity_FWDDECL)
#define IL2CPP_STRUCT_TimelineConstrainedEntity_FWDDECL
#include <Modloader/app/structs/TimelineConstrainedEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_TimelineConstrainedEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineConstrainedEntity_DEFINED) && !defined(IL2CPP_STRUCT_TimelineConstrainedEntity_FWDDECL)
#include <Modloader/app/structs/TimelineConstrainedEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineConstrainedEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

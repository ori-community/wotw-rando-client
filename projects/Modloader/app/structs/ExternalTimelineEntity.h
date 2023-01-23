#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExternalTimelineEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExternalTimelineEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExternalTimelineEntity_DEFINED)
#include <Modloader/app/structs/ExternalTimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_ExternalTimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_ExternalTimelineEntity_DEFINED
struct ExternalTimelineEntity__Class;
struct ExternalTimelineEntity {
    struct ExternalTimelineEntity__Class* klass;
    MonitorData* monitor;
    struct ExternalTimelineEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExternalTimelineEntity_FWDDECL)
#define IL2CPP_STRUCT_ExternalTimelineEntity_FWDDECL
#include <Modloader/app/structs/ExternalTimelineEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_ExternalTimelineEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExternalTimelineEntity_DEFINED) && !defined(IL2CPP_STRUCT_ExternalTimelineEntity_FWDDECL)
#include <Modloader/app/structs/ExternalTimelineEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExternalTimelineEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

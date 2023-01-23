#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelinePreviewRequirement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelinePreviewRequirement_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelinePreviewRequirement_DEFINED)
#include <Modloader/app/structs/TimelinePreviewRequirement__Fields.h>
#if defined(IL2CPP_STRUCT_TimelinePreviewRequirement__Fields_DEFINED)
#define IL2CPP_STRUCT_TimelinePreviewRequirement_DEFINED
struct TimelinePreviewRequirement__Class;
struct TimelinePreviewRequirement {
    struct TimelinePreviewRequirement__Class* klass;
    MonitorData* monitor;
    struct TimelinePreviewRequirement__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimelinePreviewRequirement_FWDDECL)
#define IL2CPP_STRUCT_TimelinePreviewRequirement_FWDDECL
#include <Modloader/app/structs/TimelinePreviewRequirement__Class.h>
#endif
#undef IL2CPP_STRUCT_TimelinePreviewRequirement_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelinePreviewRequirement_DEFINED) && !defined(IL2CPP_STRUCT_TimelinePreviewRequirement_FWDDECL)
#include <Modloader/app/structs/TimelinePreviewRequirement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelinePreviewRequirement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

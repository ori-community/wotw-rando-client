#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayExternalTimelineAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayExternalTimelineAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayExternalTimelineAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayExternalTimelineAction__Fields_DEFINED
struct MoonReference_1_Moon_Timeline_ITimelineEntity_;
struct MoonTimeline;
struct PlayExternalTimelineAction__Fields {
    struct ActionMethod__Fields _;
    struct MoonReference_1_Moon_Timeline_ITimelineEntity_* Timeline;
    struct MoonTimeline* m_targetTimeline;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayExternalTimelineAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayExternalTimelineAction__Fields_FWDDECL
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_ITimelineEntity_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_PlayExternalTimelineAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayExternalTimelineAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayExternalTimelineAction__Fields_FWDDECL)
#include <Modloader/app/structs/PlayExternalTimelineAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayExternalTimelineAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

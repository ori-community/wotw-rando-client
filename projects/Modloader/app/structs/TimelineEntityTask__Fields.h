#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineEntityTask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineEntityTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineEntityTask__Fields_DEFINED)
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/EntityTask__Fields.h>
#if defined(IL2CPP_STRUCT_EntityTask__Fields_DEFINED) && defined(IL2CPP_STRUCT_BehaviourStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_TimelineEntityTask__Fields_DEFINED
struct MoonTimeline;
struct TimelineEntityTask__Fields {
    struct EntityTask__Fields _;
    struct MoonTimeline* Timeline;
    bool PauseLocomotion;
    BehaviourStatus__Enum StatusWhileRunning;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimelineEntityTask__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimelineEntityTask__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_TimelineEntityTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineEntityTask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimelineEntityTask__Fields_FWDDECL)
#include <Modloader/app/structs/TimelineEntityTask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineEntityTask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

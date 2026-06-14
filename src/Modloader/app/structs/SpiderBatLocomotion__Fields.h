#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBatLocomotion__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBatLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBatLocomotion__Fields_DEFINED)
#include <Modloader/app/structs/AirEntityLocomotion__Fields.h>
#if defined(IL2CPP_STRUCT_AirEntityLocomotion__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiderBatLocomotion__Fields_DEFINED
struct MoonTimeline;
struct LocomotionIdleBehaviour;
struct SpiderBatLocomotion__Fields {
    struct AirEntityLocomotion__Fields _;
    struct MoonTimeline* RestingIdleTimeline;
    struct MoonTimeline* AttackingIdleTimeline;
    struct LocomotionIdleBehaviour* LocomotionIdleBehaviourRef;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBatLocomotion__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderBatLocomotion__Fields_FWDDECL
#include <Modloader/app/structs/LocomotionIdleBehaviour.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_SpiderBatLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBatLocomotion__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBatLocomotion__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderBatLocomotion__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBatLocomotion__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

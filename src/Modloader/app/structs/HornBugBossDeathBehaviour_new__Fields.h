#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HornBugBossDeathBehaviour_new__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HornBugBossDeathBehaviour_new__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugBossDeathBehaviour_new__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_HornBugBossDeathBehaviour_new__Fields_DEFINED
struct MoonTimeline;
struct RootMotionProcessorData;
struct GroundEntityLocomotion;
struct HornBugBossDeathBehaviour_new__Fields {
    struct EntityReactionBehaviour__Fields _;
    struct MoonTimeline* DeathSequence;
    struct RootMotionProcessorData* RootMotion;
    struct GroundEntityLocomotion* m_locomotion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HornBugBossDeathBehaviour_new__Fields_FWDDECL)
#define IL2CPP_STRUCT_HornBugBossDeathBehaviour_new__Fields_FWDDECL
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#endif
#undef IL2CPP_STRUCT_HornBugBossDeathBehaviour_new__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugBossDeathBehaviour_new__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HornBugBossDeathBehaviour_new__Fields_FWDDECL)
#include <Modloader/app/structs/HornBugBossDeathBehaviour_new__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HornBugBossDeathBehaviour_new__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

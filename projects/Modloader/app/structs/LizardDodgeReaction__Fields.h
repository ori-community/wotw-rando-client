#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LizardDodgeReaction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LizardDodgeReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardDodgeReaction__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour_1_LizardEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour_1_LizardEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_LizardDodgeReaction__Fields_DEFINED
struct MoonTimeline;
struct RootMotionProcessorData;
struct String;
struct List_1_Moon_Timeline_MoonTimeline_;
struct GroundEntityLocomotion;
struct LizardDodgeReaction__Fields {
    struct EntityReactionBehaviour_1_LizardEntity___Fields _;
    struct MoonTimeline* DodgeRoll;
    struct RootMotionProcessorData* DodgeRollRootMotion;
    bool SetCounterAttackBool;
    struct String* CounterAttackVarName;
    float MaxDistanceToTargetToStartDodge;
    bool DebugReaction;
    struct List_1_Moon_Timeline_MoonTimeline_* AdditiveHitAnims;
    struct GroundEntityLocomotion* m_locomotion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LizardDodgeReaction__Fields_FWDDECL)
#define IL2CPP_STRUCT_LizardDodgeReaction__Fields_FWDDECL
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_LizardDodgeReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardDodgeReaction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LizardDodgeReaction__Fields_FWDDECL)
#include <Modloader/app/structs/LizardDodgeReaction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LizardDodgeReaction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

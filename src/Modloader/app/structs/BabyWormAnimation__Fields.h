#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BabyWormAnimation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BabyWormAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabyWormAnimation__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_BabyWormAnimation__Fields_DEFINED
struct MoonAnimator;
struct FloatAnimationParameter;
struct MoonTimeline;
struct AnimationPlayer;
struct BabyWormAnimation__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonAnimator* SandwormMoonAnimator;
    struct FloatAnimationParameter* TurnFloatAnimationParameter;
    float TurnAnimatorParameterMultiplier;
    float TurnAnimatorParameterClamp;
    struct MoonTimeline* SpawnMoonTimeline;
    struct MoonTimeline* MoveMoonTimeline;
    struct MoonTimeline* AnticDashMoonTimeline;
    struct MoonTimeline* DashAttackMoonTimeline;
    struct AnimationPlayer* MoveAnimationPlayer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BabyWormAnimation__Fields_FWDDECL)
#define IL2CPP_STRUCT_BabyWormAnimation__Fields_FWDDECL
#include <Modloader/app/structs/AnimationPlayer.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_BabyWormAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabyWormAnimation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BabyWormAnimation__Fields_FWDDECL)
#include <Modloader/app/structs/BabyWormAnimation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BabyWormAnimation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

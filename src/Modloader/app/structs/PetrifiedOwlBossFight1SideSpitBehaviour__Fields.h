#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlBossFight1SideSpitBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlBossFight1SideSpitBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossFight1SideSpitBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_PetrifiedOwlBossBaseBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlBossFight1SideSpitBehaviour__Fields_DEFINED
struct MoonTimeline;
struct List_1_Moon_Timeline_EventTriggerAnimator_;
struct AnimationCurve;
struct List_1_UnityEngine_AnimationCurve_;
struct Enum__Array;
struct PetrifiedOwlBossFight1SideSpitBehaviour__Fields {
    struct PetrifiedOwlBossBaseBehaviour__Fields _;
    struct MoonTimeline* Timeline;
    struct List_1_Moon_Timeline_EventTriggerAnimator_* ShootTriggers;
    struct Vector2 ProjectileMaxSpeedRange;
    float DistanceToStopHoming;
    float ProjectileGravity;
    int32_t ProjectileDamage;
    struct AnimationCurve* SpeedOverTime;
    struct List_1_UnityEngine_AnimationCurve_* TurningSpeedOverTimeCurves;
    float m_baseDirectionAngle;
    struct Vector2 DirectionAngleVariationRange;
    bool m_isMirrored;
    struct Enum__Array* Entries;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossFight1SideSpitBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlBossFight1SideSpitBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_EventTriggerAnimator_.h>
#include <Modloader/app/structs/List_1_UnityEngine_AnimationCurve_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlBossFight1SideSpitBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossFight1SideSpitBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlBossFight1SideSpitBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlBossFight1SideSpitBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlBossFight1SideSpitBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

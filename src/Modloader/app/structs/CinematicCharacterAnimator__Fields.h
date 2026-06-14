#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CinematicCharacterAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CinematicCharacterAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CinematicCharacterAnimator__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/CinematicCharacterAnimator_Character__Enum.h>
#include <Modloader/app/structs/CinematicCharacterAnimator_FacingDirection__Enum.h>
#include <Modloader/app/structs/CinematicCharacterAnimator_GameplayTransitionEnd__Enum.h>
#include <Modloader/app/structs/CinematicCharacterAnimator_GameplayTransitionStart__Enum.h>
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_CinematicCharacterAnimator_Character__Enum_DEFINED) && defined(IL2CPP_STRUCT_CinematicCharacterAnimator_FacingDirection__Enum_DEFINED) && defined(IL2CPP_STRUCT_CinematicCharacterAnimator_GameplayTransitionStart__Enum_DEFINED) && defined(IL2CPP_STRUCT_CinematicCharacterAnimator_GameplayTransitionEnd__Enum_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_CinematicCharacterAnimator__Fields_DEFINED
struct MoonAnimation;
struct EventTriggerAnimator;
struct AnimationCurve;
struct CinematicCharacterAnimator__Fields {
    struct TimelineEntity__Fields _;
    struct MoonAnimation* Animation;
    CinematicCharacterAnimator_Character__Enum AnimatedCharacter;

    bool DismountIfRiding;
    struct EventTriggerAnimator* MountTrigger;
    bool UseAnimatorAsStartingPoint;
    bool DisableColliderWhenPlaying;
    float DisableColliderDurationOffset;
    bool UsePerspectiveAdjustment;
    CinematicCharacterAnimator_FacingDirection__Enum Direction;

    CinematicCharacterAnimator_FacingDirection__Enum PostPlayDirection;

    CinematicCharacterAnimator_GameplayTransitionStart__Enum TransitionStart;

    CinematicCharacterAnimator_GameplayTransitionEnd__Enum TransitionEnd;

    float LerpToGroundDuration;
    float InterpolationTime;
    bool ForceUsingCurves;
    struct AnimationCurve* m_xCurve;
    struct AnimationCurve* m_yCurve;
    struct AnimationCurve* m_zCurve;
    bool ResetCharacterRotation;
    float m_time;
    struct ActiveAnimationHandle m_animationState;
    float _CachedMoonAnimationDuration_k__BackingField;
    struct MoonAnimation* _CachedMoonAnimation_k__BackingField;
    bool m_wasCarrying;
    float m_lerpPosition;
    bool m_preparedToStart;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CinematicCharacterAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_CinematicCharacterAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_CinematicCharacterAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CinematicCharacterAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CinematicCharacterAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/CinematicCharacterAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CinematicCharacterAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DesertEscapeWorm__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DesertEscapeWorm__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesertEscapeWorm__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_DesertEscapeWorm__Fields_DEFINED
struct SerializedIntUberState;
struct MoonReference_1_Moon_Timeline_MoonTimeline_;
struct MoonTimeline;
struct ReadyForAnimationTrigger;
struct PlayerInsideZoneChecker;
struct Transform;
struct MoonAnimator;
struct AnimationCurve;
struct FloatAnimationParameter;
struct List_1_System_Int32_;
struct List_1_UnityEngine_Transform_;
struct List_1_Moon_Timeline_EventTriggerAnimator_;
struct RubberBandedValueProvider;
struct TriggerBasedRubberBandingSet;
struct List_1_Moon_ScalableAnimationPlayer_;
struct GameObject;
struct DamageDealer__Array;
struct DamageDealer_OverrideInfo;
struct List_1_DesertEscapeWorm_AdditionalTimelineSet_;
struct IUberState__Array;
struct DesertEscapeWorm__Fields {
    struct MonoBehaviour__Fields _;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct SerializedIntUberState* State;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_* IntroTimeline;
    struct MoonTimeline* EscapeTimelineA;
    struct MoonTimeline* EscapeTimelineB;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_* EndingTimeline;
    struct ReadyForAnimationTrigger* PlayerInZoneToStartIntro;
    struct PlayerInsideZoneChecker* PlayerInZoneToStartEscapeB;
    struct PlayerInsideZoneChecker* PlayerInZoneToStartEnding;
    struct Transform* OriFollower;
    struct MoonAnimator* WormAnimator;
    struct MoonTimeline* WormHeadLeanTimeline;
    float TimeForMaxLean;
    float MaxAngle;
    float LeanCutOffDistance;
    struct AnimationCurve* LeanCutOffCurveNormalized;
    struct Transform* WormAimBone;
    struct FloatAnimationParameter* m_headLeanParameter;
    struct List_1_System_Int32_* LeaningAllowedStates;
    float MaxSpinSpeed;
    struct List_1_UnityEngine_Transform_* WormSpinTransforms;
    struct List_1_Moon_Timeline_EventTriggerAnimator_* SpinAllowedTriggers;
    float m_currentSpinSpeed;
    struct Transform* WormReferencePosition;
    struct RubberBandedValueProvider* DefaultRubberBanding;
    struct TriggerBasedRubberBandingSet* RubberBandingOverrides;
    bool UseAccelation;
    float Acceleration;
    struct List_1_Moon_ScalableAnimationPlayer_* m_scalableAnimations;
    struct GameObject* CollidersParent;
    struct DamageDealer__Array* m_damageDealers;
    struct DamageDealer_OverrideInfo* m_overrideInfo;
    struct MoonTimeline* m_currentAdditionalTimeline;
    struct MoonTimeline* BiteTimeline;
    struct AnimationCurve* BiteTimelineChanceByDistance;
    struct List_1_DesertEscapeWorm_AdditionalTimelineSet_* AdditionalTimelineSets;
    bool DebugSpeed;
    float DebugSpeedValue;
    bool DebugLean;
    float DebugLeaningValue;
    int32_t m_checkpointFrame;
    float m_speed;
    bool _IsRaceRun_k__BackingField;
    struct Quaternion m_currentRotation;
    struct IUberState__Array* m_affectingUberStates;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DesertEscapeWorm__Fields_FWDDECL)
#define IL2CPP_STRUCT_DesertEscapeWorm__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/DamageDealer_OverrideInfo.h>
#include <Modloader/app/structs/DamageDealer__Array.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_DesertEscapeWorm_AdditionalTimelineSet_.h>
#include <Modloader/app/structs/List_1_Moon_ScalableAnimationPlayer_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_EventTriggerAnimator_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>
#include <Modloader/app/structs/ReadyForAnimationTrigger.h>
#include <Modloader/app/structs/RubberBandedValueProvider.h>
#include <Modloader/app/structs/SerializedIntUberState.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/TriggerBasedRubberBandingSet.h>
#endif
#undef IL2CPP_STRUCT_DesertEscapeWorm__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesertEscapeWorm__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DesertEscapeWorm__Fields_FWDDECL)
#include <Modloader/app/structs/DesertEscapeWorm__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DesertEscapeWorm__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

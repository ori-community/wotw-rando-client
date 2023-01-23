#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinBowPuppet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinBowPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBowPuppet__Fields_DEFINED)
#include <Modloader/app/structs/CharacterStatePuppet__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_CharacterStatePuppet__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SeinBowPuppet__Fields_DEFINED
struct GameObject;
struct FloatAnimationParameter;
struct Transform;
struct MoonAnimation;
struct MoonTimeline;
struct MoonFloat;
struct MoonAnimator;
struct SeinBowPuppet__Fields {
    struct CharacterStatePuppet__Fields _;
    struct GameObject* MarkerPrefab;
    struct GameObject* BowRig;
    struct GameObject* Arrow;
    struct FloatAnimationParameter* AimAngle;
    struct Transform* BogTransform;
    struct MoonAnimation* AimLoopAnimationGround;
    struct MoonTimeline* DrawTimelineGround;
    struct MoonTimeline* DrawRapidTimelineGround;
    struct MoonTimeline* RecoverTimelineGround;
    struct MoonTimeline* RecoverRapidTimelineGround;
    struct MoonTimeline* PullChargeTimelineGround;
    struct MoonTimeline* ChargeRecoverTimelineGround;
    struct GameObject* AimEffectGround;
    struct GameObject* ChargeEffectGround;
    struct MoonFloat* ArrowChargeAmountGround;
    struct MoonAnimation* AimLoopAnimationBowGround;
    struct MoonAnimation* AimLoopAnimationAir;
    struct MoonTimeline* DrawTimelineAir;
    struct MoonTimeline* DrawRapidTimelineAir;
    struct MoonTimeline* RecoverTimelineAir;
    struct MoonTimeline* RecoverRapidTimelineAir;
    struct MoonTimeline* PullChargeTimelineAir;
    struct MoonTimeline* ChargeRecoverTimelineAir;
    struct GameObject* AimEffectAir;
    struct GameObject* ChargeEffectAir;
    struct MoonFloat* ArrowChargeAmountAir;
    struct MoonAnimation* AimLoopAnimationBowAir;
    struct Vector3 RapidArrowScale;
    struct Vector3 ArrowScale;
    struct Vector3 ChargeArrowScale;
    struct GameObject* m_currentArrow;
    struct Transform* PreviewArrow;
    struct MoonAnimator* m_bowAnimator;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinBowPuppet__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinBowPuppet__Fields_FWDDECL
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SeinBowPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBowPuppet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinBowPuppet__Fields_FWDDECL)
#include <Modloader/app/structs/SeinBowPuppet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinBowPuppet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

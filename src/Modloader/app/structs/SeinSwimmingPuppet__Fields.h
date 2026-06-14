#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinSwimmingPuppet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinSwimmingPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSwimmingPuppet__Fields_DEFINED)
#include <Modloader/app/structs/CharacterStatePuppet__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterStatePuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinSwimmingPuppet__Fields_DEFINED
struct MoonAnimation;
struct FloatAnimationParameter;
struct MoonTimeline;
struct CameraShakeAnimator;
struct ControllerShakeAnimatorEntity;
struct EventTriggerAnimator;
struct GameObject;
struct SeinSwimmingPuppet__Fields {
    struct CharacterStatePuppet__Fields _;
    struct MoonAnimation* SwimSurfaceIdle;
    struct MoonAnimation* SwimSurfaceMove;
    struct MoonAnimation* SwimSurfaceTurn;
    struct FloatAnimationParameter* SwimCurvature;
    struct FloatAnimationParameter* SwimAngleAnimationParameter;
    struct MoonAnimation* SwimHorizontalNew;
    struct MoonAnimation* SwimJumpLeftNew;
    struct MoonAnimation* SwimIdleNew;
    struct MoonAnimation* SwimMiddleToIdleClockwiseNew;
    struct MoonAnimation* SwimMiddleToIdleAntiClockwiseNew;
    struct MoonAnimation* SwimFlipHorizontal;
    struct MoonAnimation* SwimFlipVertical;
    struct MoonAnimation* SwimFlipHorizontalVertical;
    struct MoonAnimation* DamageFront;
    struct MoonAnimation* DamageBack;
    struct MoonAnimation* JumpOutOfWaterUp;
    struct MoonAnimation* JumpOutOfWaterLateral;
    struct MoonTimeline* InsideWaterCurrentLoopTimeline;
    struct MoonTimeline* DashExitTimeline;
    struct CameraShakeAnimator* DashExitCameraShakeAnimator;
    struct ControllerShakeAnimatorEntity* DashExitControllerShakeAnimator;
    struct MoonTimeline* SurfaceDashTimeline;
    struct MoonTimeline* DashIntoWaterOnHitWaterTimeline;
    struct MoonTimeline* WallImpactTimeline;
    struct EventTriggerAnimator* CancellationWindowEvent;
    struct GameObject* WallImpactEffect;
    struct MoonTimeline* SurfaceWallImpactTimeline;
    struct EventTriggerAnimator* SurfaceWallImpactCancellationWindowEvent;
    struct GameObject* SurfaceWallImpactEffect;
    struct GameObject* SwimDashEffect;
    struct GameObject* DashHitEffect;
    struct GameObject* DashExitEffect;
    struct GameObject* SurfaceDashEffect;
    struct GameObject* DashEnterEffect;
    struct GameObject* WaterSplashEffet;
    struct MoonAnimation* DashIntoWaterAnimation;
    struct MoonAnimation* DashAnimationLoop;
    struct MoonAnimation* DashExitAnimation;
    struct MoonAnimation* SurfaceDashAnimationStart;
    struct MoonAnimation* SurfaceDashAnimationLoop;
    struct GameObject* SwimDashStartEffect;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinSwimmingPuppet__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinSwimmingPuppet__Fields_FWDDECL
#include <Modloader/app/structs/CameraShakeAnimator.h>
#include <Modloader/app/structs/ControllerShakeAnimatorEntity.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_SeinSwimmingPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSwimmingPuppet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinSwimmingPuppet__Fields_FWDDECL)
#include <Modloader/app/structs/SeinSwimmingPuppet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinSwimmingPuppet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

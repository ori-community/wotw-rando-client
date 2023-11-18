#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FallBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FallBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FallBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/EntityBehaviour__Fields.h>
#include <Modloader/app/structs/FallBehaviour_FallState__Enum.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_EntityBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED) && defined(IL2CPP_STRUCT_FallBehaviour_FallState__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_FallBehaviour__Fields_DEFINED
struct MoonAnimation;
struct FloatAnimationParameter;
struct ClipAnimation;
struct GameObject;
struct RootMotionProcessorData;
struct EntityBehaviour__Array;
struct Locomotion;
struct ILocomotionTurningHandler;
struct Rigidbody;
struct FallBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    struct MoonAnimation* AirLoopAnimation;
    struct FloatAnimationParameter* VerticalSpeedBlendParameter;
    struct ClipAnimation* LandAnimation;
    struct MoonAnimation* HitWallFront;
    struct MoonAnimation* HitWallBack;
    struct GameObject* ImpactEffect;
    struct RootMotionProcessorData* LandRootMotionProcessor;
    bool ResetHorizontalSpeedOnLand;
    int32_t AnimationPriority;
    float LandAntecipationTime;
    struct LayerMask CollisionMask;
    struct EntityBehaviour__Array* NonInterruptableBehaviours;
    struct Locomotion* m_locomotion;
    struct ILocomotionTurningHandler* m_turningHandler;
    struct ActiveAnimationHandle m_animationState;
    FallBehaviour_FallState__Enum m_fallState;

    struct Rigidbody* m_rigidBody;
    struct Vector2 m_postBounceVelocity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FallBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_FallBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/ClipAnimation.h>
#include <Modloader/app/structs/EntityBehaviour__Array.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/ILocomotionTurningHandler.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#endif
#undef IL2CPP_STRUCT_FallBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FallBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FallBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/FallBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FallBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

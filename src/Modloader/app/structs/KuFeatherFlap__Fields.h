#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuFeatherFlap__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuFeatherFlap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuFeatherFlap__Fields_DEFINED)
#include <Modloader/app/structs/KuState__Fields.h>
#if defined(IL2CPP_STRUCT_KuState__Fields_DEFINED)
#define IL2CPP_STRUCT_KuFeatherFlap__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator__Array;
struct Transform;
struct GameObject;
struct AnimationCurve;
struct FloatAnimationParameter;
struct KuFeatherFlap__Fields {
    struct KuState__Fields _;
    struct MoonTimeline* AttackTimeline;
    struct MoonTimeline* AirAttackTimeline;
    struct EventTriggerAnimator__Array* SpawnEffectTriggers;
    struct EventTriggerAnimator__Array* AllowCancelAnimationTriggers;
    struct Transform* SpawnPoint;
    struct GameObject* WindFX;
    struct AnimationCurve* DistanceToKnockback;
    struct FloatAnimationParameter* MoveSpeedParameter;
    float AirRootMotionMul;
    float AirGravityMulUp;
    float AirGravityMulUpGlide;
    float AirGravityMulDown;
    float AirMaxSpeedMul;
    float AirAccelerationMul;
    float AirDecellerationMul;
    bool m_isAttacking;
    bool m_canCancel;
    bool m_fromGlideUp;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuFeatherFlap__Fields_FWDDECL)
#define IL2CPP_STRUCT_KuFeatherFlap__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/EventTriggerAnimator__Array.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_KuFeatherFlap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuFeatherFlap__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KuFeatherFlap__Fields_FWDDECL)
#include <Modloader/app/structs/KuFeatherFlap__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuFeatherFlap__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

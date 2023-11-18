#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinerPickaxeAttack__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinerPickaxeAttack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerPickaxeAttack__Fields_DEFINED)
#include <Modloader/app/structs/GroundMovementTimelineBehaviourNew__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_GroundMovementTimelineBehaviourNew__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_MinerPickaxeAttack__Fields_DEFINED
struct EnemyShield;
struct EventTriggerAnimator;
struct Transform;
struct FloatAnimationParameter;
struct Rigidbody;
struct MinerPickaxeAttack__Fields {
    struct GroundMovementTimelineBehaviourNew__Fields _;
    bool UseShield;
    struct EnemyShield* Shield;
    struct EventTriggerAnimator* PutShieldDownTrigger;
    struct EventTriggerAnimator* PickShieldUpTrigger;
    bool ForceProtectedStateOnExit;
    bool AdjustAnimBlendBasedOnSlope;
    struct Transform* GroundCheckOrigin;
    struct Vector2 GroundCheckOffset;
    float SlopeDepth;
    float RaycastOriginOffset;
    struct FloatAnimationParameter* BlendParam;
    struct EventTriggerAnimator* SlopeUpdateTrigger;
    bool DebugSlopeHit;
    float m_debugSlopeBlendValue;
    struct Vector2 m_debugSlopeHitCheckOrigin;
    struct Vector2 m_debugSlopeHitPoint;
    struct EventTriggerAnimator* GroundHitTrigger;
    struct Transform* PickaxeEndPoint;
    struct Rigidbody* m_groundRigidbody;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinerPickaxeAttack__Fields_FWDDECL)
#define IL2CPP_STRUCT_MinerPickaxeAttack__Fields_FWDDECL
#include <Modloader/app/structs/EnemyShield.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MinerPickaxeAttack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerPickaxeAttack__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MinerPickaxeAttack__Fields_FWDDECL)
#include <Modloader/app/structs/MinerPickaxeAttack__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinerPickaxeAttack__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

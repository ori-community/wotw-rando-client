#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormSandDigLocomotionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormSandDigLocomotionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormSandDigLocomotionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityLocomotionTask__Fields.h>
#include <Modloader/app/structs/LocomotionUtils_CollisionAvoidanceSettings.h>
#include <Modloader/app/structs/SandWormSandDigLocomotionBehaviour_SpeedEntry.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityLocomotionTask__Fields_DEFINED) && defined(IL2CPP_STRUCT_SandWormSandDigLocomotionBehaviour_SpeedEntry_DEFINED) && defined(IL2CPP_STRUCT_LocomotionUtils_CollisionAvoidanceSettings_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SandWormSandDigLocomotionBehaviour__Fields_DEFINED
struct CapsuleCollider;
struct AnimationCurve;
struct Event_1;
struct RTPC;
struct SandWormLocomotion;
struct SandWormEntity;
struct Func_1_SandWormSandDigLocomotionBehaviour_SpeedEntry_;
struct SandWormSandDigLocomotionBehaviour__Fields {
    struct EntityLocomotionTask__Fields _;
    struct CapsuleCollider* HeadCollider;
    float AvoidanceRadiusMultiplier;
    float AvoidanceCheckDistance;
    float AvoidanceMinDistanceToObstacle;
    struct AnimationCurve* AvoidanceSpeedDampRate;
    struct SandWormSandDigLocomotionBehaviour_SpeedEntry IdleSpeed;
    struct SandWormSandDigLocomotionBehaviour_SpeedEntry AggresiveSpeed;
    struct SandWormSandDigLocomotionBehaviour_SpeedEntry InAirSpeed;
    bool DebugShowTargetPosition;
    float ChangeDirectionSoundTriggerAngle;
    float ChangeDirectionSoundCooldown;
    struct Event_1* ChangeDirectionSoundEvent;
    struct RTPC* SpeedRTPC;
    struct RTPC* TurnAngleRTPC;
    struct SandWormLocomotion* m_wormLocomotion;
    struct SandWormEntity* m_wormEntity;
    struct LocomotionUtils_CollisionAvoidanceSettings m_avoidanceSettings;
    float m_lastAvoidancePower;
    struct Vector2 m_previousDirection;
    float m_changeDirectionSoundCooldown;
    bool m_prevHeadInSand;
    struct Func_1_SandWormSandDigLocomotionBehaviour_SpeedEntry_* SpeedOverrideProvider;
    int32_t m_sphereCastRequestId;
    int32_t kSoundThreshold;
    int32_t m_speedSoundCooldown;
    int32_t m_turnSoundCooldown;
    struct Vector3 _TargetPosition_k__BackingField;
    float _TraversalSpeed_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandWormSandDigLocomotionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SandWormSandDigLocomotionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/CapsuleCollider.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/Func_1_SandWormSandDigLocomotionBehaviour_SpeedEntry_.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/SandWormEntity.h>
#include <Modloader/app/structs/SandWormLocomotion.h>
#endif
#undef IL2CPP_STRUCT_SandWormSandDigLocomotionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormSandDigLocomotionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SandWormSandDigLocomotionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SandWormSandDigLocomotionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormSandDigLocomotionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

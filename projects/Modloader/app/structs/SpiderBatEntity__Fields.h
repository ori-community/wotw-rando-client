#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBatEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBatEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBatEntity__Fields_DEFINED)
#include <Modloader/app/structs/EnemyEntity__Fields.h>
#include <Modloader/app/structs/SpiderBatEntity_ClimbBehaviourType__Enum.h>
#if defined(IL2CPP_STRUCT_EnemyEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_SpiderBatEntity_ClimbBehaviourType__Enum_DEFINED)
#define IL2CPP_STRUCT_SpiderBatEntity__Fields_DEFINED
struct Rigidbody;
struct MoonTimeline;
struct AnimationCurve;
struct Transform;
struct GameObject;
struct Rope;
struct LineRenderer;
struct SpiderBatPlatformMovement;
struct SpiderBatLocomotion;
struct Action_1_Damage_;
struct ReactionFallingBehaviour;
struct BehaviourNode;
struct ConfigurableJoint;
struct SpiderBatEntity__Fields {
    struct EnemyEntity__Fields _;
    float LightKnockBackForce;
    float MediumKnockBackForce;
    float HeavyKnockBackForce;
    float HeavyStunDuration;
    struct Rigidbody* RigidbodyRopeClimber;
    float RotationSpring;
    float RotationDampening;
    struct MoonTimeline* RestingTimelineSequence;
    struct AnimationCurve* ClimbSpeedCurve;
    struct Transform* WebRopeConnectPoint;
    struct Transform* RotationTransform;
    struct GameObject* BaseModel;
    struct GameObject* AcidModel;
    SpiderBatEntity_ClimbBehaviourType__Enum ClimbType;

    bool m_isAttacking;
    bool AllowClimb;
    int32_t AttacksSinceClimbedUp;
    int32_t AttackToClimb;
    bool ClimbUpDirection;
    struct Rope* m_ropeToAttachTo;
    float m_ropeTotalLength;
    struct LineRenderer* m_ropeLineRenderer;
    struct Rigidbody* m_rigidbody;
    struct Rigidbody* m_ropeClimberRigidbody;
    int32_t m_ropeLinkIndex;
    float m_ropeLinkOffset;
    struct SpiderBatPlatformMovement* m_spiderBatPlatformMovement;
    struct SpiderBatLocomotion* m_spiderBatLocomotion;
    struct Action_1_Damage_* m_receivedDamageEvent;
    float m_stunnedTimer;
    bool m_isAggro;
    struct ReactionFallingBehaviour* m_falling;
    struct BehaviourNode* SpitNode;
    struct BehaviourNode* MultiShotNode;
    struct BehaviourNode* SprayNode;
    struct BehaviourNode* MixedNode;
    struct BehaviourNode* AcidNode;
    bool SpawnReady;
    struct ConfigurableJoint* m_generatedConfigurableJoint;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBatEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderBatEntity__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Damage_.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/BehaviourNode.h>
#include <Modloader/app/structs/ConfigurableJoint.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LineRenderer.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ReactionFallingBehaviour.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Rope.h>
#include <Modloader/app/structs/SpiderBatLocomotion.h>
#include <Modloader/app/structs/SpiderBatPlatformMovement.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SpiderBatEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBatEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBatEntity__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderBatEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBatEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

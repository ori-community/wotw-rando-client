#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleStabBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleStabBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleStabBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_TentacleEntity___Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/TentacleAnimatedSettings.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_TentacleEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_TentacleAnimatedSettings_DEFINED)
#define IL2CPP_STRUCT_TentacleStabBehaviour__Fields_DEFINED
struct Enum__Array;
struct MoonTimeline;
struct FloatAnimator;
struct EventTriggerAnimator;
struct EntityTargetting;
struct GameObject;
struct Transform;
struct TentacleStabBehaviour__Fields {
    struct EntityBehaviourNode_1_TentacleEntity___Fields _;
    struct Enum__Array* Entries;
    struct MoonTimeline* attackTimeline;
    struct FloatAnimator* targetFollowForce;
    struct FloatAnimator* alignHeadForce;
    struct FloatAnimator* alignHeadForceMiss;
    struct FloatAnimator* referenceTargetOverride;
    struct FloatAnimator* referenceTargetOverrideMiss;
    struct FloatAnimator* positionAlignmentCurve;
    struct FloatAnimator* positionAlignmentCurveMiss;
    struct EventTriggerAnimator* lockTargetTrigger;
    struct EventTriggerAnimator* stickToGroundTrigger;
    struct EventTriggerAnimator* missEndTrigger;
    struct EventTriggerAnimator* continueFollowTrigger;
    struct EventTriggerAnimator* continueFollowMissTrigger;
    float MaxDistance;
    float raycastGroundDistance;
    struct LayerMask groundMask;
    float maxSpeed;
    float headAlignmentMinDistance;
    float MissOvershootDistance;
    bool NoLeashingWhileAttack;
    struct EntityTargetting* HeadTargeting;
    struct GameObject* InstantiateHitEffect;
    struct LayerMask HeadStickLayer;
    struct Vector3 m_targetPosition;
    bool m_targetLocked;
    struct Transform* m_stickTransform;
    struct Vector3 m_stickAnchor;
    struct Vector3 m_previousReferenceTarget;
    struct Vector3 m_lockedTargetPosition;
    struct Vector3 m_stickNormal;
    int32_t m_headStickLayerInt;
    struct TentacleAnimatedSettings m_stabSettings;
    bool m_continueFollowAfterAttack;
    float m_rigidAlignToAnimationCache;
    bool RecordTargetPositionBlendData;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleStabBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_TentacleStabBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EntityTargetting.h>
#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/FloatAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_TentacleStabBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleStabBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TentacleStabBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/TentacleStabBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleStabBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

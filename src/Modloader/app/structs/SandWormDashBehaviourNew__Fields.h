#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormDashBehaviourNew__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormDashBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormDashBehaviourNew__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_SandWormEntity___Fields.h>
#include <Modloader/app/structs/NavigationType__Enum.h>
#include <Modloader/app/structs/SandWormDashBehaviourNew_State__Enum.h>
#include <Modloader/app/structs/SandWormSandDigLocomotionBehaviour_SpeedEntry.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_SandWormEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_NavigationType__Enum_DEFINED) && defined(IL2CPP_STRUCT_SandWormSandDigLocomotionBehaviour_SpeedEntry_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SandWormDashBehaviourNew_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SandWormDashBehaviourNew__Fields_DEFINED
struct MoonReference_1_UnityEngine_GameObject_;
struct MoonFloat;
struct MoonTimeline;
struct Event_1;
struct Rigidbody;
struct SandWormLocomotion;
struct SandWormDashBehaviourNew__Fields {
    struct EntityBehaviourNode_1_SandWormEntity___Fields _;
    NavigationType__Enum DashZone;

    struct MoonReference_1_UnityEngine_GameObject_* DashTarget;
    struct MoonFloat* PredictionTime;
    struct MoonFloat* FollowTargetTime;
    struct SandWormSandDigLocomotionBehaviour_SpeedEntry AnticSpeed;
    struct SandWormSandDigLocomotionBehaviour_SpeedEntry DashSpeed;
    struct SandWormSandDigLocomotionBehaviour_SpeedEntry ResolveSpeed;
    float AnticipationCompressDuration;
    float FollowThroughDuration;
    float SlowdownTime;
    float TrailWidth;
    struct MoonTimeline* Timeline;
    struct MoonTimeline* HitWallTimeline;
    struct Event_1* DashPrepareSound;
    struct Event_1* DashAttackSound;
    float m_anticipationTime;
    float m_dashTime;
    struct Rigidbody* m_targetRigidbody;
    struct SandWormLocomotion* m_wormLocomotion;
    float m_originalTrailWidth;
    float m_followTargetTimer;
    struct Vector3 m_targetPosition;
    bool m_isStunned;
    SandWormDashBehaviourNew_State__Enum m_state;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandWormDashBehaviourNew__Fields_FWDDECL)
#define IL2CPP_STRUCT_SandWormDashBehaviourNew__Fields_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SandWormLocomotion.h>
#endif
#undef IL2CPP_STRUCT_SandWormDashBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormDashBehaviourNew__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SandWormDashBehaviourNew__Fields_FWDDECL)
#include <Modloader/app/structs/SandWormDashBehaviourNew__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormDashBehaviourNew__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

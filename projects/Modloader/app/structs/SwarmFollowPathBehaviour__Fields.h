#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwarmFollowPathBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwarmFollowPathBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmFollowPathBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_SwarmEntity___Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_SwarmEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SwarmFollowPathBehaviour__Fields_DEFINED
struct IEntityLocomotion;
struct ILocomotionTurningHandler;
struct List_1_UnityEngine_Vector2_;
struct SwarmFollowPathBehaviour__Fields {
    struct EntityBehaviourNode_1_SwarmEntity___Fields _;
    struct IEntityLocomotion* m_locomotion;
    struct ILocomotionTurningHandler* m_turningHandler;
    float m_timer;
    struct Vector3 m_pathNodePosition;
    struct List_1_UnityEngine_Vector2_* m_patrolNodes;
    int32_t m_currentPatrolNode;
    float m_pathFollowAccuracy;
    float m_nodeReachMaxTime;
    struct Vector3 m_targetPos;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwarmFollowPathBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SwarmFollowPathBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/IEntityLocomotion.h>
#include <Modloader/app/structs/ILocomotionTurningHandler.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector2_.h>
#endif
#undef IL2CPP_STRUCT_SwarmFollowPathBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmFollowPathBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SwarmFollowPathBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SwarmFollowPathBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwarmFollowPathBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

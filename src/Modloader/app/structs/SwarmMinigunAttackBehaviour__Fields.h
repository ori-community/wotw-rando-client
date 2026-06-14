#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwarmMinigunAttackBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwarmMinigunAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmMinigunAttackBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_SwarmEntity___Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_SwarmEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SwarmMinigunAttackBehaviour__Fields_DEFINED
struct List_1_SwarmAgent_;
struct List_1_UnityEngine_Transform_;
struct Event_1;
struct SwarmMinigunAttackBehaviour__Fields {
    struct EntityBehaviourNode_1_SwarmEntity___Fields _;
    float BeforeAttackWaitDuration;
    float m_timer;
    bool m_attackCompleated;
    struct Vector3 m_lockedTarget;
    bool m_hasLockedTarget;
    struct List_1_SwarmAgent_* m_bulletAgents;
    struct List_1_SwarmAgent_* m_allAgents;
    struct List_1_UnityEngine_Transform_* m_bulletChamberLocations;
    int32_t m_numberOfBullets;
    float m_nextAttackTime;
    bool initialized;
    struct Event_1* AttackStartWwiseEvent;
    struct Event_1* LaunchSwarmMemberEvent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwarmMinigunAttackBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SwarmMinigunAttackBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/List_1_SwarmAgent_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Transform_.h>
#endif
#undef IL2CPP_STRUCT_SwarmMinigunAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmMinigunAttackBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SwarmMinigunAttackBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SwarmMinigunAttackBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwarmMinigunAttackBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

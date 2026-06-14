#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwarmChainAttackBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwarmChainAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmChainAttackBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_SwarmEntity___Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_SwarmEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SwarmChainAttackBehaviour__Fields_DEFINED
struct Event_1;
struct SwarmChainAttackBehaviour__Fields {
    struct EntityBehaviourNode_1_SwarmEntity___Fields _;
    float m_launchAttackTimer;
    float m_timer;
    struct Vector3 m_lockedTarget;
    bool m_hasLockedTarget;
    float AttackXDistance;
    float AttackYDistance;
    float MaxAttackDistance;
    struct Event_1* AttackStartWwiseEvent;
    struct Event_1* LaunchSwarmMemberEvent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwarmChainAttackBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SwarmChainAttackBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#endif
#undef IL2CPP_STRUCT_SwarmChainAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmChainAttackBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SwarmChainAttackBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SwarmChainAttackBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwarmChainAttackBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

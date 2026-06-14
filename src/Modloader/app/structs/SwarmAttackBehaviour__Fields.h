#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwarmAttackBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwarmAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmAttackBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_SwarmEntity___Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_SwarmEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SwarmAttackBehaviour__Fields_DEFINED
struct SwarmAttackBehaviour__Fields {
    struct EntityBehaviourNode_1_SwarmEntity___Fields _;
    float BeforeAttackWaitDuration;
    float AttackXDistance;
    float AttackYDistance;
    float MaxAttackDistance;
    float m_timer;
    float m_nextAttackTime;
    bool m_attackCompleated;
    struct Vector3 m_lockedTarget;
    bool m_hasLockedTarget;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwarmAttackBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SwarmAttackBehaviour__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SwarmAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmAttackBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SwarmAttackBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SwarmAttackBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwarmAttackBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

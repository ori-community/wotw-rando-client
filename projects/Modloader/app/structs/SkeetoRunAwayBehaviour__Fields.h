#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkeetoRunAwayBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkeetoRunAwayBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoRunAwayBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_SkeetoEntity___Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_SkeetoEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SkeetoRunAwayBehaviour__Fields_DEFINED
struct Collider__Array;
struct RaycastHit__Array;
struct SkeetoRunAwayBehaviour__Fields {
    struct EntityBehaviourNode_1_SkeetoEntity___Fields _;
    float ApproachArrivalDistance;
    struct Vector2 ApproachTargetOffset;
    float ApproachTargetRandomDistance;
    int32_t MovementSpeed;
    struct Vector3 m_targetPosition;
    struct Vector3 m_anticipationPosition;
    struct Vector3 m_resolvePosition;
    bool m_successfulAttack;
    struct Vector3 m_velocity;
    struct Vector3 m_approachRandomOffset;
    struct Vector3 m_upDirection;
    struct Collider__Array* m_colliders;
    struct RaycastHit__Array* m_hits;
    bool m_hasValidPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkeetoRunAwayBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkeetoRunAwayBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/RaycastHit__Array.h>
#endif
#undef IL2CPP_STRUCT_SkeetoRunAwayBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoRunAwayBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkeetoRunAwayBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SkeetoRunAwayBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkeetoRunAwayBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

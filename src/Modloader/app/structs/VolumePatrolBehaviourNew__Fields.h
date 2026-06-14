#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VolumePatrolBehaviourNew__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VolumePatrolBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumePatrolBehaviourNew__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/NavigationType__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/VolumePatrolBehaviourNew_PatrolMode__Enum.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_VolumePatrolBehaviourNew_PatrolMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_NavigationType__Enum_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_VolumePatrolBehaviourNew__Fields_DEFINED
struct MoonVector3;
struct String;
struct Predicate_1_UnityEngine_Vector3_;
struct VolumePatrolBehaviourNew__Fields {
    struct EntityBehaviourNode__Fields _;
    VolumePatrolBehaviourNew_PatrolMode__Enum AgentPatrolMode;

    float MinInterval;
    float MaxInterval;
    struct MoonVector3* PatrolOrigin;
    float MaxPatrolRadius;
    float TraversalSpeed;
    NavigationType__Enum VolumeType;

    struct LayerMask LayerMask;
    struct String* IgnoreColliderTag;
    struct Predicate_1_UnityEngine_Vector3_* m_patrolTargetPredicate;
    struct Vector2 m_targetPosition;
    float m_timeUntilNextPoint;
    struct Vector3 m_patrolOrigin;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VolumePatrolBehaviourNew__Fields_FWDDECL)
#define IL2CPP_STRUCT_VolumePatrolBehaviourNew__Fields_FWDDECL
#include <Modloader/app/structs/MoonVector3.h>
#include <Modloader/app/structs/Predicate_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_VolumePatrolBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumePatrolBehaviourNew__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VolumePatrolBehaviourNew__Fields_FWDDECL)
#include <Modloader/app/structs/VolumePatrolBehaviourNew__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VolumePatrolBehaviourNew__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

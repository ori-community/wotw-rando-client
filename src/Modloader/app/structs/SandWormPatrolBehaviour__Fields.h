#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormPatrolBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormPatrolBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormPatrolBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_SandWormEntity___Fields.h>
#include <Modloader/app/structs/NavigationType__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_SandWormEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_NavigationType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SandWormPatrolBehaviour__Fields_DEFINED
struct MoonVector3;
struct SandWormLocomotion;
struct SandWormPatrolBehaviour__Fields {
    struct EntityBehaviourNode_1_SandWormEntity___Fields _;
    NavigationType__Enum PatrolZone;

    struct MoonVector3* PatrolOrigin;
    bool LimitToAllowedZone;
    float MinDistanceBelowWater;
    float PatrolPointRange;
    float RetreatDistance;
    float m_arriveDistance;
    struct SandWormLocomotion* m_wormLocomotion;
    struct Vector3 m_targetPosition;
    float m_avoidancePowerAccumulator;
    bool _IsWaterWorm_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandWormPatrolBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SandWormPatrolBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/MoonVector3.h>
#include <Modloader/app/structs/SandWormLocomotion.h>
#endif
#undef IL2CPP_STRUCT_SandWormPatrolBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormPatrolBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SandWormPatrolBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SandWormPatrolBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormPatrolBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

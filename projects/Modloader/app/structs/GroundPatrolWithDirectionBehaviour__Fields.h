#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroundPatrolWithDirectionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroundPatrolWithDirectionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundPatrolWithDirectionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviour__Fields.h>
#include <Modloader/app/structs/GroundPatrolDirectionMode__Enum.h>
#include <Modloader/app/structs/GroundPatrolMode__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_GroundPatrolMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_GroundPatrolDirectionMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_GroundPatrolWithDirectionBehaviour__Fields_DEFINED
struct GroundEntityLocomotion;
struct GroundPatrolWithDirectionBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    GroundPatrolMode__Enum _PatrolMode_k__BackingField;

    GroundPatrolDirectionMode__Enum _PatrolDirectionMode_k__BackingField;

    struct Vector3 _PatrolOrigin_k__BackingField;
    bool ShouldIdle;
    float _MaxPatrolRadius_k__BackingField;
    float _MinIdleInterval_k__BackingField;
    float _MaxIdleInterval_k__BackingField;
    float _MinMovingInterval_k__BackingField;
    float _MaxMovingInterval_k__BackingField;
    bool _StartWithMoving_k__BackingField;
    float _TraversalSpeed_k__BackingField;
    float m_timeUntilIdleEnd;
    float m_timeUntilMovingEnd;
    struct GroundEntityLocomotion* m_locomotion;
    bool m_movingLeft;
    bool m_isMoving;
    struct Vector2 m_effectivePatrolOrigin;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroundPatrolWithDirectionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_GroundPatrolWithDirectionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#endif
#undef IL2CPP_STRUCT_GroundPatrolWithDirectionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundPatrolWithDirectionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GroundPatrolWithDirectionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/GroundPatrolWithDirectionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroundPatrolWithDirectionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

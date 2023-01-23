#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LaserShooterMinibossPathMover__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LaserShooterMinibossPathMover__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterMinibossPathMover__Fields_DEFINED)
#include <Modloader/app/structs/LaserShooterMinibossPathMover_State__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_LaserShooterMinibossPathMover_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_LaserShooterMinibossPathMover__Fields_DEFINED
struct AnimationCurve;
struct LaserShooterMinibossEntity;
struct BaseSpline_SplineIterator;
struct LaserShooterMinibossWaypoint;
struct LaserShooterMinibossPathMover__Fields {
    struct MonoBehaviour__Fields _;
    float MinSpeed;
    float MaxSpeed;
    float AccelerationDiscance;
    struct AnimationCurve* AccelerationCurve;
    struct LaserShooterMinibossEntity* _Entity_k__BackingField;
    struct BaseSpline_SplineIterator* m_splineIterator;
    LaserShooterMinibossPathMover_State__Enum m_state;

    struct LaserShooterMinibossWaypoint* m_targetWaypoint;
    struct LaserShooterMinibossWaypoint* m_currentWaypoint;
    struct Vector3 m_startMovePosition;
    struct Vector3 m_endMovePosition;
    bool _IsAtCenter_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LaserShooterMinibossPathMover__Fields_FWDDECL)
#define IL2CPP_STRUCT_LaserShooterMinibossPathMover__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/BaseSpline_SplineIterator.h>
#include <Modloader/app/structs/LaserShooterMinibossEntity.h>
#include <Modloader/app/structs/LaserShooterMinibossWaypoint.h>
#endif
#undef IL2CPP_STRUCT_LaserShooterMinibossPathMover__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterMinibossPathMover__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LaserShooterMinibossPathMover__Fields_FWDDECL)
#include <Modloader/app/structs/LaserShooterMinibossPathMover__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LaserShooterMinibossPathMover__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

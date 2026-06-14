#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LaserShooterMinibossWaypoint_Connection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LaserShooterMinibossWaypoint_Connection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterMinibossWaypoint_Connection__Fields_DEFINED)
#define IL2CPP_STRUCT_LaserShooterMinibossWaypoint_Connection__Fields_DEFINED
struct LaserShooterMinibossWaypoint;
struct VelocityBezierSplineComponent;
struct __declspec(align(8)) LaserShooterMinibossWaypoint_Connection__Fields {
    struct LaserShooterMinibossWaypoint* Waypoint;
    struct VelocityBezierSplineComponent* Edge;
    float DirectionToConnectedWaypoint;
};
#endif
#if !defined(IL2CPP_STRUCT_LaserShooterMinibossWaypoint_Connection__Fields_FWDDECL)
#define IL2CPP_STRUCT_LaserShooterMinibossWaypoint_Connection__Fields_FWDDECL
#include <Modloader/app/structs/LaserShooterMinibossWaypoint.h>
#include <Modloader/app/structs/VelocityBezierSplineComponent.h>
#endif
#undef IL2CPP_STRUCT_LaserShooterMinibossWaypoint_Connection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterMinibossWaypoint_Connection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LaserShooterMinibossWaypoint_Connection__Fields_FWDDECL)
#include <Modloader/app/structs/LaserShooterMinibossWaypoint_Connection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LaserShooterMinibossWaypoint_Connection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

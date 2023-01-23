#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteeringForcesAngleAvoidanceSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteeringForcesAngleAvoidanceSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteeringForcesAngleAvoidanceSettings__Fields_DEFINED)
#include <Modloader/app/structs/Space__Enum.h>
#include <Modloader/app/structs/SteeringForces_AvoidanceCurve__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Space__Enum_DEFINED) && defined(IL2CPP_STRUCT_SteeringForces_AvoidanceCurve__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_SteeringForcesAngleAvoidanceSettings__Fields_DEFINED
struct MoonVector2;
struct Int32__Array;
struct __declspec(align(8)) SteeringForcesAngleAvoidanceSettings__Fields {
    struct MoonVector2* Direction;
    float Offset;
    bool UseOffsetedDirection;
    Space__Enum DirectionSpace;

    float Distance;
    int32_t AmountOfRays;
    bool ShouldReflect;
    float Scale;
    SteeringForces_AvoidanceCurve__Enum Curve;

    struct Vector2 m_direction;
    struct Int32__Array* RaycastIds;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SteeringForcesAngleAvoidanceSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_SteeringForcesAngleAvoidanceSettings__Fields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/MoonVector2.h>
#endif
#undef IL2CPP_STRUCT_SteeringForcesAngleAvoidanceSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteeringForcesAngleAvoidanceSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SteeringForcesAngleAvoidanceSettings__Fields_FWDDECL)
#include <Modloader/app/structs/SteeringForcesAngleAvoidanceSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteeringForcesAngleAvoidanceSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

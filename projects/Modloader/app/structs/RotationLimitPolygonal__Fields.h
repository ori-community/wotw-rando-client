#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RotationLimitPolygonal__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RotationLimitPolygonal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RotationLimitPolygonal__Fields_DEFINED)
#include <Modloader/app/structs/RotationLimit__Fields.h>
#if defined(IL2CPP_STRUCT_RotationLimit__Fields_DEFINED)
#define IL2CPP_STRUCT_RotationLimitPolygonal__Fields_DEFINED
struct RotationLimitPolygonal_LimitPoint__Array;
struct Vector3__Array;
struct RotationLimitPolygonal_ReachCone__Array;
struct RotationLimitPolygonal__Fields {
    struct RotationLimit__Fields _;
    float twistLimit;
    int32_t smoothIterations;
    struct RotationLimitPolygonal_LimitPoint__Array* points;
    struct Vector3__Array* P;
    struct RotationLimitPolygonal_ReachCone__Array* reachCones;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RotationLimitPolygonal__Fields_FWDDECL)
#define IL2CPP_STRUCT_RotationLimitPolygonal__Fields_FWDDECL
#include <Modloader/app/structs/RotationLimitPolygonal_LimitPoint__Array.h>
#include <Modloader/app/structs/RotationLimitPolygonal_ReachCone__Array.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_RotationLimitPolygonal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RotationLimitPolygonal__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RotationLimitPolygonal__Fields_FWDDECL)
#include <Modloader/app/structs/RotationLimitPolygonal__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RotationLimitPolygonal__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

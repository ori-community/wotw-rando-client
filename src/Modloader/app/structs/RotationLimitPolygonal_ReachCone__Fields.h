#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RotationLimitPolygonal_ReachCone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RotationLimitPolygonal_ReachCone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RotationLimitPolygonal_ReachCone__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_RotationLimitPolygonal_ReachCone__Fields_DEFINED
struct Vector3__Array;
struct __declspec(align(8)) RotationLimitPolygonal_ReachCone__Fields {
    struct Vector3__Array* tetrahedron;
    float volume;
    struct Vector3 S;
    struct Vector3 B;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RotationLimitPolygonal_ReachCone__Fields_FWDDECL)
#define IL2CPP_STRUCT_RotationLimitPolygonal_ReachCone__Fields_FWDDECL
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_RotationLimitPolygonal_ReachCone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RotationLimitPolygonal_ReachCone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RotationLimitPolygonal_ReachCone__Fields_FWDDECL)
#include <Modloader/app/structs/RotationLimitPolygonal_ReachCone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RotationLimitPolygonal_ReachCone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

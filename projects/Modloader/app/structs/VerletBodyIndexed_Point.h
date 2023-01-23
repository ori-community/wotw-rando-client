#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletBodyIndexed_Point_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletBodyIndexed_Point_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletBodyIndexed_Point_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_VerletBodyIndexed_Point_DEFINED
struct VerletBodyIndexed_Point {
    struct Vector3 PrevPosition;
    struct Vector3 Position;
    struct Vector3 Acceleration;
    float Damping;
    float InverseMass;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletBodyIndexed_Point_FWDDECL)
#define IL2CPP_STRUCT_VerletBodyIndexed_Point_FWDDECL
#endif
#undef IL2CPP_STRUCT_VerletBodyIndexed_Point_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletBodyIndexed_Point_DEFINED) && !defined(IL2CPP_STRUCT_VerletBodyIndexed_Point_FWDDECL)
#include <Modloader/app/structs/VerletBodyIndexed_Point.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletBodyIndexed_Point.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

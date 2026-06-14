#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_P3D_Triangle__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_P3D_Triangle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Triangle__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_P3D_Triangle__Fields_DEFINED
struct __declspec(align(8)) P3D_Triangle__Fields {
    struct Vector3 PointA;
    struct Vector3 PointB;
    struct Vector3 PointC;
    struct Vector2 Coord1A;
    struct Vector2 Coord1B;
    struct Vector2 Coord1C;
    struct Vector2 Coord2A;
    struct Vector2 Coord2B;
    struct Vector2 Coord2C;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_P3D_Triangle__Fields_FWDDECL)
#define IL2CPP_STRUCT_P3D_Triangle__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_P3D_Triangle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Triangle__Fields_DEFINED) && !defined(IL2CPP_STRUCT_P3D_Triangle__Fields_FWDDECL)
#include <Modloader/app/structs/P3D_Triangle__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/P3D_Triangle__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Trail_Point_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Trail_Point_INITIALIZING
#if !defined(IL2CPP_STRUCT_Trail_Point_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_Trail_Point_DEFINED
struct Trail_Point {
    struct Vector3 Position;
    struct Vector3 Tangent;
    struct Vector3 Normal;
    struct Color Color;
    float Thickness;
    float Life;
    bool Discontinuous;
    bool InitialPoint;
    float U;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Trail_Point_FWDDECL)
#define IL2CPP_STRUCT_Trail_Point_FWDDECL
#endif
#undef IL2CPP_STRUCT_Trail_Point_INITIALIZING
#if !defined(IL2CPP_STRUCT_Trail_Point_DEFINED) && !defined(IL2CPP_STRUCT_Trail_Point_FWDDECL)
#include <Modloader/app/structs/Trail_Point.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Trail_Point.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

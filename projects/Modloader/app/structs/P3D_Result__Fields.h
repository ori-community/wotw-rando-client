#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_P3D_Result__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_P3D_Result__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Result__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_P3D_Result__Fields_DEFINED
struct P3D_Triangle;
struct __declspec(align(8)) P3D_Result__Fields {
    struct Vector3 Weights;
    struct P3D_Triangle* Triangle;
    float Distance01;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_P3D_Result__Fields_FWDDECL)
#define IL2CPP_STRUCT_P3D_Result__Fields_FWDDECL
#include <Modloader/app/structs/P3D_Triangle.h>
#endif
#undef IL2CPP_STRUCT_P3D_Result__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Result__Fields_DEFINED) && !defined(IL2CPP_STRUCT_P3D_Result__Fields_FWDDECL)
#include <Modloader/app/structs/P3D_Result__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/P3D_Result__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

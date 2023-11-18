#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_P3D_Matrix_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_P3D_Matrix_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Matrix_DEFINED)
#define IL2CPP_STRUCT_P3D_Matrix_DEFINED
struct P3D_Matrix {
    float m00;
    float m10;
    float m20;
    float m01;
    float m11;
    float m21;
    float m02;
    float m12;
    float m22;
};
#endif
#if !defined(IL2CPP_STRUCT_P3D_Matrix_FWDDECL)
#define IL2CPP_STRUCT_P3D_Matrix_FWDDECL
#endif
#undef IL2CPP_STRUCT_P3D_Matrix_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Matrix_DEFINED) && !defined(IL2CPP_STRUCT_P3D_Matrix_FWDDECL)
#include <Modloader/app/structs/P3D_Matrix.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/P3D_Matrix.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Matrix4x4_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Matrix4x4_INITIALIZING
#if !defined(IL2CPP_STRUCT_Matrix4x4_DEFINED)
#define IL2CPP_STRUCT_Matrix4x4_DEFINED
struct Matrix4x4 {
    float m00;
    float m10;
    float m20;
    float m30;
    float m01;
    float m11;
    float m21;
    float m31;
    float m02;
    float m12;
    float m22;
    float m32;
    float m03;
    float m13;
    float m23;
    float m33;
};
#endif
#if !defined(IL2CPP_STRUCT_Matrix4x4_FWDDECL)
#define IL2CPP_STRUCT_Matrix4x4_FWDDECL
#endif
#undef IL2CPP_STRUCT_Matrix4x4_INITIALIZING
#if !defined(IL2CPP_STRUCT_Matrix4x4_DEFINED) && !defined(IL2CPP_STRUCT_Matrix4x4_FWDDECL)
#include <Modloader/app/structs/Matrix4x4.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Matrix4x4.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

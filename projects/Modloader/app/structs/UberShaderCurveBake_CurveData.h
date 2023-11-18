#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderCurveBake_CurveData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderCurveBake_CurveData_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderCurveBake_CurveData_DEFINED)
#include <Modloader/app/structs/TextureWrapMode__Enum.h>
#if defined(IL2CPP_STRUCT_TextureWrapMode__Enum_DEFINED)
#define IL2CPP_STRUCT_UberShaderCurveBake_CurveData_DEFINED
struct Keyframe__Array;
struct Texture2D;
struct UberShaderCurveBake_CurveData {
    TextureWrapMode__Enum WrapMode;

    struct Keyframe__Array* CheckCurve;
    struct Texture2D* Texture;
    float Duration;
    float Scale;
    float CheckTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderCurveBake_CurveData_FWDDECL)
#define IL2CPP_STRUCT_UberShaderCurveBake_CurveData_FWDDECL
#include <Modloader/app/structs/Keyframe__Array.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_UberShaderCurveBake_CurveData_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderCurveBake_CurveData_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderCurveBake_CurveData_FWDDECL)
#include <Modloader/app/structs/UberShaderCurveBake_CurveData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderCurveBake_CurveData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderCurveBake_GradientData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderCurveBake_GradientData_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderCurveBake_GradientData_DEFINED)
#define IL2CPP_STRUCT_UberShaderCurveBake_GradientData_DEFINED
struct GradientColorKey__Array;
struct GradientAlphaKey__Array;
struct Texture2D;
struct UberShaderCurveBake_GradientData {
    struct GradientColorKey__Array* CheckColor;
    struct GradientAlphaKey__Array* CheckAlpha;
    struct Texture2D* Texture;
    float Duration;
    float Scale;
    float CheckTime;
};
#endif
#if !defined(IL2CPP_STRUCT_UberShaderCurveBake_GradientData_FWDDECL)
#define IL2CPP_STRUCT_UberShaderCurveBake_GradientData_FWDDECL
#include <Modloader/app/structs/GradientAlphaKey__Array.h>
#include <Modloader/app/structs/GradientColorKey__Array.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_UberShaderCurveBake_GradientData_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderCurveBake_GradientData_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderCurveBake_GradientData_FWDDECL)
#include <Modloader/app/structs/UberShaderCurveBake_GradientData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderCurveBake_GradientData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

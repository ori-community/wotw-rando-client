#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LensAberrations_VignetteSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LensAberrations_VignetteSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_LensAberrations_VignetteSettings_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_LensAberrations_VignetteSettings_DEFINED
struct LensAberrations_VignetteSettings {
    bool enabled;
    struct Color color;
    struct Vector2 center;
    float intensity;
    float smoothness;
    float roundness;
    float blur;
    float desaturate;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LensAberrations_VignetteSettings_FWDDECL)
#define IL2CPP_STRUCT_LensAberrations_VignetteSettings_FWDDECL
#endif
#undef IL2CPP_STRUCT_LensAberrations_VignetteSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_LensAberrations_VignetteSettings_DEFINED) && !defined(IL2CPP_STRUCT_LensAberrations_VignetteSettings_FWDDECL)
#include <Modloader/app/structs/LensAberrations_VignetteSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LensAberrations_VignetteSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

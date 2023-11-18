#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScreenSpaceReflection_IntensitySettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScreenSpaceReflection_IntensitySettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenSpaceReflection_IntensitySettings_DEFINED)
#define IL2CPP_STRUCT_ScreenSpaceReflection_IntensitySettings_DEFINED
struct ScreenSpaceReflection_IntensitySettings {
    float reflectionMultiplier;
    float fadeDistance;
    float fresnelFade;
    float fresnelFadePower;
};
#endif
#if !defined(IL2CPP_STRUCT_ScreenSpaceReflection_IntensitySettings_FWDDECL)
#define IL2CPP_STRUCT_ScreenSpaceReflection_IntensitySettings_FWDDECL
#endif
#undef IL2CPP_STRUCT_ScreenSpaceReflection_IntensitySettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenSpaceReflection_IntensitySettings_DEFINED) && !defined(IL2CPP_STRUCT_ScreenSpaceReflection_IntensitySettings_FWDDECL)
#include <Modloader/app/structs/ScreenSpaceReflection_IntensitySettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScreenSpaceReflection_IntensitySettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

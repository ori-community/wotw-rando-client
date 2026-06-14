#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FXAA_QualitySettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FXAA_QualitySettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_FXAA_QualitySettings_DEFINED)
#define IL2CPP_STRUCT_FXAA_QualitySettings_DEFINED
struct FXAA_QualitySettings {
    float subpixelAliasingRemovalAmount;
    float edgeDetectionThreshold;
    float minimumRequiredLuminance;
};
#endif
#if !defined(IL2CPP_STRUCT_FXAA_QualitySettings_FWDDECL)
#define IL2CPP_STRUCT_FXAA_QualitySettings_FWDDECL
#endif
#undef IL2CPP_STRUCT_FXAA_QualitySettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_FXAA_QualitySettings_DEFINED) && !defined(IL2CPP_STRUCT_FXAA_QualitySettings_FWDDECL)
#include <Modloader/app/structs/FXAA_QualitySettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FXAA_QualitySettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

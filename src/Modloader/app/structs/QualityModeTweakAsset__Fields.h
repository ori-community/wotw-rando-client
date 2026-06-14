#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QualityModeTweakAsset__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QualityModeTweakAsset__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QualityModeTweakAsset__Fields_DEFINED)
#include <Modloader/app/structs/LightCullingSystem_LightCullingSettings.h>
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED) && defined(IL2CPP_STRUCT_LightCullingSystem_LightCullingSettings_DEFINED)
#define IL2CPP_STRUCT_QualityModeTweakAsset__Fields_DEFINED
struct QualityModeTweakAsset__Fields {
    struct ScriptableObject__Fields _;
    int32_t vsyncCount;
    float MipBias;
    bool UseMipBias;
    int32_t MasterTextureLimit;
    float TimesliceScaleFactor;
    struct LightCullingSystem_LightCullingSettings LightCullingSettings;
    bool UseSwitchSliceDepths;
    bool OverrideWaterSimDisableToggles;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QualityModeTweakAsset__Fields_FWDDECL)
#define IL2CPP_STRUCT_QualityModeTweakAsset__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_QualityModeTweakAsset__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QualityModeTweakAsset__Fields_DEFINED) && !defined(IL2CPP_STRUCT_QualityModeTweakAsset__Fields_FWDDECL)
#include <Modloader/app/structs/QualityModeTweakAsset__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QualityModeTweakAsset__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

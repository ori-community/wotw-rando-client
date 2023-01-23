#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RenderingSettingsPerScene__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RenderingSettingsPerScene__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderingSettingsPerScene__Fields_DEFINED)
#define IL2CPP_STRUCT_RenderingSettingsPerScene__Fields_DEFINED
struct __declspec(align(8)) RenderingSettingsPerScene__Fields {
    bool FXAADepthPrecull;
    bool m_DeferredLightingEnabled;
    float DeferredLightingRenderTextureScale;
    bool OverrideDRSMagicPower;
    float m_DRSMagicPower;
    bool OverrideSceneRTDRSDownscaleCap;
    int32_t m_sceneRTDRSDownscaleCap;
    bool OverrideSceneRTDRSDownscaleYCap;
    int32_t m_sceneRTDRSDownscaleYCap;
};
#endif
#if !defined(IL2CPP_STRUCT_RenderingSettingsPerScene__Fields_FWDDECL)
#define IL2CPP_STRUCT_RenderingSettingsPerScene__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_RenderingSettingsPerScene__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderingSettingsPerScene__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RenderingSettingsPerScene__Fields_FWDDECL)
#include <Modloader/app/structs/RenderingSettingsPerScene__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RenderingSettingsPerScene__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

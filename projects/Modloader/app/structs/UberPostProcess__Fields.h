#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPostProcess__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPostProcess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPostProcess__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_UberPostProcess__Fields_DEFINED
struct ContrastVignette;
struct VignettingSettings;
struct ContrastSettings;
struct DesaturationSettings;
struct ColorCorrectionSettings;
struct TwirlSettings;
struct EmissiveSettings;
struct LightInfluenceSettings;
struct ColorVariationSettings;
struct PlayerSettingsPerScene;
struct RenderingSettingsPerScene;
struct FaderBrightnessContrastSettings;
struct Shader;
struct Texture2D;
struct ColorVariationManager;
struct List_1_UnityEngine_MeshFilter_;
struct Material;
struct Camera;
struct RenderTarget;
struct UberPostProcess__Fields {
    struct MonoBehaviour__Fields _;
    struct ContrastVignette* ContrastVignette;
    struct VignettingSettings* Vignetting;
    struct ContrastSettings* Contrast;
    struct DesaturationSettings* Desaturation;
    struct ColorCorrectionSettings* ColorCorrection;
    struct TwirlSettings* TwirlSettings;
    struct EmissiveSettings* EmissiveSettings;
    struct LightInfluenceSettings* LightInfluenceSettings;
    struct ColorVariationSettings* ColorVariationSettings;
    struct PlayerSettingsPerScene* PlayerSettingsPerScene;
    struct RenderingSettingsPerScene* RenderingSettingsPerScene;
    float SepBlurSpread;
    float BloomIntensity;
    float BloomThreshhold;
    float _DebugOverrideSepBlurSpread_k__BackingField;
    float _DebugOverrideBloomIntensity_k__BackingField;
    float _DebugOverrideBloomThreshhold_k__BackingField;
    struct ContrastSettings* AdditiveContrast;
    float AdditiveBloomIntensity;
    float AdditiveBloomThreshhold;
    float AdditiveDesaturation;
    float AdditiveVignettingIntensity;
    float AdditiveEmissiveIntensity;
    struct FaderBrightnessContrastSettings* FaderBrightnessContrastSettings;
    struct Shader* Shader;
    bool IsSubCam;
    int32_t m_lastDistortionAddFrameID;
    struct Texture2D* m_NoDistortionTex;
    struct ColorVariationManager* m_colorVariationManager;
    struct List_1_UnityEngine_MeshFilter_* m_renderDistort;
    struct Material* m_material;
    struct Shader* BrightPassFilterShader;
    struct Material* m_brightPassFilterMaterial;
    struct Shader* ScreenBlend;
    struct Material* m_blendMaterial;
    struct Shader* UpsampleShader;
    struct Material* m_upsampleMat;
    bool m_dirty;
    struct Vector3 m_lastPosition;
    struct Vector3 m_lastPos;
    struct Texture2D* m_screenshot;
    struct Vector3 _Speed_k__BackingField;
    float m_prevDesaturation;
    bool m_doRender;
    struct Color m_originalColor;
    int32_t m_originalCullingMask;
    struct Camera* m_mainCamera;
    struct Camera* Camera;
    float m_prevTwirl;
    float m_twirlTime;
    float m_lastTwirlCurrentTime;
    struct RenderTarget* PostTarget;
    struct RenderTarget* distortBuffer;
    struct RenderTarget* quarterRezColor;
    struct RenderTarget* secondQuarterRezColor;
    struct RenderTarget* blurTemp;
    float deprecated_SecondVignetteAmount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPostProcess__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberPostProcess__Fields_FWDDECL
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/ColorCorrectionSettings.h>
#include <Modloader/app/structs/ColorVariationManager.h>
#include <Modloader/app/structs/ColorVariationSettings.h>
#include <Modloader/app/structs/ContrastSettings.h>
#include <Modloader/app/structs/ContrastVignette.h>
#include <Modloader/app/structs/DesaturationSettings.h>
#include <Modloader/app/structs/EmissiveSettings.h>
#include <Modloader/app/structs/FaderBrightnessContrastSettings.h>
#include <Modloader/app/structs/LightInfluenceSettings.h>
#include <Modloader/app/structs/List_1_UnityEngine_MeshFilter_.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/PlayerSettingsPerScene.h>
#include <Modloader/app/structs/RenderTarget.h>
#include <Modloader/app/structs/RenderingSettingsPerScene.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/TwirlSettings.h>
#include <Modloader/app/structs/VignettingSettings.h>
#endif
#undef IL2CPP_STRUCT_UberPostProcess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPostProcess__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberPostProcess__Fields_FWDDECL)
#include <Modloader/app/structs/UberPostProcess__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPostProcess__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

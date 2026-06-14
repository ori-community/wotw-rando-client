#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DepthOfFieldDeprecated__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DepthOfFieldDeprecated__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DepthOfFieldDeprecated__Fields_DEFINED)
#include <Modloader/app/structs/DepthOfFieldDeprecated_BokehDestination__Enum.h>
#include <Modloader/app/structs/DepthOfFieldDeprecated_Dof34QualitySetting__Enum.h>
#include <Modloader/app/structs/DepthOfFieldDeprecated_DofBlurriness__Enum.h>
#include <Modloader/app/structs/DepthOfFieldDeprecated_DofResolution__Enum.h>
#include <Modloader/app/structs/PostEffectsBase__Fields.h>
#if defined(IL2CPP_STRUCT_PostEffectsBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_DepthOfFieldDeprecated_Dof34QualitySetting__Enum_DEFINED) && defined(IL2CPP_STRUCT_DepthOfFieldDeprecated_DofResolution__Enum_DEFINED) && defined(IL2CPP_STRUCT_DepthOfFieldDeprecated_DofBlurriness__Enum_DEFINED) && defined(IL2CPP_STRUCT_DepthOfFieldDeprecated_BokehDestination__Enum_DEFINED)
#define IL2CPP_STRUCT_DepthOfFieldDeprecated__Fields_DEFINED
struct Transform;
struct Shader;
struct Material;
struct Texture2D;
struct Camera;
struct RenderTexture;
struct DepthOfFieldDeprecated__Fields {
    struct PostEffectsBase__Fields _;
    DepthOfFieldDeprecated_Dof34QualitySetting__Enum quality;

    DepthOfFieldDeprecated_DofResolution__Enum resolution;

    bool simpleTweakMode;
    float focalPoint;
    float smoothness;
    float focalZDistance;
    float focalZStartCurve;
    float focalZEndCurve;
    float focalStartCurve;
    float focalEndCurve;
    float focalDistance01;
    struct Transform* objectFocus;
    float focalSize;
    DepthOfFieldDeprecated_DofBlurriness__Enum bluriness;

    float maxBlurSpread;
    float foregroundBlurExtrude;
    struct Shader* dofBlurShader;
    struct Material* dofBlurMaterial;
    struct Shader* dofShader;
    struct Material* dofMaterial;
    bool visualize;
    DepthOfFieldDeprecated_BokehDestination__Enum bokehDestination;

    float widthOverHeight;
    float oneOverBaseSize;
    bool bokeh;
    bool bokehSupport;
    struct Shader* bokehShader;
    struct Texture2D* bokehTexture;
    float bokehScale;
    float bokehIntensity;
    float bokehThresholdContrast;
    float bokehThresholdLuminance;
    int32_t bokehDownsample;
    struct Material* bokehMaterial;
    struct Camera* _camera;
    struct RenderTexture* foregroundTexture;
    struct RenderTexture* mediumRezWorkTexture;
    struct RenderTexture* finalDefocus;
    struct RenderTexture* lowRezWorkTexture;
    struct RenderTexture* bokehSource;
    struct RenderTexture* bokehSource2;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DepthOfFieldDeprecated__Fields_FWDDECL)
#define IL2CPP_STRUCT_DepthOfFieldDeprecated__Fields_FWDDECL
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_DepthOfFieldDeprecated__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DepthOfFieldDeprecated__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DepthOfFieldDeprecated__Fields_FWDDECL)
#include <Modloader/app/structs/DepthOfFieldDeprecated__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DepthOfFieldDeprecated__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

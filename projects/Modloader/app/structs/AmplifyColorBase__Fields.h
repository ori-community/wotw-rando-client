#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AmplifyColorBase__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AmplifyColorBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmplifyColorBase__Fields_DEFINED)
#include <Modloader/app/structs/ColorSpace__Enum.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Quality__Enum.h>
#include <Modloader/app/structs/Tonemapping__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Tonemapping__Enum_DEFINED) && defined(IL2CPP_STRUCT_Quality__Enum_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_ColorSpace__Enum_DEFINED)
#define IL2CPP_STRUCT_AmplifyColorBase__Fields_DEFINED
struct Texture;
struct AnimationCurve;
struct Transform;
struct Camera;
struct Shader;
struct RenderTexture;
struct Texture2D;
struct Color32__Array;
struct Material;
struct Action;
struct AmplifyColorVolumeBase;
struct VolumeEffect;
struct List_1_AmplifyColorVolumeBase_;
struct AmplifyColorTriggerProxyBase;
struct VolumeEffectFlags;
struct String;
struct AmplifyColorBase__Fields {
    struct MonoBehaviour__Fields _;
    Tonemapping__Enum Tonemapper;

    float Exposure;
    float LinearWhitePoint;
    bool ApplyDithering;
    Quality__Enum QualityLevel;

    float BlendAmount;
    struct Texture* LutTexture;
    struct Texture* LutBlendTexture;
    struct Texture* MaskTexture;
    bool UseDepthMask;
    struct AnimationCurve* DepthMaskCurve;
    bool UseVolumes;
    float ExitVolumeBlendTime;
    struct Transform* TriggerVolumeProxy;
    struct LayerMask VolumeCollisionMask;
    struct Camera* ownerCamera;
    struct Shader* shaderBase;
    struct Shader* shaderBlend;
    struct Shader* shaderBlendCache;
    struct Shader* shaderMask;
    struct Shader* shaderMaskBlend;
    struct Shader* shaderDepthMask;
    struct Shader* shaderDepthMaskBlend;
    struct Shader* shaderProcessOnly;
    struct RenderTexture* blendCacheLut;
    struct Texture2D* defaultLut;
    struct Texture2D* depthCurveLut;
    struct Color32__Array* depthCurveColors;
    ColorSpace__Enum colorSpace;

    Quality__Enum qualityLevel;

    struct Material* materialBase;
    struct Material* materialBlend;
    struct Material* materialBlendCache;
    struct Material* materialMask;
    struct Material* materialMaskBlend;
    struct Material* materialDepthMask;
    struct Material* materialDepthMaskBlend;
    struct Material* materialProcessOnly;
    bool blending;
    float blendingTime;
    float blendingTimeCountdown;
    struct Action* onFinishBlend;
    struct AnimationCurve* prevDepthMaskCurve;
    bool volumesBlending;
    float volumesBlendingTime;
    float volumesBlendingTimeCountdown;
    struct Texture* volumesLutBlendTexture;
    float volumesBlendAmount;
    struct Texture* worldLUT;
    struct AmplifyColorVolumeBase* currentVolumeLut;
    struct RenderTexture* midBlendLUT;
    bool blendingFromMidBlend;
    struct VolumeEffect* worldVolumeEffects;
    struct VolumeEffect* currentVolumeEffects;
    struct VolumeEffect* blendVolumeEffects;
    float worldExposure;
    float currentExposure;
    float blendExposure;
    float effectVolumesBlendAdjust;
    struct List_1_AmplifyColorVolumeBase_* enteredVolumes;
    struct AmplifyColorTriggerProxyBase* actualTriggerProxy;
    struct VolumeEffectFlags* EffectFlags;
    struct String* sharedInstanceID;
    bool silentError;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AmplifyColorBase__Fields_FWDDECL)
#define IL2CPP_STRUCT_AmplifyColorBase__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/AmplifyColorTriggerProxyBase.h>
#include <Modloader/app/structs/AmplifyColorVolumeBase.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/Color32__Array.h>
#include <Modloader/app/structs/List_1_AmplifyColorVolumeBase_.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/VolumeEffect.h>
#include <Modloader/app/structs/VolumeEffectFlags.h>
#endif
#undef IL2CPP_STRUCT_AmplifyColorBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmplifyColorBase__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AmplifyColorBase__Fields_FWDDECL)
#include <Modloader/app/structs/AmplifyColorBase__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AmplifyColorBase__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

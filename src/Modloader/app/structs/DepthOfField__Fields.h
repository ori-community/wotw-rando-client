#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DepthOfField__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DepthOfField__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DepthOfField__Fields_DEFINED)
#include <Modloader/app/structs/DepthOfField_BlurSampleCount__Enum.h>
#include <Modloader/app/structs/DepthOfField_BlurType__Enum.h>
#include <Modloader/app/structs/PostEffectsBase__Fields.h>
#if defined(IL2CPP_STRUCT_PostEffectsBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_DepthOfField_BlurType__Enum_DEFINED) && defined(IL2CPP_STRUCT_DepthOfField_BlurSampleCount__Enum_DEFINED)
#define IL2CPP_STRUCT_DepthOfField__Fields_DEFINED
struct Transform;
struct Shader;
struct Material;
struct Texture2D;
struct ComputeBuffer;
struct Camera;
struct DepthOfField__Fields {
    struct PostEffectsBase__Fields _;
    bool visualizeFocus;
    float focalLength;
    float focalSize;
    float aperture;
    struct Transform* focalTransform;
    float maxBlurSize;
    bool highResolution;
    DepthOfField_BlurType__Enum blurType;

    DepthOfField_BlurSampleCount__Enum blurSampleCount;

    bool nearBlur;
    float foregroundOverlap;
    struct Shader* dofHdrShader;
    struct Material* dofHdrMaterial;
    struct Shader* dx11BokehShader;
    struct Material* dx11bokehMaterial;
    float dx11BokehThreshold;
    float dx11SpawnHeuristic;
    struct Texture2D* dx11BokehTexture;
    float dx11BokehScale;
    float dx11BokehIntensity;
    float focalDistance01;
    struct ComputeBuffer* cbDrawArgs;
    struct ComputeBuffer* cbPoints;
    float internalBlurWidth;
    struct Camera* cachedCamera;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DepthOfField__Fields_FWDDECL)
#define IL2CPP_STRUCT_DepthOfField__Fields_FWDDECL
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/ComputeBuffer.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_DepthOfField__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DepthOfField__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DepthOfField__Fields_FWDDECL)
#include <Modloader/app/structs/DepthOfField__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DepthOfField__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

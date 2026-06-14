#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraMotionBlur__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraMotionBlur__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraMotionBlur__Fields_DEFINED)
#include <Modloader/app/structs/CameraMotionBlur_MotionBlurFilter__Enum.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/PostEffectsBase__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_PostEffectsBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_CameraMotionBlur_MotionBlurFilter__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Matrix4x4_DEFINED)
#define IL2CPP_STRUCT_CameraMotionBlur__Fields_DEFINED
struct GameObject;
struct Shader;
struct Material;
struct Texture2D;
struct Camera;
struct CameraMotionBlur__Fields {
    struct PostEffectsBase__Fields _;
    CameraMotionBlur_MotionBlurFilter__Enum filterType;

    bool preview;
    struct Vector3 previewScale;
    float movementScale;
    float rotationScale;
    float maxVelocity;
    float minVelocity;
    float velocityScale;
    float softZDistance;
    int32_t velocityDownsample;
    struct LayerMask excludeLayers;
    struct GameObject* tmpCam;
    struct Shader* shader;
    struct Shader* dx11MotionBlurShader;
    struct Shader* replacementClear;
    struct Material* motionBlurMaterial;
    struct Material* dx11MotionBlurMaterial;
    struct Texture2D* noiseTexture;
    float jitter;
    bool showVelocity;
    float showVelocityScale;
    struct Matrix4x4 currentViewProjMat;
    struct Matrix4x4 prevViewProjMat;
    int32_t prevFrameCount;
    bool wasActive;
    struct Vector3 prevFrameForward;
    struct Vector3 prevFrameUp;
    struct Vector3 prevFramePos;
    struct Camera* _camera;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraMotionBlur__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraMotionBlur__Fields_FWDDECL
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_CameraMotionBlur__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraMotionBlur__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraMotionBlur__Fields_FWDDECL)
#include <Modloader/app/structs/CameraMotionBlur__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraMotionBlur__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraProperties_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraProperties_DEFINED)
#include <Modloader/app/structs/CameraProperties_cameraCullPlanes_FixedBuffer2.h>
#include <Modloader/app/structs/CameraProperties_layerCullDistances_FixedBuffer3.h>
#include <Modloader/app/structs/CameraProperties_shadowCullPlanes_FixedBuffer1.h>
#include <Modloader/app/structs/CoreCameraValues.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Matrix4x4_DEFINED) && defined(IL2CPP_STRUCT_CameraProperties_shadowCullPlanes_FixedBuffer1_DEFINED) && defined(IL2CPP_STRUCT_CameraProperties_cameraCullPlanes_FixedBuffer2_DEFINED) && defined(IL2CPP_STRUCT_CameraProperties_layerCullDistances_FixedBuffer3_DEFINED) && defined(IL2CPP_STRUCT_CoreCameraValues_DEFINED)
#define IL2CPP_STRUCT_CameraProperties_DEFINED
struct CameraProperties {
    struct Rect screenRect;
    struct Vector3 viewDir;
    float projectionNear;
    float projectionFar;
    float cameraNear;
    float cameraFar;
    float cameraAspect;
    struct Matrix4x4 cameraToWorld;
    struct Matrix4x4 actualWorldToClip;
    struct Matrix4x4 cameraClipToWorld;
    struct Matrix4x4 cameraWorldToClip;
    struct Matrix4x4 implicitProjection;
    struct Matrix4x4 stereoWorldToClipLeft;
    struct Matrix4x4 stereoWorldToClipRight;
    struct Matrix4x4 worldToCamera;
    struct Vector3 up;
    struct Vector3 right;
    struct Vector3 transformDirection;
    struct Vector3 cameraEuler;
    struct Vector3 velocity;
    float farPlaneWorldSpaceLength;
    uint32_t rendererCount;
    struct CameraProperties_shadowCullPlanes_FixedBuffer1 _shadowCullPlanes;
    struct CameraProperties_cameraCullPlanes_FixedBuffer2 _cameraCullPlanes;
    float baseFarDistance;
    struct Vector3 shadowCullCenter;
    struct CameraProperties_layerCullDistances_FixedBuffer3 layerCullDistances;
    int32_t layerCullSpherical;
    struct CoreCameraValues coreCameraValues;
    uint32_t cameraType;
    int32_t projectionIsOblique;
    int32_t isImplicitProjectionMatrix;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraProperties_FWDDECL)
#define IL2CPP_STRUCT_CameraProperties_FWDDECL
#endif
#undef IL2CPP_STRUCT_CameraProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraProperties_DEFINED) && !defined(IL2CPP_STRUCT_CameraProperties_FWDDECL)
#include <Modloader/app/structs/CameraProperties.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraProperties.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

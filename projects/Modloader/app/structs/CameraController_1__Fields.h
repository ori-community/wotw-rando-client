#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraController_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraController_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraController_1__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED)
#define IL2CPP_STRUCT_CameraController_1__Fields_DEFINED
struct Camera;
struct CameraPostProcessing;
struct CameraPuppetController;
struct CameraShakeLogic;
struct Transform;
struct Camera__Array;
struct Plane__Array;
struct Action_2_UnityEngine_Plane_UnityEngine_Matrix4x4_;
struct Material;
struct CameraController_1__Fields {
    struct MonoBehaviour__Fields _;
    struct Camera* Camera;
    struct CameraPostProcessing* CameraPostProcessing;
    struct CameraPuppetController* PuppetController;
    struct CameraShakeLogic* CameraShake;
    struct Transform* m_childTransform;
    struct Transform* m_cameraTransform;
    struct Vector3 Speed;
    struct Vector3 m_lastSpeed;
    bool m_firstFixed;
    struct Camera__Array* m_allCameras;
    bool m_forcePlaneUpdate;
    bool m_frustumLocked;
    float m_frustumLockZ;
    struct Bounds m_frustumLockBounds;
    struct Plane__Array* m_frustrumPlanes;
    int32_t m_lastFrustumUpdate;
    float FieldOfView;
    struct Action_2_UnityEngine_Plane_UnityEngine_Matrix4x4_* m_updateFunc;
    struct Vector3 m_lastPosition;
    struct Material* m_debugMaterial;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraController_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraController_1__Fields_FWDDECL
#include <Modloader/app/structs/Action_2_UnityEngine_Plane_UnityEngine_Matrix4x4_.h>
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/CameraPostProcessing.h>
#include <Modloader/app/structs/CameraPuppetController.h>
#include <Modloader/app/structs/CameraShakeLogic.h>
#include <Modloader/app/structs/Camera__Array.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Plane__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_CameraController_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraController_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraController_1__Fields_FWDDECL)
#include <Modloader/app/structs/CameraController_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraController_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

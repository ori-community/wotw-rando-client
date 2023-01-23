#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraController__Fields_DEFINED)
#include <Modloader/app/structs/CameraController_UpdateMode__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_CameraController_UpdateMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_CameraController__Fields_DEFINED
struct Transform;
struct Camera;
struct CameraController__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* target;
    struct Transform* rotationSpace;
    CameraController_UpdateMode__Enum updateMode;

    bool lockCursor;
    bool smoothFollow;
    float followSpeed;
    float distance;
    float minDistance;
    float maxDistance;
    float zoomSpeed;
    float zoomSensitivity;
    float rotationSensitivity;
    float yMinLimit;
    float yMaxLimit;
    struct Vector3 offset;
    bool rotateAlways;
    bool rotateOnLeftButton;
    bool rotateOnRightButton;
    bool rotateOnMiddleButton;
    float _x_k__BackingField;
    float _y_k__BackingField;
    float _distanceTarget_k__BackingField;
    struct Vector3 targetDistance;
    struct Vector3 position;
    struct Quaternion rotation;
    struct Vector3 smoothPosition;
    struct Camera* cam;
    struct Quaternion r;
    struct Vector3 lastUp;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraController__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraController__Fields_FWDDECL
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_CameraController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraController__Fields_FWDDECL)
#include <Modloader/app/structs/CameraController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

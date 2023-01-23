#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleLocomotion__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleLocomotion__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SimpleLocomotion_RotationMode__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SimpleLocomotion_RotationMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SimpleLocomotion__Fields_DEFINED
struct CameraController;
struct Animator;
struct CharacterController;
struct SimpleLocomotion__Fields {
    struct MonoBehaviour__Fields _;
    struct CameraController* cameraController;
    float accelerationTime;
    float turnTime;
    bool walkByDefault;
    SimpleLocomotion_RotationMode__Enum rotationMode;

    float moveSpeed;
    bool _isGrounded_k__BackingField;
    struct Animator* animator;
    float speed;
    float angleVel;
    float speedVel;
    struct Vector3 linearTargetDirection;
    struct CharacterController* characterController;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleLocomotion__Fields_FWDDECL)
#define IL2CPP_STRUCT_SimpleLocomotion__Fields_FWDDECL
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/CameraController.h>
#include <Modloader/app/structs/CharacterController.h>
#endif
#undef IL2CPP_STRUCT_SimpleLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleLocomotion__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SimpleLocomotion__Fields_FWDDECL)
#include <Modloader/app/structs/SimpleLocomotion__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleLocomotion__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

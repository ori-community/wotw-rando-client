#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleFPSController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleFPSController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleFPSController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SimpleFPSController__Fields_DEFINED
struct Camera;
struct Rigidbody;
struct SimpleFPSController__Fields {
    struct MonoBehaviour__Fields _;
    float lookSpeed;
    float moveSpeed;
    float moveForce;
    float jumpForce;
    float dampening;
    struct Vector3 bottom;
    struct Camera* head;
    struct Rigidbody* body;
    float lookPitch;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleFPSController__Fields_FWDDECL)
#define IL2CPP_STRUCT_SimpleFPSController__Fields_FWDDECL
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/Rigidbody.h>
#endif
#undef IL2CPP_STRUCT_SimpleFPSController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleFPSController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SimpleFPSController__Fields_FWDDECL)
#include <Modloader/app/structs/SimpleFPSController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleFPSController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

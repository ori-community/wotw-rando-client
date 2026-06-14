#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlatformRotator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlatformRotator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformRotator__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_PlatformRotator__Fields_DEFINED
struct Rigidbody;
struct PlatformRotator__Fields {
    struct MonoBehaviour__Fields _;
    float maxAngle;
    float switchRotationTime;
    float random;
    float rotationSpeed;
    struct Vector3 movePosition;
    float moveSpeed;
    int32_t characterLayer;
    struct Quaternion defaultRotation;
    struct Quaternion targetRotation;
    struct Vector3 targetPosition;
    struct Vector3 velocity;
    struct Rigidbody* r;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlatformRotator__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlatformRotator__Fields_FWDDECL
#include <Modloader/app/structs/Rigidbody.h>
#endif
#undef IL2CPP_STRUCT_PlatformRotator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformRotator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlatformRotator__Fields_FWDDECL)
#include <Modloader/app/structs/PlatformRotator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlatformRotator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

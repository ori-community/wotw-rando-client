#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraBasedColliderChain__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraBasedColliderChain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraBasedColliderChain__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Shift__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Shift__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_CameraBasedColliderChain__Fields_DEFINED
struct Transform__Array;
struct Vector3__Array;
struct CameraBasedColliderChain__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform__Array* centerPoints;
    struct Transform__Array* colliders;
    struct Vector3__Array* positions;
    float colliderThickness;
    float colliderDepth;
    Shift__Enum direction;

    struct Vector3 colliderShiftVector;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraBasedColliderChain__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraBasedColliderChain__Fields_FWDDECL
#include <Modloader/app/structs/Transform__Array.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_CameraBasedColliderChain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraBasedColliderChain__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraBasedColliderChain__Fields_FWDDECL)
#include <Modloader/app/structs/CameraBasedColliderChain__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraBasedColliderChain__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

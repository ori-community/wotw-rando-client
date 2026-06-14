#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonControllerColliderHit_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonControllerColliderHit_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonControllerColliderHit_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_MoonControllerColliderHit_DEFINED
struct Collider;
struct MoonCharacterController;
struct MoonControllerColliderHit {
    struct Collider* Collider;
    struct MoonCharacterController* Controller;
    struct Vector3 MoveDirection;
    float MoveLength;
    struct Vector3 Normal;
    struct Vector3 Point;
    float Distance;
    float ContinueMoveLength;
    struct Vector3 ContinueMoveDirection;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonControllerColliderHit_FWDDECL)
#define IL2CPP_STRUCT_MoonControllerColliderHit_FWDDECL
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/MoonCharacterController.h>
#endif
#undef IL2CPP_STRUCT_MoonControllerColliderHit_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonControllerColliderHit_DEFINED) && !defined(IL2CPP_STRUCT_MoonControllerColliderHit_FWDDECL)
#include <Modloader/app/structs/MoonControllerColliderHit.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonControllerColliderHit.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

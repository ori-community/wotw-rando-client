#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControllerColliderHit__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControllerColliderHit__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerColliderHit__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_ControllerColliderHit__Fields_DEFINED
struct CharacterController;
struct Collider;
struct __declspec(align(8)) ControllerColliderHit__Fields {
    struct CharacterController* m_Controller;
    struct Collider* m_Collider;
    struct Vector3 m_Point;
    struct Vector3 m_Normal;
    struct Vector3 m_MoveDirection;
    float m_MoveLength;
    int32_t m_Push;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ControllerColliderHit__Fields_FWDDECL)
#define IL2CPP_STRUCT_ControllerColliderHit__Fields_FWDDECL
#include <Modloader/app/structs/CharacterController.h>
#include <Modloader/app/structs/Collider.h>
#endif
#undef IL2CPP_STRUCT_ControllerColliderHit__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerColliderHit__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ControllerColliderHit__Fields_FWDDECL)
#include <Modloader/app/structs/ControllerColliderHit__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControllerColliderHit__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

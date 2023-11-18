#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VRCharacterController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VRCharacterController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VRCharacterController__Fields_DEFINED)
#include <Modloader/app/structs/KeyCode__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_KeyCode__Enum_DEFINED)
#define IL2CPP_STRUCT_VRCharacterController__Fields_DEFINED
struct Transform;
struct CharacterController;
struct VRCharacterController__Fields {
    struct MonoBehaviour__Fields _;
    float moveSpeed;
    float rotationSpeed;
    float rotationRatchet;
    KeyCode__Enum ratchetRight;

    KeyCode__Enum ratchetLeft;

    struct Transform* forwardDirection;
    struct CharacterController* characterController;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VRCharacterController__Fields_FWDDECL)
#define IL2CPP_STRUCT_VRCharacterController__Fields_FWDDECL
#include <Modloader/app/structs/CharacterController.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_VRCharacterController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VRCharacterController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VRCharacterController__Fields_FWDDECL)
#include <Modloader/app/structs/VRCharacterController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VRCharacterController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

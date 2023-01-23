#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterController3rdPerson__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterController3rdPerson__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterController3rdPerson__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterController3rdPerson__Fields_DEFINED
struct CameraController;
struct AnimatorController3rdPerson;
struct CharacterController3rdPerson__Fields {
    struct MonoBehaviour__Fields _;
    struct CameraController* cam;
    struct AnimatorController3rdPerson* animatorController;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterController3rdPerson__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterController3rdPerson__Fields_FWDDECL
#include <Modloader/app/structs/AnimatorController3rdPerson.h>
#include <Modloader/app/structs/CameraController.h>
#endif
#undef IL2CPP_STRUCT_CharacterController3rdPerson__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterController3rdPerson__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterController3rdPerson__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterController3rdPerson__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterController3rdPerson__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

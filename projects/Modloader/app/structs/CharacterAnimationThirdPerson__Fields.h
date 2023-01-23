#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterAnimationThirdPerson__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterAnimationThirdPerson__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterAnimationThirdPerson__Fields_DEFINED)
#include <Modloader/app/structs/CharacterAnimationBase__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_CharacterAnimationBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_CharacterAnimationThirdPerson__Fields_DEFINED
struct CharacterThirdPerson;
struct Animator;
struct CharacterAnimationThirdPerson__Fields {
    struct CharacterAnimationBase__Fields _;
    struct CharacterThirdPerson* characterController;
    float turnSensitivity;
    float turnSpeed;
    float runCycleLegOffset;
    float animSpeedMultiplier;
    struct Animator* animator;
    struct Vector3 lastForward;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterAnimationThirdPerson__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterAnimationThirdPerson__Fields_FWDDECL
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/CharacterThirdPerson.h>
#endif
#undef IL2CPP_STRUCT_CharacterAnimationThirdPerson__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterAnimationThirdPerson__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterAnimationThirdPerson__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterAnimationThirdPerson__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterAnimationThirdPerson__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

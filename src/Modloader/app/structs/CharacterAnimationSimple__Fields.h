#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterAnimationSimple__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterAnimationSimple__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterAnimationSimple__Fields_DEFINED)
#include <Modloader/app/structs/CharacterAnimationBase__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterAnimationBase__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterAnimationSimple__Fields_DEFINED
struct CharacterThirdPerson;
struct AnimationCurve;
struct Animator;
struct CharacterAnimationSimple__Fields {
    struct CharacterAnimationBase__Fields _;
    struct CharacterThirdPerson* characterController;
    float pivotOffset;
    struct AnimationCurve* moveSpeed;
    struct Animator* animator;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterAnimationSimple__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterAnimationSimple__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/CharacterThirdPerson.h>
#endif
#undef IL2CPP_STRUCT_CharacterAnimationSimple__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterAnimationSimple__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterAnimationSimple__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterAnimationSimple__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterAnimationSimple__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

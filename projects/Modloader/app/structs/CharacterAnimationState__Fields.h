#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterAnimationState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterAnimationState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterAnimationState__Fields_DEFINED)
#include <Modloader/app/structs/CharacterAnimationStateBase__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterAnimationStateBase__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterAnimationState__Fields_DEFINED
struct TextureAnimationWithTransitions;
struct CharacterAnimationState__Fields {
    struct CharacterAnimationStateBase__Fields _;
    struct TextureAnimationWithTransitions* Animation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterAnimationState__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterAnimationState__Fields_FWDDECL
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#endif
#undef IL2CPP_STRUCT_CharacterAnimationState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterAnimationState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterAnimationState__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterAnimationState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterAnimationState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

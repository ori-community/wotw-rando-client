#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationCharacterProvider__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationCharacterProvider__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationCharacterProvider__StaticFields_DEFINED)
#define IL2CPP_STRUCT_AnimationCharacterProvider__StaticFields_DEFINED
struct GameObject;
struct MoonAnimator;
struct AnimationCharacterProvider__StaticFields {
    struct GameObject* s_oriCharacter;
    struct MoonAnimator* s_oriAnimator;
    struct GameObject* s_kuCharacter;
    struct MoonAnimator* s_kuAnimator;
};
#endif
#if !defined(IL2CPP_STRUCT_AnimationCharacterProvider__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_AnimationCharacterProvider__StaticFields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimator.h>
#endif
#undef IL2CPP_STRUCT_AnimationCharacterProvider__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationCharacterProvider__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_AnimationCharacterProvider__StaticFields_FWDDECL)
#include <Modloader/app/structs/AnimationCharacterProvider__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationCharacterProvider__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextureAnimationWithTransitions__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextureAnimationWithTransitions__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureAnimationWithTransitions__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_TextureAnimationWithTransitions__Fields_DEFINED
struct TextureAnimation;
struct List_1_TextureAnimationWithTransitions_TextureAnimationPair_;
struct TextureAnimationWithTransitions;
struct TextureAnimationWithTransitions__Fields {
    struct ScriptableObject__Fields _;
    struct TextureAnimation* Animation;
    struct List_1_TextureAnimationWithTransitions_TextureAnimationPair_* Transitions;
    struct TextureAnimationWithTransitions* Parent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextureAnimationWithTransitions__Fields_FWDDECL)
#define IL2CPP_STRUCT_TextureAnimationWithTransitions__Fields_FWDDECL
#include <Modloader/app/structs/List_1_TextureAnimationWithTransitions_TextureAnimationPair_.h>
#include <Modloader/app/structs/TextureAnimation.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#endif
#undef IL2CPP_STRUCT_TextureAnimationWithTransitions__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureAnimationWithTransitions__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TextureAnimationWithTransitions__Fields_FWDDECL)
#include <Modloader/app/structs/TextureAnimationWithTransitions__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextureAnimationWithTransitions__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

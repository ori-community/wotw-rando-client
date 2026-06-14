#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextureAnimationWithTransitions_TextureAnimationPair__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextureAnimationWithTransitions_TextureAnimationPair__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureAnimationWithTransitions_TextureAnimationPair__Fields_DEFINED)
#define IL2CPP_STRUCT_TextureAnimationWithTransitions_TextureAnimationPair__Fields_DEFINED
struct TextureAnimation;
struct TextureAnimationWithTransitions;
struct __declspec(align(8)) TextureAnimationWithTransitions_TextureAnimationPair__Fields {
    struct TextureAnimation* TransitionAnimation;
    struct TextureAnimationWithTransitions* From;
    struct TextureAnimation* FromAnimation;
    bool Flip;
    int32_t CrossoverFrame;
    int32_t MinFrame;
    int32_t MaxFrame;
    int32_t TransitionStart;
    int32_t TransitionEnd;
};
#endif
#if !defined(IL2CPP_STRUCT_TextureAnimationWithTransitions_TextureAnimationPair__Fields_FWDDECL)
#define IL2CPP_STRUCT_TextureAnimationWithTransitions_TextureAnimationPair__Fields_FWDDECL
#include <Modloader/app/structs/TextureAnimation.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#endif
#undef IL2CPP_STRUCT_TextureAnimationWithTransitions_TextureAnimationPair__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureAnimationWithTransitions_TextureAnimationPair__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TextureAnimationWithTransitions_TextureAnimationPair__Fields_FWDDECL)
#include <Modloader/app/structs/TextureAnimationWithTransitions_TextureAnimationPair__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextureAnimationWithTransitions_TextureAnimationPair__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

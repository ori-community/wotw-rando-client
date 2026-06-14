#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetSpriteAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetSpriteAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetSpriteAnimator__Fields_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_SetSpriteAnimator__Fields_DEFINED
struct TextureAnimation;
struct SpriteAnimator;
struct SetSpriteAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct TextureAnimation* m_originalAnimation;
    struct SpriteAnimator* Target;
    struct TextureAnimation* TargetAnimation;
    bool SampleAnimation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetSpriteAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_SetSpriteAnimator__Fields_FWDDECL
#include <Modloader/app/structs/SpriteAnimator.h>
#include <Modloader/app/structs/TextureAnimation.h>
#endif
#undef IL2CPP_STRUCT_SetSpriteAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetSpriteAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SetSpriteAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/SetSpriteAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetSpriteAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextureAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextureAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_TextureAnimator__Fields_DEFINED
struct Action;
struct TextureAnimation;
struct __declspec(align(8)) TextureAnimator__Fields {
    float _SpeedMultiplier_k__BackingField;
    struct Action* OnAnimationStart;
    int32_t m_currentLoop;
    struct TextureAnimation* m_animation;
    float m_time;
};
#endif
#if !defined(IL2CPP_STRUCT_TextureAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_TextureAnimator__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/TextureAnimation.h>
#endif
#undef IL2CPP_STRUCT_TextureAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TextureAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/TextureAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextureAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

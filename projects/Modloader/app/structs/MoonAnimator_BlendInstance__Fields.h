#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimator_BlendInstance__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimator_BlendInstance__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_BlendInstance__Fields_DEFINED)
#include <Modloader/app/structs/AnimationMixerPlayable.h>
#include <Modloader/app/structs/MoonAnimator_AnimationInstance__Fields.h>
#if defined(IL2CPP_STRUCT_MoonAnimator_AnimationInstance__Fields_DEFINED) && defined(IL2CPP_STRUCT_AnimationMixerPlayable_DEFINED)
#define IL2CPP_STRUCT_MoonAnimator_BlendInstance__Fields_DEFINED
struct BlendAnimation;
struct MoonAnimator_AnimationInstance__Array;
struct BlendAnimation_Input__Array;
struct MoonAnimator_BlendInstance__Fields {
    struct MoonAnimator_AnimationInstance__Fields _;
    struct BlendAnimation* m_blendAnimation;
    struct AnimationMixerPlayable m_mixerPlayable;
    struct MoonAnimator_AnimationInstance__Array* m_inputInstances;
    float m_currentBlendWeight;
    int32_t m_currentBlendNodeIndex;
    struct BlendAnimation_Input__Array* m_validInputs;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimator_BlendInstance__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimator_BlendInstance__Fields_FWDDECL
#include <Modloader/app/structs/BlendAnimation.h>
#include <Modloader/app/structs/BlendAnimation_Input__Array.h>
#include <Modloader/app/structs/MoonAnimator_AnimationInstance__Array.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimator_BlendInstance__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_BlendInstance__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimator_BlendInstance__Fields_FWDDECL)
#include <Modloader/app/structs/MoonAnimator_BlendInstance__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimator_BlendInstance__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimator_DirectBlendInstance__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimator_DirectBlendInstance__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_DirectBlendInstance__Fields_DEFINED)
#include <Modloader/app/structs/AnimationLayerMixerPlayable.h>
#include <Modloader/app/structs/MoonAnimator_AnimationInstance__Fields.h>
#if defined(IL2CPP_STRUCT_MoonAnimator_AnimationInstance__Fields_DEFINED) && defined(IL2CPP_STRUCT_AnimationLayerMixerPlayable_DEFINED)
#define IL2CPP_STRUCT_MoonAnimator_DirectBlendInstance__Fields_DEFINED
struct DirectBlendAnimation;
struct MoonAnimator_AnimationInstance__Array;
struct MoonAnimator_DirectBlendInstance__Fields {
    struct MoonAnimator_AnimationInstance__Fields _;
    struct DirectBlendAnimation* m_blendAnimation;
    struct AnimationLayerMixerPlayable m_mixerPlayable;
    struct MoonAnimator_AnimationInstance__Array* m_inputInstances;
    int32_t m_validInputCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimator_DirectBlendInstance__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimator_DirectBlendInstance__Fields_FWDDECL
#include <Modloader/app/structs/DirectBlendAnimation.h>
#include <Modloader/app/structs/MoonAnimator_AnimationInstance__Array.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimator_DirectBlendInstance__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_DirectBlendInstance__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimator_DirectBlendInstance__Fields_FWDDECL)
#include <Modloader/app/structs/MoonAnimator_DirectBlendInstance__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimator_DirectBlendInstance__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimator_LayeredInstance__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimator_LayeredInstance__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_LayeredInstance__Fields_DEFINED)
#include <Modloader/app/structs/AnimationLayerMixerPlayable.h>
#include <Modloader/app/structs/MoonAnimator_AnimationInstance__Fields.h>
#if defined(IL2CPP_STRUCT_MoonAnimator_AnimationInstance__Fields_DEFINED) && defined(IL2CPP_STRUCT_AnimationLayerMixerPlayable_DEFINED)
#define IL2CPP_STRUCT_MoonAnimator_LayeredInstance__Fields_DEFINED
struct LayeredAnimation;
struct MoonAnimator_AnimationInstance__Array;
struct LayeredAnimation_Input__Array;
struct MoonAnimator_LayeredInstance__Fields {
    struct MoonAnimator_AnimationInstance__Fields _;
    struct LayeredAnimation* m_layeredAnimation;
    struct AnimationLayerMixerPlayable m_layerMixerPlayable;
    struct MoonAnimator_AnimationInstance__Array* m_inputInstances;
    struct LayeredAnimation_Input__Array* m_validInputs;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimator_LayeredInstance__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimator_LayeredInstance__Fields_FWDDECL
#include <Modloader/app/structs/LayeredAnimation.h>
#include <Modloader/app/structs/LayeredAnimation_Input__Array.h>
#include <Modloader/app/structs/MoonAnimator_AnimationInstance__Array.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimator_LayeredInstance__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_LayeredInstance__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimator_LayeredInstance__Fields_FWDDECL)
#include <Modloader/app/structs/MoonAnimator_LayeredInstance__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimator_LayeredInstance__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

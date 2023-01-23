#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimator_SimpleCrossfadeInstance__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimator_SimpleCrossfadeInstance__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_SimpleCrossfadeInstance__Fields_DEFINED)
#include <Modloader/app/structs/AnimationMixerPlayable.h>
#include <Modloader/app/structs/MoonAnimator_AnimationInstance__Fields.h>
#if defined(IL2CPP_STRUCT_MoonAnimator_AnimationInstance__Fields_DEFINED) && defined(IL2CPP_STRUCT_AnimationMixerPlayable_DEFINED)
#define IL2CPP_STRUCT_MoonAnimator_SimpleCrossfadeInstance__Fields_DEFINED
struct MoonAnimator_AnimationInstance;
struct MoonAnimator_SimpleCrossfadeInstance__Fields {
    struct MoonAnimator_AnimationInstance__Fields _;
    struct AnimationMixerPlayable m_mixerPlayable;
    struct MoonAnimator_AnimationInstance* m_source;
    struct MoonAnimator_AnimationInstance* m_target;
    float m_currentTime;
    float m_crossfadeDuration;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimator_SimpleCrossfadeInstance__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimator_SimpleCrossfadeInstance__Fields_FWDDECL
#include <Modloader/app/structs/MoonAnimator_AnimationInstance.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimator_SimpleCrossfadeInstance__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_SimpleCrossfadeInstance__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimator_SimpleCrossfadeInstance__Fields_FWDDECL)
#include <Modloader/app/structs/MoonAnimator_SimpleCrossfadeInstance__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimator_SimpleCrossfadeInstance__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

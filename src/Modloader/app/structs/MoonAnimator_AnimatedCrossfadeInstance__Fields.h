#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimator_AnimatedCrossfadeInstance__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimator_AnimatedCrossfadeInstance__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_AnimatedCrossfadeInstance__Fields_DEFINED)
#include <Modloader/app/structs/MoonAnimator_AnimatedCrossfadeInstance_State__Enum.h>
#include <Modloader/app/structs/MoonAnimator_AnimationInstance__Fields.h>
#include <Modloader/app/structs/Playable.h>
#if defined(IL2CPP_STRUCT_MoonAnimator_AnimationInstance__Fields_DEFINED) && defined(IL2CPP_STRUCT_Playable_DEFINED) && defined(IL2CPP_STRUCT_MoonAnimator_AnimatedCrossfadeInstance_State__Enum_DEFINED)
#define IL2CPP_STRUCT_MoonAnimator_AnimatedCrossfadeInstance__Fields_DEFINED
struct MoonAnimator_AnimationInstance;
struct MoonAnimator_AnimatedCrossfadeInstance__Fields {
    struct MoonAnimator_AnimationInstance__Fields _;
    struct Playable m_mixerPlayable;
    struct MoonAnimator_AnimationInstance* m_source;
    struct MoonAnimator_AnimationInstance* m_target;
    struct MoonAnimator_AnimationInstance* m_transition;
    MoonAnimator_AnimatedCrossfadeInstance_State__Enum m_currentState;

    float m_currentStateTime;
    float m_sourceAnimationTransitionTime;
    float m_durationIn;
    float m_durationOut;
    float m_targetNormalizedTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimator_AnimatedCrossfadeInstance__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimator_AnimatedCrossfadeInstance__Fields_FWDDECL
#include <Modloader/app/structs/MoonAnimator_AnimationInstance.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimator_AnimatedCrossfadeInstance__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_AnimatedCrossfadeInstance__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimator_AnimatedCrossfadeInstance__Fields_FWDDECL)
#include <Modloader/app/structs/MoonAnimator_AnimatedCrossfadeInstance__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimator_AnimatedCrossfadeInstance__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

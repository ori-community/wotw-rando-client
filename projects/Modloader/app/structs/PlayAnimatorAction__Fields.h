#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayAnimatorAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayAnimatorAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayAnimatorAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionWithDuration__Fields.h>
#if defined(IL2CPP_STRUCT_ActionWithDuration__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayAnimatorAction__Fields_DEFINED
struct GameObject;
struct LegacyAnimator__Array;
struct PlayAnimatorAction__Fields {
    struct ActionWithDuration__Fields _;
    struct GameObject* Target;
    bool PlayReverse;
    bool Continue;
    bool Reverse;
    bool ContinueForward;
    bool ContinueBackward;
    bool PauseAnimatorsOnStart;
    bool ReverseIfAnimating;
    bool UseAnimatorsDuration;
    bool StopAtTimeout;
    struct LegacyAnimator__Array* m_animators;
    bool m_isPerformingAction;
    float AnimationDuration;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayAnimatorAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayAnimatorAction__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyAnimator__Array.h>
#endif
#undef IL2CPP_STRUCT_PlayAnimatorAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayAnimatorAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayAnimatorAction__Fields_FWDDECL)
#include <Modloader/app/structs/PlayAnimatorAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayAnimatorAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

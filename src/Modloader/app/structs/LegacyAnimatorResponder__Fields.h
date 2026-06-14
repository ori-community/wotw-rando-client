#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyAnimatorResponder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyAnimatorResponder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyAnimatorResponder__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyAnimatorResponder__Fields_DEFINED
struct LegacyAnimator;
struct ActionMethod;
struct LegacyAnimatorResponder__Fields {
    struct MonoBehaviour__Fields _;
    struct LegacyAnimator* Animator;
    struct ActionMethod* ContinueAction;
    struct ActionMethod* ContinueReverseAction;
    struct ActionMethod* StopAction;
    struct ActionMethod* StopReverseAction;
    struct ActionMethod* OnReachTimeAction;
    float ActionTime;
    bool m_timeActionDone;
    struct ActionMethod* OnReachTimeReverseAction;
    float ActionReverseTime;
    bool m_reverseTimeActionDone;
    bool m_wasStopped;
    bool m_wasReversed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyAnimatorResponder__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyAnimatorResponder__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/LegacyAnimator.h>
#endif
#undef IL2CPP_STRUCT_LegacyAnimatorResponder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyAnimatorResponder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyAnimatorResponder__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyAnimatorResponder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyAnimatorResponder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

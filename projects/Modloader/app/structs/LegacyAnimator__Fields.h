#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyAnimator__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_LegacyAnimator__Fields_DEFINED
struct AnimationCurve;
struct Action;
struct LegacyAnimator__Fields {
    struct MonoBehaviour__Fields _;
    bool m_isInScene;
    struct AnimationCurve* AnimationCurve;
    bool PlayAutomatically;
    bool SampleFirstFrameOnStart;
    float TimeOffset;
    float CurveMagnitude;
    float Speed;
    float m_startSpeed;
    bool m_stopped;
    bool _Reversed_k__BackingField;
    float _MaxTime_k__BackingField;
    float _MinTime_k__BackingField;
    float _CurrentTime_k__BackingField;
    struct Action* OnAnimationEndEvent;
    bool m_hasStarted;
    bool m_isSuspended;
    SuspendableMask__Enum m_suspensionMask;

    bool m_wasStopped;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyAnimator__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/AnimationCurve.h>
#endif
#undef IL2CPP_STRUCT_LegacyAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

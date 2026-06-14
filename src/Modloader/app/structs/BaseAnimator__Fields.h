#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED)
#include <Modloader/app/structs/Suspendable__Fields.h>
#if defined(IL2CPP_STRUCT_Suspendable__Fields_DEFINED)
#define IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED
struct GameObject;
struct IAnimatorDriver;
struct AnimatorDriver;
struct BaseAnimator;
struct Action;
struct BaseAnimator__Fields {
    struct Suspendable__Fields _;
    struct GameObject* ExternalDriverGameObject;
    struct IAnimatorDriver* m_externalDriver;
    struct AnimatorDriver* m_animatorDriver;
    float m_extendedDuration;
    bool SampleOnStart;
    bool _IsInitialized_k__BackingField;
    bool _IsPlaying_k__BackingField;
    bool m_isInScene;
    bool _SampledByParent_k__BackingField;
    struct BaseAnimator* _ParentAnimator_k__BackingField;
    float _CurrentTime_k__BackingField;
    struct Action* OnStopEvent;
    float timelineSpeed;
    bool m_isRegistered;
    float TimeOffset;
    float AnimatorSpeed;
    bool PlayAtStart;
    bool m_isSuspended;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaseAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_BaseAnimator__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/AnimatorDriver.h>
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IAnimatorDriver.h>
#endif
#undef IL2CPP_STRUCT_BaseAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BaseAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

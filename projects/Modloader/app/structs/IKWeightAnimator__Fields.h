#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKWeightAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKWeightAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKWeightAnimator__Fields_DEFINED)
#include <Modloader/app/structs/EventTriggerAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_EventTriggerAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_IKWeightAnimator__Fields_DEFINED
struct IK;
struct IKWeightAnimator__Fields {
    struct EventTriggerAnimator__Fields _;
    struct IK* Target;
    float TargetWeight;
    float m_weight;
    float m_transitionTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKWeightAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_IKWeightAnimator__Fields_FWDDECL
#include <Modloader/app/structs/IK.h>
#endif
#undef IL2CPP_STRUCT_IKWeightAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKWeightAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IKWeightAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/IKWeightAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKWeightAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

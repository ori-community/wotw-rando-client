#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurningBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurningBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurningBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/LocomotionTurningBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_LocomotionTurningBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_TurningBehaviour__Fields_DEFINED
struct TurningAnimation__Array;
struct TurningBehaviour__Fields {
    struct LocomotionTurningBehaviour__Fields _;
    int32_t _TurningAnimationEntry_k__BackingField;
    struct TurningAnimation__Array* TurningAnimations;
    float m_timeUntilEnd;
    struct ActiveAnimationHandle m_animationState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TurningBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_TurningBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/TurningAnimation__Array.h>
#endif
#undef IL2CPP_STRUCT_TurningBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurningBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TurningBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/TurningBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurningBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

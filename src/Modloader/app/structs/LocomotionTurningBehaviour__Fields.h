#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocomotionTurningBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocomotionTurningBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionTurningBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/BaseLocomotionTurningBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_BaseLocomotionTurningBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LocomotionTurningBehaviour__Fields_DEFINED
struct SplitTurnAnimation__Array;
struct SplitTurnAnimation;
struct LocomotionTurningBehaviour__Fields {
    struct BaseLocomotionTurningBehaviour__Fields _;
    bool GreyboxTurn;
    float GreyboxTurnDuration;
    struct SplitTurnAnimation__Array* MirrorAnimations;
    struct SplitTurnAnimation* m_currentTurnAnimation;
    float m_greyboxTurnProgress;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocomotionTurningBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_LocomotionTurningBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/SplitTurnAnimation.h>
#include <Modloader/app/structs/SplitTurnAnimation__Array.h>
#endif
#undef IL2CPP_STRUCT_LocomotionTurningBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionTurningBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LocomotionTurningBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/LocomotionTurningBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocomotionTurningBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

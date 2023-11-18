#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrabSpinLoopAttackBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrabSpinLoopAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrabSpinLoopAttackBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/CrabClawAttackBehaviourNew__Fields.h>
#include <Modloader/app/structs/CrabSpinLoopAttackBehaviour_State__Enum.h>
#if defined(IL2CPP_STRUCT_CrabClawAttackBehaviourNew__Fields_DEFINED) && defined(IL2CPP_STRUCT_CrabSpinLoopAttackBehaviour_State__Enum_DEFINED)
#define IL2CPP_STRUCT_CrabSpinLoopAttackBehaviour__Fields_DEFINED
struct MoonTimeline;
struct CrabSpinLoopAttackBehaviour__Fields {
    struct CrabClawAttackBehaviourNew__Fields _;
    struct MoonTimeline* StartTimeline;
    struct MoonTimeline* LoopTimeline;
    struct MoonTimeline* EndTimeline;
    struct MoonTimeline* DizzyTimeline;
    float MoveSpeed;
    float SpinTime;
    CrabSpinLoopAttackBehaviour_State__Enum m_state;

    float m_stateTime;
    bool m_hasHitTargetDuringLoop;
    float m_timeInBehaviour;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrabSpinLoopAttackBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_CrabSpinLoopAttackBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_CrabSpinLoopAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrabSpinLoopAttackBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CrabSpinLoopAttackBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/CrabSpinLoopAttackBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrabSpinLoopAttackBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

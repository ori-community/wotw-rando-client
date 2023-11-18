#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DashableSwitchLogic__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DashableSwitchLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashableSwitchLogic__Fields_DEFINED)
#include <Modloader/app/structs/CheckpointFunctionality.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_CheckpointFunctionality_DEFINED)
#define IL2CPP_STRUCT_DashableSwitchLogic__Fields_DEFINED
struct DynamicDataResolver;
struct MoonReference_1_IStateTransitionHolder_;
struct DashableSwitchAnimator;
struct MoonReference_1_IGenericUberState_;
struct DashableSwitchLogic__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver* m_dataResolver;
    struct MoonReference_1_IStateTransitionHolder_* LinkedSetup;
    bool CreateCheckpoint;
    struct CheckpointFunctionality Checkpoint;
    struct DashableSwitchAnimator* Animator;
    struct MoonReference_1_IGenericUberState_* State;
    bool AllowTriggeringMultipleTimes;
    float CooldownTime;
    float m_timeLastTriggered;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DashableSwitchLogic__Fields_FWDDECL)
#define IL2CPP_STRUCT_DashableSwitchLogic__Fields_FWDDECL
#include <Modloader/app/structs/DashableSwitchAnimator.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/MoonReference_1_IGenericUberState_.h>
#include <Modloader/app/structs/MoonReference_1_IStateTransitionHolder_.h>
#endif
#undef IL2CPP_STRUCT_DashableSwitchLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashableSwitchLogic__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DashableSwitchLogic__Fields_FWDDECL)
#include <Modloader/app/structs/DashableSwitchLogic__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DashableSwitchLogic__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

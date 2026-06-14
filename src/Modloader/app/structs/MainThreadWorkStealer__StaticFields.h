#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MainThreadWorkStealer__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MainThreadWorkStealer__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MainThreadWorkStealer__StaticFields_DEFINED)
#include <Modloader/app/structs/MainThreadWorkStealer_TimeBudgetMode__Enum.h>
#include <Modloader/app/structs/MainThreadWorkStealer_WorkStealingMode__Enum.h>
#include <Modloader/app/structs/PlayerLoopSystem.h>
#if defined(IL2CPP_STRUCT_MainThreadWorkStealer_WorkStealingMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_MainThreadWorkStealer_TimeBudgetMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_PlayerLoopSystem_DEFINED)
#define IL2CPP_STRUCT_MainThreadWorkStealer__StaticFields_DEFINED
struct Stopwatch;
struct MainThreadWorkStealer__StaticFields {
    MainThreadWorkStealer_WorkStealingMode__Enum _StealingMode_k__BackingField;

    MainThreadWorkStealer_TimeBudgetMode__Enum _TimeMode_k__BackingField;

    float IterationTime;
    float FixedTimeBudget;
    struct Stopwatch* m_stopwatch;
    bool m_enabled;
    struct PlayerLoopSystem m_beginPresentWaitPLS;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MainThreadWorkStealer__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MainThreadWorkStealer__StaticFields_FWDDECL
#include <Modloader/app/structs/Stopwatch.h>
#endif
#undef IL2CPP_STRUCT_MainThreadWorkStealer__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MainThreadWorkStealer__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MainThreadWorkStealer__StaticFields_FWDDECL)
#include <Modloader/app/structs/MainThreadWorkStealer__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MainThreadWorkStealer__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

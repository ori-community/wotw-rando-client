#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitAction__Fields_DEFINED)
#include <Modloader/app/structs/PerformingAction__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_PerformingAction__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_WaitAction__Fields_DEFINED
struct Condition_1;
struct PerformingAction;
struct IContext;
struct WaitAction__Fields {
    struct PerformingAction__Fields _;
    float Duration;
    bool LastActionFinished;
    struct Condition_1* Condition;
    struct Condition_1* CancelCondition;
    struct PerformingAction* LastAction;
    float m_time;
    float m_remainingTime;
    struct IContext* m_context;
    bool m_isSuspended;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaitAction__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/PerformingAction.h>
#endif
#undef IL2CPP_STRUCT_WaitAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaitAction__Fields_FWDDECL)
#include <Modloader/app/structs/WaitAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

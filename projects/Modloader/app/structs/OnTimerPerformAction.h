#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OnTimerPerformAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OnTimerPerformAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnTimerPerformAction_DEFINED)
#include <Modloader/app/structs/OnTimerPerformAction__Fields.h>
#if defined(IL2CPP_STRUCT_OnTimerPerformAction__Fields_DEFINED)
#define IL2CPP_STRUCT_OnTimerPerformAction_DEFINED
struct OnTimerPerformAction__Class;
struct OnTimerPerformAction {
    struct OnTimerPerformAction__Class* klass;
    MonitorData* monitor;
    struct OnTimerPerformAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OnTimerPerformAction_FWDDECL)
#define IL2CPP_STRUCT_OnTimerPerformAction_FWDDECL
#include <Modloader/app/structs/OnTimerPerformAction__Class.h>
#endif
#undef IL2CPP_STRUCT_OnTimerPerformAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnTimerPerformAction_DEFINED) && !defined(IL2CPP_STRUCT_OnTimerPerformAction_FWDDECL)
#include <Modloader/app/structs/OnTimerPerformAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OnTimerPerformAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

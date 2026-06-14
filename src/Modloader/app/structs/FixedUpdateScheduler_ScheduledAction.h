#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FixedUpdateScheduler_ScheduledAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FixedUpdateScheduler_ScheduledAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedUpdateScheduler_ScheduledAction_DEFINED)
#include <Modloader/app/structs/FixedUpdateScheduler_ScheduledAction__Fields.h>
#if defined(IL2CPP_STRUCT_FixedUpdateScheduler_ScheduledAction__Fields_DEFINED)
#define IL2CPP_STRUCT_FixedUpdateScheduler_ScheduledAction_DEFINED
struct FixedUpdateScheduler_ScheduledAction__Class;
struct FixedUpdateScheduler_ScheduledAction {
    struct FixedUpdateScheduler_ScheduledAction__Class* klass;
    MonitorData* monitor;
    struct FixedUpdateScheduler_ScheduledAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FixedUpdateScheduler_ScheduledAction_FWDDECL)
#define IL2CPP_STRUCT_FixedUpdateScheduler_ScheduledAction_FWDDECL
#include <Modloader/app/structs/FixedUpdateScheduler_ScheduledAction__Class.h>
#endif
#undef IL2CPP_STRUCT_FixedUpdateScheduler_ScheduledAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedUpdateScheduler_ScheduledAction_DEFINED) && !defined(IL2CPP_STRUCT_FixedUpdateScheduler_ScheduledAction_FWDDECL)
#include <Modloader/app/structs/FixedUpdateScheduler_ScheduledAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FixedUpdateScheduler_ScheduledAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FixedUpdateScheduler_ScheduledAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FixedUpdateScheduler_ScheduledAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedUpdateScheduler_ScheduledAction__Fields_DEFINED)
#define IL2CPP_STRUCT_FixedUpdateScheduler_ScheduledAction__Fields_DEFINED
struct Action;
struct ISuspendable;
struct __declspec(align(8)) FixedUpdateScheduler_ScheduledAction__Fields {
    struct Action* Action;
    struct ISuspendable* Suspendable;
    float RemainingTime;
};
#endif
#if !defined(IL2CPP_STRUCT_FixedUpdateScheduler_ScheduledAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_FixedUpdateScheduler_ScheduledAction__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/ISuspendable.h>
#endif
#undef IL2CPP_STRUCT_FixedUpdateScheduler_ScheduledAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedUpdateScheduler_ScheduledAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FixedUpdateScheduler_ScheduledAction__Fields_FWDDECL)
#include <Modloader/app/structs/FixedUpdateScheduler_ScheduledAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FixedUpdateScheduler_ScheduledAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

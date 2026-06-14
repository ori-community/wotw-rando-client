#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetDemoPlaytimeAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetDemoPlaytimeAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetDemoPlaytimeAction_DEFINED)
#include <Modloader/app/structs/SetDemoPlaytimeAction__Fields.h>
#if defined(IL2CPP_STRUCT_SetDemoPlaytimeAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SetDemoPlaytimeAction_DEFINED
struct SetDemoPlaytimeAction__Class;
struct SetDemoPlaytimeAction {
    struct SetDemoPlaytimeAction__Class* klass;
    MonitorData* monitor;
    struct SetDemoPlaytimeAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetDemoPlaytimeAction_FWDDECL)
#define IL2CPP_STRUCT_SetDemoPlaytimeAction_FWDDECL
#include <Modloader/app/structs/SetDemoPlaytimeAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SetDemoPlaytimeAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetDemoPlaytimeAction_DEFINED) && !defined(IL2CPP_STRUCT_SetDemoPlaytimeAction_FWDDECL)
#include <Modloader/app/structs/SetDemoPlaytimeAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetDemoPlaytimeAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

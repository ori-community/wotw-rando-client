#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitAction_DEFINED)
#include <Modloader/app/structs/WaitAction__Fields.h>
#if defined(IL2CPP_STRUCT_WaitAction__Fields_DEFINED)
#define IL2CPP_STRUCT_WaitAction_DEFINED
struct WaitAction__Class;
struct WaitAction {
    struct WaitAction__Class* klass;
    MonitorData* monitor;
    struct WaitAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitAction_FWDDECL)
#define IL2CPP_STRUCT_WaitAction_FWDDECL
#include <Modloader/app/structs/WaitAction__Class.h>
#endif
#undef IL2CPP_STRUCT_WaitAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitAction_DEFINED) && !defined(IL2CPP_STRUCT_WaitAction_FWDDECL)
#include <Modloader/app/structs/WaitAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

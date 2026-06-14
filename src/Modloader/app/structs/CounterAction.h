#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CounterAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CounterAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_CounterAction_DEFINED)
#include <Modloader/app/structs/CounterAction__Fields.h>
#if defined(IL2CPP_STRUCT_CounterAction__Fields_DEFINED)
#define IL2CPP_STRUCT_CounterAction_DEFINED
struct CounterAction__Class;
struct CounterAction {
    struct CounterAction__Class* klass;
    MonitorData* monitor;
    struct CounterAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CounterAction_FWDDECL)
#define IL2CPP_STRUCT_CounterAction_FWDDECL
#include <Modloader/app/structs/CounterAction__Class.h>
#endif
#undef IL2CPP_STRUCT_CounterAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_CounterAction_DEFINED) && !defined(IL2CPP_STRUCT_CounterAction_FWDDECL)
#include <Modloader/app/structs/CounterAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CounterAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

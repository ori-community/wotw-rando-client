#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateMachine_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateMachine_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateMachine_DEFINED)
#include <Modloader/app/structs/StateMachine__Fields.h>
#if defined(IL2CPP_STRUCT_StateMachine__Fields_DEFINED)
#define IL2CPP_STRUCT_StateMachine_DEFINED
struct StateMachine__Class;
struct StateMachine {
    struct StateMachine__Class* klass;
    MonitorData* monitor;
    struct StateMachine__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StateMachine_FWDDECL)
#define IL2CPP_STRUCT_StateMachine_FWDDECL
#include <Modloader/app/structs/StateMachine__Class.h>
#endif
#undef IL2CPP_STRUCT_StateMachine_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateMachine_DEFINED) && !defined(IL2CPP_STRUCT_StateMachine_FWDDECL)
#include <Modloader/app/structs/StateMachine.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateMachine.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

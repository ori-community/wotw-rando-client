#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateMachine_2_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateMachine_2_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateMachine_2_DEFINED)
#include <Modloader/app/structs/StateMachine_2__Fields.h>
#if defined(IL2CPP_STRUCT_StateMachine_2__Fields_DEFINED)
#define IL2CPP_STRUCT_StateMachine_2_DEFINED
struct StateMachine_2__Class;
struct StateMachine_2 {
    struct StateMachine_2__Class* klass;
    MonitorData* monitor;
    struct StateMachine_2__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StateMachine_2_FWDDECL)
#define IL2CPP_STRUCT_StateMachine_2_FWDDECL
#include <Modloader/app/structs/StateMachine_2__Class.h>
#endif
#undef IL2CPP_STRUCT_StateMachine_2_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateMachine_2_DEFINED) && !defined(IL2CPP_STRUCT_StateMachine_2_FWDDECL)
#include <Modloader/app/structs/StateMachine_2.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateMachine_2.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

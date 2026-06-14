#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncStateMachineAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncStateMachineAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncStateMachineAttribute_DEFINED)
#include <Modloader/app/structs/AsyncStateMachineAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_AsyncStateMachineAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_AsyncStateMachineAttribute_DEFINED
struct AsyncStateMachineAttribute__Class;
struct AsyncStateMachineAttribute {
    struct AsyncStateMachineAttribute__Class* klass;
    MonitorData* monitor;
    struct AsyncStateMachineAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AsyncStateMachineAttribute_FWDDECL)
#define IL2CPP_STRUCT_AsyncStateMachineAttribute_FWDDECL
#include <Modloader/app/structs/AsyncStateMachineAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_AsyncStateMachineAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncStateMachineAttribute_DEFINED) && !defined(IL2CPP_STRUCT_AsyncStateMachineAttribute_FWDDECL)
#include <Modloader/app/structs/AsyncStateMachineAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncStateMachineAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

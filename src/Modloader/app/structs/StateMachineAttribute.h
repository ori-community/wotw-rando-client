#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateMachineAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateMachineAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateMachineAttribute_DEFINED)
#include <Modloader/app/structs/StateMachineAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_StateMachineAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_StateMachineAttribute_DEFINED
struct StateMachineAttribute__Class;
struct StateMachineAttribute {
    struct StateMachineAttribute__Class* klass;
    MonitorData* monitor;
    struct StateMachineAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StateMachineAttribute_FWDDECL)
#define IL2CPP_STRUCT_StateMachineAttribute_FWDDECL
#include <Modloader/app/structs/StateMachineAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_StateMachineAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateMachineAttribute_DEFINED) && !defined(IL2CPP_STRUCT_StateMachineAttribute_FWDDECL)
#include <Modloader/app/structs/StateMachineAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateMachineAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

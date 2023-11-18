#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExecutionContextSwitcher__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExecutionContextSwitcher__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecutionContextSwitcher__Boxed_DEFINED)
#include <Modloader/app/structs/ExecutionContextSwitcher.h>
#if defined(IL2CPP_STRUCT_ExecutionContextSwitcher_DEFINED)
#define IL2CPP_STRUCT_ExecutionContextSwitcher__Boxed_DEFINED
struct ExecutionContextSwitcher__Class;
struct ExecutionContextSwitcher__Boxed {
    struct ExecutionContextSwitcher__Class* klass;
    MonitorData* monitor;
    struct ExecutionContextSwitcher fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExecutionContextSwitcher__Boxed_FWDDECL)
#define IL2CPP_STRUCT_ExecutionContextSwitcher__Boxed_FWDDECL
#include <Modloader/app/structs/ExecutionContextSwitcher__Class.h>
#endif
#undef IL2CPP_STRUCT_ExecutionContextSwitcher__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecutionContextSwitcher__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_ExecutionContextSwitcher__Boxed_FWDDECL)
#include <Modloader/app/structs/ExecutionContextSwitcher__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExecutionContextSwitcher__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExecutionContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExecutionContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecutionContext_DEFINED)
#include <Modloader/app/structs/ExecutionContext__Fields.h>
#if defined(IL2CPP_STRUCT_ExecutionContext__Fields_DEFINED)
#define IL2CPP_STRUCT_ExecutionContext_DEFINED
struct ExecutionContext__Class;
struct ExecutionContext {
    struct ExecutionContext__Class* klass;
    MonitorData* monitor;
    struct ExecutionContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExecutionContext_FWDDECL)
#define IL2CPP_STRUCT_ExecutionContext_FWDDECL
#include <Modloader/app/structs/ExecutionContext__Class.h>
#endif
#undef IL2CPP_STRUCT_ExecutionContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecutionContext_DEFINED) && !defined(IL2CPP_STRUCT_ExecutionContext_FWDDECL)
#include <Modloader/app/structs/ExecutionContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExecutionContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

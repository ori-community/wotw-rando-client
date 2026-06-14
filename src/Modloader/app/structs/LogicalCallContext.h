#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LogicalCallContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LogicalCallContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogicalCallContext_DEFINED)
#include <Modloader/app/structs/LogicalCallContext__Fields.h>
#if defined(IL2CPP_STRUCT_LogicalCallContext__Fields_DEFINED)
#define IL2CPP_STRUCT_LogicalCallContext_DEFINED
struct LogicalCallContext__Class;
struct LogicalCallContext {
    struct LogicalCallContext__Class* klass;
    MonitorData* monitor;
    struct LogicalCallContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LogicalCallContext_FWDDECL)
#define IL2CPP_STRUCT_LogicalCallContext_FWDDECL
#include <Modloader/app/structs/LogicalCallContext__Class.h>
#endif
#undef IL2CPP_STRUCT_LogicalCallContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogicalCallContext_DEFINED) && !defined(IL2CPP_STRUCT_LogicalCallContext_FWDDECL)
#include <Modloader/app/structs/LogicalCallContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LogicalCallContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

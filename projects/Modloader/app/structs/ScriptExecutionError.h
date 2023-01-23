#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScriptExecutionError_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScriptExecutionError_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScriptExecutionError_DEFINED)
#include <Modloader/app/structs/ScriptExecutionError__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptExecutionError__Fields_DEFINED)
#define IL2CPP_STRUCT_ScriptExecutionError_DEFINED
struct ScriptExecutionError__Class;
struct ScriptExecutionError {
    struct ScriptExecutionError__Class* klass;
    MonitorData* monitor;
    struct ScriptExecutionError__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScriptExecutionError_FWDDECL)
#define IL2CPP_STRUCT_ScriptExecutionError_FWDDECL
#include <Modloader/app/structs/ScriptExecutionError__Class.h>
#endif
#undef IL2CPP_STRUCT_ScriptExecutionError_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScriptExecutionError_DEFINED) && !defined(IL2CPP_STRUCT_ScriptExecutionError_FWDDECL)
#include <Modloader/app/structs/ScriptExecutionError.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScriptExecutionError.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

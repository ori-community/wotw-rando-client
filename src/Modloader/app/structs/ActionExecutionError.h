#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActionExecutionError_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActionExecutionError_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionExecutionError_DEFINED)
#include <Modloader/app/structs/ActionExecutionError__Fields.h>
#if defined(IL2CPP_STRUCT_ActionExecutionError__Fields_DEFINED)
#define IL2CPP_STRUCT_ActionExecutionError_DEFINED
struct ActionExecutionError__Class;
struct ActionExecutionError {
    struct ActionExecutionError__Class* klass;
    MonitorData* monitor;
    struct ActionExecutionError__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActionExecutionError_FWDDECL)
#define IL2CPP_STRUCT_ActionExecutionError_FWDDECL
#include <Modloader/app/structs/ActionExecutionError__Class.h>
#endif
#undef IL2CPP_STRUCT_ActionExecutionError_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionExecutionError_DEFINED) && !defined(IL2CPP_STRUCT_ActionExecutionError_FWDDECL)
#include <Modloader/app/structs/ActionExecutionError.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActionExecutionError.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

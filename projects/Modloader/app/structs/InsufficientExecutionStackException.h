#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InsufficientExecutionStackException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InsufficientExecutionStackException_INITIALIZING
#if !defined(IL2CPP_STRUCT_InsufficientExecutionStackException_DEFINED)
#include <Modloader/app/structs/InsufficientExecutionStackException__Fields.h>
#if defined(IL2CPP_STRUCT_InsufficientExecutionStackException__Fields_DEFINED)
#define IL2CPP_STRUCT_InsufficientExecutionStackException_DEFINED
struct InsufficientExecutionStackException__Class;
struct InsufficientExecutionStackException {
    struct InsufficientExecutionStackException__Class* klass;
    MonitorData* monitor;
    struct InsufficientExecutionStackException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InsufficientExecutionStackException_FWDDECL)
#define IL2CPP_STRUCT_InsufficientExecutionStackException_FWDDECL
#include <Modloader/app/structs/InsufficientExecutionStackException__Class.h>
#endif
#undef IL2CPP_STRUCT_InsufficientExecutionStackException_INITIALIZING
#if !defined(IL2CPP_STRUCT_InsufficientExecutionStackException_DEFINED) && !defined(IL2CPP_STRUCT_InsufficientExecutionStackException_FWDDECL)
#include <Modloader/app/structs/InsufficientExecutionStackException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InsufficientExecutionStackException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

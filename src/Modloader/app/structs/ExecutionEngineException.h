#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExecutionEngineException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExecutionEngineException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecutionEngineException_DEFINED)
#include <Modloader/app/structs/ExecutionEngineException__Fields.h>
#if defined(IL2CPP_STRUCT_ExecutionEngineException__Fields_DEFINED)
#define IL2CPP_STRUCT_ExecutionEngineException_DEFINED
struct ExecutionEngineException__Class;
struct ExecutionEngineException {
    struct ExecutionEngineException__Class* klass;
    MonitorData* monitor;
    struct ExecutionEngineException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExecutionEngineException_FWDDECL)
#define IL2CPP_STRUCT_ExecutionEngineException_FWDDECL
#include <Modloader/app/structs/ExecutionEngineException__Class.h>
#endif
#undef IL2CPP_STRUCT_ExecutionEngineException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecutionEngineException_DEFINED) && !defined(IL2CPP_STRUCT_ExecutionEngineException_FWDDECL)
#include <Modloader/app/structs/ExecutionEngineException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExecutionEngineException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

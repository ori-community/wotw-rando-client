#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExecuteCloudScriptResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExecuteCloudScriptResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecuteCloudScriptResult_DEFINED)
#include <Modloader/app/structs/ExecuteCloudScriptResult__Fields.h>
#if defined(IL2CPP_STRUCT_ExecuteCloudScriptResult__Fields_DEFINED)
#define IL2CPP_STRUCT_ExecuteCloudScriptResult_DEFINED
struct ExecuteCloudScriptResult__Class;
struct ExecuteCloudScriptResult {
    struct ExecuteCloudScriptResult__Class* klass;
    MonitorData* monitor;
    struct ExecuteCloudScriptResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExecuteCloudScriptResult_FWDDECL)
#define IL2CPP_STRUCT_ExecuteCloudScriptResult_FWDDECL
#include <Modloader/app/structs/ExecuteCloudScriptResult__Class.h>
#endif
#undef IL2CPP_STRUCT_ExecuteCloudScriptResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecuteCloudScriptResult_DEFINED) && !defined(IL2CPP_STRUCT_ExecuteCloudScriptResult_FWDDECL)
#include <Modloader/app/structs/ExecuteCloudScriptResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExecuteCloudScriptResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

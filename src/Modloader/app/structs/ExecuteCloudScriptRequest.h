#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExecuteCloudScriptRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExecuteCloudScriptRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecuteCloudScriptRequest_DEFINED)
#include <Modloader/app/structs/ExecuteCloudScriptRequest__Fields.h>
#if defined(IL2CPP_STRUCT_ExecuteCloudScriptRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_ExecuteCloudScriptRequest_DEFINED
struct ExecuteCloudScriptRequest__Class;
struct ExecuteCloudScriptRequest {
    struct ExecuteCloudScriptRequest__Class* klass;
    MonitorData* monitor;
    struct ExecuteCloudScriptRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExecuteCloudScriptRequest_FWDDECL)
#define IL2CPP_STRUCT_ExecuteCloudScriptRequest_FWDDECL
#include <Modloader/app/structs/ExecuteCloudScriptRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_ExecuteCloudScriptRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecuteCloudScriptRequest_DEFINED) && !defined(IL2CPP_STRUCT_ExecuteCloudScriptRequest_FWDDECL)
#include <Modloader/app/structs/ExecuteCloudScriptRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExecuteCloudScriptRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

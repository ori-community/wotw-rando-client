#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExecuteCloudScriptServerRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExecuteCloudScriptServerRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecuteCloudScriptServerRequest_DEFINED)
#include <Modloader/app/structs/ExecuteCloudScriptServerRequest__Fields.h>
#if defined(IL2CPP_STRUCT_ExecuteCloudScriptServerRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_ExecuteCloudScriptServerRequest_DEFINED
struct ExecuteCloudScriptServerRequest__Class;
struct ExecuteCloudScriptServerRequest {
    struct ExecuteCloudScriptServerRequest__Class* klass;
    MonitorData* monitor;
    struct ExecuteCloudScriptServerRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExecuteCloudScriptServerRequest_FWDDECL)
#define IL2CPP_STRUCT_ExecuteCloudScriptServerRequest_FWDDECL
#include <Modloader/app/structs/ExecuteCloudScriptServerRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_ExecuteCloudScriptServerRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecuteCloudScriptServerRequest_DEFINED) && !defined(IL2CPP_STRUCT_ExecuteCloudScriptServerRequest_FWDDECL)
#include <Modloader/app/structs/ExecuteCloudScriptServerRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExecuteCloudScriptServerRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

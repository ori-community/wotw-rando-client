#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExecuteCloudScriptResult_3__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExecuteCloudScriptResult_3__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecuteCloudScriptResult_3__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED)
#define IL2CPP_STRUCT_ExecuteCloudScriptResult_3__Fields_DEFINED
struct ScriptExecutionError_3;
struct String;
struct Object;
struct List_1_PlayFab_PlayStreamModels_LogStatement_;
struct __declspec(align(8)) ExecuteCloudScriptResult_3__Fields {
    int32_t APIRequestsIssued;
    struct ScriptExecutionError_3* Error;
    double ExecutionTimeSeconds;
    struct String* FunctionName;
    struct Object* FunctionResult;
    struct Nullable_1_Boolean_ FunctionResultTooLarge;
    int32_t HttpRequestsIssued;
    struct List_1_PlayFab_PlayStreamModels_LogStatement_* Logs;
    struct Nullable_1_Boolean_ LogsTooLarge;
    uint32_t MemoryConsumedBytes;
    double ProcessorTimeSeconds;
    int32_t Revision;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExecuteCloudScriptResult_3__Fields_FWDDECL)
#define IL2CPP_STRUCT_ExecuteCloudScriptResult_3__Fields_FWDDECL
#include <Modloader/app/structs/List_1_PlayFab_PlayStreamModels_LogStatement_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ScriptExecutionError_3.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ExecuteCloudScriptResult_3__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecuteCloudScriptResult_3__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ExecuteCloudScriptResult_3__Fields_FWDDECL)
#include <Modloader/app/structs/ExecuteCloudScriptResult_3__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExecuteCloudScriptResult_3__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

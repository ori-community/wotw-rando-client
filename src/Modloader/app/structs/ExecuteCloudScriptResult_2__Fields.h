#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExecuteCloudScriptResult_2__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExecuteCloudScriptResult_2__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecuteCloudScriptResult_2__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED)
#define IL2CPP_STRUCT_ExecuteCloudScriptResult_2__Fields_DEFINED
struct ScriptExecutionError_2;
struct String;
struct Object;
struct List_1_PlayFab_ServerModels_LogStatement_;
struct ExecuteCloudScriptResult_2__Fields {
    struct PlayFabResultCommon__Fields _;
    int32_t APIRequestsIssued;
    struct ScriptExecutionError_2* Error;
    double ExecutionTimeSeconds;
    struct String* FunctionName;
    struct Object* FunctionResult;
    struct Nullable_1_Boolean_ FunctionResultTooLarge;
    int32_t HttpRequestsIssued;
    struct List_1_PlayFab_ServerModels_LogStatement_* Logs;
    struct Nullable_1_Boolean_ LogsTooLarge;
    uint32_t MemoryConsumedBytes;
    double ProcessorTimeSeconds;
    int32_t Revision;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExecuteCloudScriptResult_2__Fields_FWDDECL)
#define IL2CPP_STRUCT_ExecuteCloudScriptResult_2__Fields_FWDDECL
#include <Modloader/app/structs/List_1_PlayFab_ServerModels_LogStatement_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ScriptExecutionError_2.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ExecuteCloudScriptResult_2__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecuteCloudScriptResult_2__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ExecuteCloudScriptResult_2__Fields_FWDDECL)
#include <Modloader/app/structs/ExecuteCloudScriptResult_2__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExecuteCloudScriptResult_2__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

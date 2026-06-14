#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerExecutedCloudScriptEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerExecutedCloudScriptEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerExecutedCloudScriptEventData__Fields_DEFINED)
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerExecutedCloudScriptEventData__Fields_DEFINED
struct ExecuteCloudScriptResult_3;
struct String;
struct PlayerExecutedCloudScriptEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct ExecuteCloudScriptResult_3* CloudScriptExecutionResult;
    struct String* FunctionName;
    struct String* TitleId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerExecutedCloudScriptEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerExecutedCloudScriptEventData__Fields_FWDDECL
#include <Modloader/app/structs/ExecuteCloudScriptResult_3.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayerExecutedCloudScriptEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerExecutedCloudScriptEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerExecutedCloudScriptEventData__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerExecutedCloudScriptEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerExecutedCloudScriptEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

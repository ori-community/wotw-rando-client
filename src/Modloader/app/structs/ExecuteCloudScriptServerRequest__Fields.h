#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExecuteCloudScriptServerRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExecuteCloudScriptServerRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecuteCloudScriptServerRequest__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#include <Modloader/app/structs/Nullable_1_PlayFab_ServerModels_CloudScriptRevisionOption_.h>
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_ServerModels_CloudScriptRevisionOption__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Int32__DEFINED)
#define IL2CPP_STRUCT_ExecuteCloudScriptServerRequest__Fields_DEFINED
struct String;
struct Object;
struct ExecuteCloudScriptServerRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String* FunctionName;
    struct Object* FunctionParameter;
    struct Nullable_1_Boolean_ GeneratePlayStreamEvent;
    struct String* PlayFabId;
    struct Nullable_1_PlayFab_ServerModels_CloudScriptRevisionOption_ RevisionSelection;
    struct Nullable_1_Int32_ SpecificRevision;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExecuteCloudScriptServerRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_ExecuteCloudScriptServerRequest__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ExecuteCloudScriptServerRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecuteCloudScriptServerRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ExecuteCloudScriptServerRequest__Fields_FWDDECL)
#include <Modloader/app/structs/ExecuteCloudScriptServerRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExecuteCloudScriptServerRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

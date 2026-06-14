#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CallRequestContainer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CallRequestContainer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallRequestContainer__Fields_DEFINED)
#include <Modloader/app/structs/HttpRequestState__Enum.h>
#if defined(IL2CPP_STRUCT_HttpRequestState__Enum_DEFINED)
#define IL2CPP_STRUCT_CallRequestContainer__Fields_DEFINED
struct HttpWebRequest;
struct String;
struct Byte__Array;
struct PlayFabRequestCommon;
struct Dictionary_2_System_String_System_String_;
struct PlayFabResultCommon;
struct PlayFabError;
struct Action;
struct Action_1_PlayFab_PlayFabError_;
struct Object;
struct HttpRequestMessage;
struct __declspec(align(8)) CallRequestContainer__Fields {
    HttpRequestState__Enum HttpState;

    struct HttpWebRequest* HttpRequest;
    struct String* ApiEndpoint;
    struct String* FullUrl;
    struct Byte__Array* Payload;
    struct String* JsonResponse;
    struct PlayFabRequestCommon* ApiRequest;
    struct Dictionary_2_System_String_System_String_* RequestHeaders;
    struct PlayFabResultCommon* ApiResult;
    struct PlayFabError* Error;
    struct Action* DeserializeResultJson;
    struct Action* InvokeSuccessCallback;
    struct Action_1_PlayFab_PlayFabError_* ErrorCallback;
    struct Object* CustomData;
    bool UseMainThreadDispatcher;
    struct HttpRequestMessage* _HttpRequestMessage_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CallRequestContainer__Fields_FWDDECL)
#define IL2CPP_STRUCT_CallRequestContainer__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_PlayFab_PlayFabError_.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/HttpRequestMessage.h>
#include <Modloader/app/structs/HttpWebRequest.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PlayFabError.h>
#include <Modloader/app/structs/PlayFabRequestCommon.h>
#include <Modloader/app/structs/PlayFabResultCommon.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CallRequestContainer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallRequestContainer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CallRequestContainer__Fields_FWDDECL)
#include <Modloader/app/structs/CallRequestContainer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CallRequestContainer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

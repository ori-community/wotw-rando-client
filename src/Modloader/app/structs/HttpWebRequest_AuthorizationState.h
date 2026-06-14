#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpWebRequest_AuthorizationState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpWebRequest_AuthorizationState_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpWebRequest_AuthorizationState_DEFINED)
#include <Modloader/app/structs/HttpWebRequest_NtlmAuthState__Enum.h>
#if defined(IL2CPP_STRUCT_HttpWebRequest_NtlmAuthState__Enum_DEFINED)
#define IL2CPP_STRUCT_HttpWebRequest_AuthorizationState_DEFINED
struct HttpWebRequest;
struct HttpWebRequest_AuthorizationState {
    struct HttpWebRequest* request;
    bool isProxy;
    bool isCompleted;
    HttpWebRequest_NtlmAuthState__Enum ntlm_auth_state;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpWebRequest_AuthorizationState_FWDDECL)
#define IL2CPP_STRUCT_HttpWebRequest_AuthorizationState_FWDDECL
#include <Modloader/app/structs/HttpWebRequest.h>
#endif
#undef IL2CPP_STRUCT_HttpWebRequest_AuthorizationState_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpWebRequest_AuthorizationState_DEFINED) && !defined(IL2CPP_STRUCT_HttpWebRequest_AuthorizationState_FWDDECL)
#include <Modloader/app/structs/HttpWebRequest_AuthorizationState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpWebRequest_AuthorizationState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpListenerContext__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpListenerContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerContext__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpListenerContext__Fields_DEFINED
struct HttpListenerRequest;
struct HttpListenerResponse;
struct IPrincipal;
struct HttpConnection;
struct String;
struct HttpListener;
struct __declspec(align(8)) HttpListenerContext__Fields {
    struct HttpListenerRequest* request;
    struct HttpListenerResponse* response;
    struct IPrincipal* user;
    struct HttpConnection* cnc;
    struct String* error;
    int32_t err_status;
    struct HttpListener* Listener;
};
#endif
#if !defined(IL2CPP_STRUCT_HttpListenerContext__Fields_FWDDECL)
#define IL2CPP_STRUCT_HttpListenerContext__Fields_FWDDECL
#include <Modloader/app/structs/HttpConnection.h>
#include <Modloader/app/structs/HttpListener.h>
#include <Modloader/app/structs/HttpListenerRequest.h>
#include <Modloader/app/structs/HttpListenerResponse.h>
#include <Modloader/app/structs/IPrincipal.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_HttpListenerContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerContext__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HttpListenerContext__Fields_FWDDECL)
#include <Modloader/app/structs/HttpListenerContext__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpListenerContext__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

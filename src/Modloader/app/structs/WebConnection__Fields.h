#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebConnection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebConnection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebConnection__Fields_DEFINED)
#include <Modloader/app/structs/WebConnection_NtlmAuthState__Enum.h>
#include <Modloader/app/structs/WebExceptionStatus__Enum.h>
#if defined(IL2CPP_STRUCT_WebExceptionStatus__Enum_DEFINED) && defined(IL2CPP_STRUCT_WebConnection_NtlmAuthState__Enum_DEFINED)
#define IL2CPP_STRUCT_WebConnection__Fields_DEFINED
struct ServicePoint;
struct Stream;
struct Socket;
struct Object;
struct IWebConnectionState;
struct Byte__Array;
struct EventHandler;
struct WebConnection_AbortHelper;
struct WebConnectionData;
struct MonoChunkStream;
struct Queue;
struct HttpWebRequest;
struct NetworkCredential;
struct Exception;
struct MonoTlsStream;
struct __declspec(align(8)) WebConnection__Fields {
    struct ServicePoint* sPoint;
    struct Stream* nstream;
    struct Socket* socket;
    struct Object* socketLock;
    struct IWebConnectionState* state;
    WebExceptionStatus__Enum status;

    bool keepAlive;
    struct Byte__Array* buffer;
    struct EventHandler* abortHandler;
    struct WebConnection_AbortHelper* abortHelper;
    struct WebConnectionData* Data;
    bool chunkedRead;
    struct MonoChunkStream* chunkStream;
    struct Queue* queue;
    bool reused;
    int32_t position;
    struct HttpWebRequest* priority_request;
    struct NetworkCredential* ntlm_credentials;
    bool ntlm_authenticated;
    bool unsafe_sharing;
    WebConnection_NtlmAuthState__Enum connect_ntlm_auth_state;

    struct HttpWebRequest* connect_request;
    struct Exception* connect_exception;
    struct MonoTlsStream* tlsStream;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WebConnection__Fields_FWDDECL)
#define IL2CPP_STRUCT_WebConnection__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/EventHandler.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/HttpWebRequest.h>
#include <Modloader/app/structs/IWebConnectionState.h>
#include <Modloader/app/structs/MonoChunkStream.h>
#include <Modloader/app/structs/MonoTlsStream.h>
#include <Modloader/app/structs/NetworkCredential.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Queue.h>
#include <Modloader/app/structs/ServicePoint.h>
#include <Modloader/app/structs/Socket.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/WebConnectionData.h>
#include <Modloader/app/structs/WebConnection_AbortHelper.h>
#endif
#undef IL2CPP_STRUCT_WebConnection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebConnection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WebConnection__Fields_FWDDECL)
#include <Modloader/app/structs/WebConnection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebConnection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

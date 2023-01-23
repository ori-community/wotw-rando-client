#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpConnection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpConnection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpConnection__Fields_DEFINED)
#include <Modloader/app/structs/HttpConnection_InputState__Enum.h>
#include <Modloader/app/structs/HttpConnection_LineState__Enum.h>
#if defined(IL2CPP_STRUCT_HttpConnection_InputState__Enum_DEFINED) && defined(IL2CPP_STRUCT_HttpConnection_LineState__Enum_DEFINED)
#define IL2CPP_STRUCT_HttpConnection__Fields_DEFINED
struct Socket;
struct Stream;
struct EndPointListener;
struct MemoryStream;
struct Byte__Array;
struct HttpListenerContext;
struct StringBuilder;
struct ListenerPrefix;
struct RequestStream;
struct ResponseStream;
struct X509Certificate_1;
struct Timer;
struct IPEndPoint;
struct HttpListener;
struct Int32__Array;
struct X509Certificate2;
struct SslStream;
struct __declspec(align(8)) HttpConnection__Fields {
    struct Socket* sock;
    struct Stream* stream;
    struct EndPointListener* epl;
    struct MemoryStream* ms;
    struct Byte__Array* buffer;
    struct HttpListenerContext* context;
    struct StringBuilder* current_line;
    struct ListenerPrefix* prefix;
    struct RequestStream* i_stream;
    struct ResponseStream* o_stream;
    bool chunked;
    int32_t reuses;
    bool context_bound;
    bool secure;
    struct X509Certificate_1* cert;
    int32_t s_timeout;
    struct Timer* timer;
    struct IPEndPoint* local_ep;
    struct HttpListener* last_listener;
    struct Int32__Array* client_cert_errors;
    struct X509Certificate2* client_cert;
    struct SslStream* ssl_stream;
    HttpConnection_InputState__Enum input_state;

    HttpConnection_LineState__Enum line_state;

    int32_t position;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpConnection__Fields_FWDDECL)
#define IL2CPP_STRUCT_HttpConnection__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/EndPointListener.h>
#include <Modloader/app/structs/HttpListener.h>
#include <Modloader/app/structs/HttpListenerContext.h>
#include <Modloader/app/structs/IPEndPoint.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/ListenerPrefix.h>
#include <Modloader/app/structs/MemoryStream.h>
#include <Modloader/app/structs/RequestStream.h>
#include <Modloader/app/structs/ResponseStream.h>
#include <Modloader/app/structs/Socket.h>
#include <Modloader/app/structs/SslStream.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/Timer.h>
#include <Modloader/app/structs/X509Certificate2.h>
#include <Modloader/app/structs/X509Certificate_1.h>
#endif
#undef IL2CPP_STRUCT_HttpConnection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpConnection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HttpConnection__Fields_FWDDECL)
#include <Modloader/app/structs/HttpConnection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpConnection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

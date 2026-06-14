#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpListenerResponse__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpListenerResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpListenerResponse__Fields_DEFINED
struct Encoding;
struct String;
struct CookieCollection;
struct WebHeaderCollection;
struct ResponseStream;
struct Version;
struct HttpListenerContext;
struct Object;
struct __declspec(align(8)) HttpListenerResponse__Fields {
    bool disposed;
    struct Encoding* content_encoding;
    int64_t content_length;
    bool cl_set;
    struct String* content_type;
    struct CookieCollection* cookies;
    struct WebHeaderCollection* headers;
    bool keep_alive;
    struct ResponseStream* output_stream;
    struct Version* version;
    struct String* location;
    int32_t status_code;
    struct String* status_description;
    bool chunked;
    struct HttpListenerContext* context;
    bool HeadersSent;
    struct Object* headers_lock;
    bool force_close_chunked;
};
#endif
#if !defined(IL2CPP_STRUCT_HttpListenerResponse__Fields_FWDDECL)
#define IL2CPP_STRUCT_HttpListenerResponse__Fields_FWDDECL
#include <Modloader/app/structs/CookieCollection.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/HttpListenerContext.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ResponseStream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Version.h>
#include <Modloader/app/structs/WebHeaderCollection.h>
#endif
#undef IL2CPP_STRUCT_HttpListenerResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerResponse__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HttpListenerResponse__Fields_FWDDECL)
#include <Modloader/app/structs/HttpListenerResponse__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpListenerResponse__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

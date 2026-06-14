#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpListenerRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpListenerRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpListenerRequest__Fields_DEFINED
struct String__Array;
struct Encoding;
struct CookieCollection;
struct WebHeaderCollection;
struct String;
struct Stream;
struct Version;
struct NameValueCollection;
struct Uri;
struct HttpListenerContext;
struct HttpListenerRequest_GCCDelegate;
struct __declspec(align(8)) HttpListenerRequest__Fields {
    struct String__Array* accept_types;
    struct Encoding* content_encoding;
    int64_t content_length;
    bool cl_set;
    struct CookieCollection* cookies;
    struct WebHeaderCollection* headers;
    struct String* method;
    struct Stream* input_stream;
    struct Version* version;
    struct NameValueCollection* query_string;
    struct String* raw_url;
    struct Uri* url;
    struct Uri* referrer;
    struct String__Array* user_languages;
    struct HttpListenerContext* context;
    bool is_chunked;
    bool ka_set;
    bool keep_alive;
    struct HttpListenerRequest_GCCDelegate* gcc_delegate;
};
#endif
#if !defined(IL2CPP_STRUCT_HttpListenerRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_HttpListenerRequest__Fields_FWDDECL
#include <Modloader/app/structs/CookieCollection.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/HttpListenerContext.h>
#include <Modloader/app/structs/HttpListenerRequest_GCCDelegate.h>
#include <Modloader/app/structs/NameValueCollection.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/Version.h>
#include <Modloader/app/structs/WebHeaderCollection.h>
#endif
#undef IL2CPP_STRUCT_HttpListenerRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpListenerRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HttpListenerRequest__Fields_FWDDECL)
#include <Modloader/app/structs/HttpListenerRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpListenerRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

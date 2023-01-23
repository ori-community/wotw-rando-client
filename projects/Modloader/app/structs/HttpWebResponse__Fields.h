#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpWebResponse__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpWebResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpWebResponse__Fields_DEFINED)
#include <Modloader/app/structs/HttpStatusCode__Enum.h>
#include <Modloader/app/structs/WebResponse__Fields.h>
#if defined(IL2CPP_STRUCT_WebResponse__Fields_DEFINED) && defined(IL2CPP_STRUCT_HttpStatusCode__Enum_DEFINED)
#define IL2CPP_STRUCT_HttpWebResponse__Fields_DEFINED
struct Uri;
struct WebHeaderCollection;
struct CookieCollection;
struct String;
struct Version;
struct CookieContainer;
struct Stream;
struct HttpWebResponse__Fields {
    struct WebResponse__Fields _;
    struct Uri* uri;
    struct WebHeaderCollection* webHeaders;
    struct CookieCollection* cookieCollection;
    struct String* method;
    struct Version* version;
    HttpStatusCode__Enum statusCode;

    struct String* statusDescription;
    int64_t contentLength;
    struct String* contentType;
    struct CookieContainer* cookie_container;
    bool disposed;
    struct Stream* stream;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpWebResponse__Fields_FWDDECL)
#define IL2CPP_STRUCT_HttpWebResponse__Fields_FWDDECL
#include <Modloader/app/structs/CookieCollection.h>
#include <Modloader/app/structs/CookieContainer.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/Version.h>
#include <Modloader/app/structs/WebHeaderCollection.h>
#endif
#undef IL2CPP_STRUCT_HttpWebResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpWebResponse__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HttpWebResponse__Fields_FWDDECL)
#include <Modloader/app/structs/HttpWebResponse__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpWebResponse__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

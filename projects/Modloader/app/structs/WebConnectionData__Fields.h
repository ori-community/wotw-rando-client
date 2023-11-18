#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebConnectionData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebConnectionData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebConnectionData__Fields_DEFINED)
#include <Modloader/app/structs/ReadState__Enum.h>
#if defined(IL2CPP_STRUCT_ReadState__Enum_DEFINED)
#define IL2CPP_STRUCT_WebConnectionData__Fields_DEFINED
struct HttpWebRequest;
struct String;
struct WebHeaderCollection;
struct Version;
struct Stream;
struct String__Array;
struct __declspec(align(8)) WebConnectionData__Fields {
    struct HttpWebRequest* _request;
    int32_t StatusCode;
    struct String* StatusDescription;
    struct WebHeaderCollection* Headers;
    struct Version* Version;
    struct Version* ProxyVersion;
    struct Stream* stream;
    struct String__Array* Challenge;
    ReadState__Enum _readState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WebConnectionData__Fields_FWDDECL)
#define IL2CPP_STRUCT_WebConnectionData__Fields_FWDDECL
#include <Modloader/app/structs/HttpWebRequest.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Version.h>
#include <Modloader/app/structs/WebHeaderCollection.h>
#endif
#undef IL2CPP_STRUCT_WebConnectionData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebConnectionData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WebConnectionData__Fields_FWDDECL)
#include <Modloader/app/structs/WebConnectionData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebConnectionData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Uri__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Uri__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Uri__StaticFields_DEFINED)
#include <Modloader/app/structs/UriIdnScope__Enum.h>
#if defined(IL2CPP_STRUCT_UriIdnScope__Enum_DEFINED)
#define IL2CPP_STRUCT_Uri__StaticFields_DEFINED
struct String;
struct Object;
struct Char__Array;
struct Uri__StaticFields {
    struct String* UriSchemeFile;
    struct String* UriSchemeFtp;
    struct String* UriSchemeGopher;
    struct String* UriSchemeHttp;
    struct String* UriSchemeHttps;
    struct String* UriSchemeWs;
    struct String* UriSchemeWss;
    struct String* UriSchemeMailto;
    struct String* UriSchemeNews;
    struct String* UriSchemeNntp;
    struct String* UriSchemeNetTcp;
    struct String* UriSchemeNetPipe;
    struct String* SchemeDelimiter;
    bool s_ConfigInitialized;
    bool s_ConfigInitializing;
    UriIdnScope__Enum s_IdnScope;

    bool s_IriParsing;
    bool useDotNetRelativeOrAbsolute;
    bool IsWindowsFileSystem;
    struct Object* s_initLock;
    struct Char__Array* HexLowerChars;
    struct Char__Array* _WSchars;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Uri__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Uri__StaticFields_FWDDECL
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Uri__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Uri__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Uri__StaticFields_FWDDECL)
#include <Modloader/app/structs/Uri__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Uri__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

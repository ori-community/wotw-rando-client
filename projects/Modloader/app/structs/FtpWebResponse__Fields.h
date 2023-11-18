#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FtpWebResponse__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FtpWebResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FtpWebResponse__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/FtpStatusCode__Enum.h>
#include <Modloader/app/structs/WebResponse__Fields.h>
#if defined(IL2CPP_STRUCT_WebResponse__Fields_DEFINED) && defined(IL2CPP_STRUCT_FtpStatusCode__Enum_DEFINED) && defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_FtpWebResponse__Fields_DEFINED
struct Stream;
struct Uri;
struct String;
struct FtpWebRequest;
struct FtpWebResponse__Fields {
    struct WebResponse__Fields _;
    struct Stream* stream;
    struct Uri* uri;
    FtpStatusCode__Enum statusCode;

    struct DateTime lastModified;
    struct String* bannerMessage;
    struct String* welcomeMessage;
    struct String* exitMessage;
    struct String* statusDescription;
    struct String* method;
    bool disposed;
    struct FtpWebRequest* request;
    int64_t contentLength;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FtpWebResponse__Fields_FWDDECL)
#define IL2CPP_STRUCT_FtpWebResponse__Fields_FWDDECL
#include <Modloader/app/structs/FtpWebRequest.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Uri.h>
#endif
#undef IL2CPP_STRUCT_FtpWebResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FtpWebResponse__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FtpWebResponse__Fields_FWDDECL)
#include <Modloader/app/structs/FtpWebResponse__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FtpWebResponse__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

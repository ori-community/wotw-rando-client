#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FtpWebRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FtpWebRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FtpWebRequest__Fields_DEFINED)
#include <Modloader/app/structs/FtpWebRequest_RequestState__Enum.h>
#include <Modloader/app/structs/WebRequest__Fields.h>
#if defined(IL2CPP_STRUCT_WebRequest__Fields_DEFINED) && defined(IL2CPP_STRUCT_FtpWebRequest_RequestState__Enum_DEFINED)
#define IL2CPP_STRUCT_FtpWebRequest__Fields_DEFINED
struct Uri;
struct String;
struct ServicePoint;
struct Stream;
struct StreamReader;
struct NetworkCredential;
struct IPHostEntry;
struct IPEndPoint;
struct IWebProxy;
struct Object;
struct FtpAsyncResult;
struct FtpWebResponse;
struct Encoding;
struct FtpWebRequest__Fields {
    struct WebRequest__Fields _;
    struct Uri* requestUri;
    struct String* file_name;
    struct ServicePoint* servicePoint;
    struct Stream* origDataStream;
    struct Stream* dataStream;
    struct Stream* controlStream;
    struct StreamReader* controlReader;
    struct NetworkCredential* credentials;
    struct IPHostEntry* hostEntry;
    struct IPEndPoint* localEndPoint;
    struct IPEndPoint* remoteEndPoint;
    struct IWebProxy* proxy;
    int32_t timeout;
    int32_t rwTimeout;
    int64_t offset;
    bool binary;
    bool enableSsl;
    bool usePassive;
    bool keepAlive;
    struct String* method;
    struct String* renameTo;
    struct Object* locker;
    FtpWebRequest_RequestState__Enum requestState;

    struct FtpAsyncResult* asyncResult;
    struct FtpWebResponse* ftpResponse;
    struct Stream* requestStream;
    struct String* initial_path;
    struct Encoding* dataEncoding;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FtpWebRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_FtpWebRequest__Fields_FWDDECL
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/FtpAsyncResult.h>
#include <Modloader/app/structs/FtpWebResponse.h>
#include <Modloader/app/structs/IPEndPoint.h>
#include <Modloader/app/structs/IPHostEntry.h>
#include <Modloader/app/structs/IWebProxy.h>
#include <Modloader/app/structs/NetworkCredential.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ServicePoint.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/StreamReader.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Uri.h>
#endif
#undef IL2CPP_STRUCT_FtpWebRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FtpWebRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FtpWebRequest__Fields_FWDDECL)
#include <Modloader/app/structs/FtpWebRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FtpWebRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

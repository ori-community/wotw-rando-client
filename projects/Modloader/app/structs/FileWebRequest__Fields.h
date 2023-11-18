#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FileWebRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FileWebRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileWebRequest__Fields_DEFINED)
#include <Modloader/app/structs/FileAccess__Enum.h>
#include <Modloader/app/structs/WebRequest__Fields.h>
#if defined(IL2CPP_STRUCT_WebRequest__Fields_DEFINED) && defined(IL2CPP_STRUCT_FileAccess__Enum_DEFINED)
#define IL2CPP_STRUCT_FileWebRequest__Fields_DEFINED
struct String;
struct ICredentials;
struct WebHeaderCollection;
struct IWebProxy;
struct ManualResetEvent;
struct WebResponse;
struct Stream;
struct Uri;
struct LazyAsyncResult;
struct FileWebRequest__Fields {
    struct WebRequest__Fields _;
    struct String* m_connectionGroupName;
    int64_t m_contentLength;
    struct ICredentials* m_credentials;
    FileAccess__Enum m_fileAccess;

    struct WebHeaderCollection* m_headers;
    struct String* m_method;
    bool m_preauthenticate;
    struct IWebProxy* m_proxy;
    struct ManualResetEvent* m_readerEvent;
    bool m_readPending;
    struct WebResponse* m_response;
    struct Stream* m_stream;
    bool m_syncHint;
    int32_t m_timeout;
    struct Uri* m_uri;
    bool m_writePending;
    bool m_writing;
    struct LazyAsyncResult* m_WriteAResult;
    struct LazyAsyncResult* m_ReadAResult;
    int32_t m_Aborted;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FileWebRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_FileWebRequest__Fields_FWDDECL
#include <Modloader/app/structs/ICredentials.h>
#include <Modloader/app/structs/IWebProxy.h>
#include <Modloader/app/structs/LazyAsyncResult.h>
#include <Modloader/app/structs/ManualResetEvent.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/WebHeaderCollection.h>
#include <Modloader/app/structs/WebResponse.h>
#endif
#undef IL2CPP_STRUCT_FileWebRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FileWebRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FileWebRequest__Fields_FWDDECL)
#include <Modloader/app/structs/FileWebRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FileWebRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

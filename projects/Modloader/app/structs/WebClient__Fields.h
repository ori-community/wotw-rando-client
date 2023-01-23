#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebClient__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebClient__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebClient__Fields_DEFINED)
#include <Modloader/app/structs/Component__Fields.h>
#if defined(IL2CPP_STRUCT_Component__Fields_DEFINED)
#define IL2CPP_STRUCT_WebClient__Fields_DEFINED
struct Uri;
struct ICredentials;
struct WebHeaderCollection;
struct NameValueCollection;
struct WebResponse;
struct WebRequest;
struct Encoding;
struct String;
struct WebClient_ProgressData;
struct IWebProxy;
struct RequestCachePolicy;
struct AsyncOperation;
struct OpenReadCompletedEventHandler;
struct SendOrPostCallback;
struct OpenWriteCompletedEventHandler;
struct DownloadStringCompletedEventHandler;
struct DownloadDataCompletedEventHandler;
struct AsyncCompletedEventHandler;
struct UploadStringCompletedEventHandler;
struct UploadDataCompletedEventHandler;
struct UploadFileCompletedEventHandler;
struct UploadValuesCompletedEventHandler;
struct DownloadProgressChangedEventHandler;
struct UploadProgressChangedEventHandler;
struct WebClient__Fields {
    struct Component__Fields _;
    struct Uri* m_baseAddress;
    struct ICredentials* m_credentials;
    struct WebHeaderCollection* m_headers;
    struct NameValueCollection* m_requestParameters;
    struct WebResponse* m_WebResponse;
    struct WebRequest* m_WebRequest;
    struct Encoding* m_Encoding;
    struct String* m_Method;
    int64_t m_ContentLength;
    bool m_InitWebClientAsync;
    bool m_Cancelled;
    struct WebClient_ProgressData* m_Progress;
    struct IWebProxy* m_Proxy;
    bool m_ProxySet;
    struct RequestCachePolicy* m_CachePolicy;
    bool _AllowReadStreamBuffering_k__BackingField;
    bool _AllowWriteStreamBuffering_k__BackingField;
    int32_t m_CallNesting;
    struct AsyncOperation* m_AsyncOp;
    struct OpenReadCompletedEventHandler* OpenReadCompleted;
    struct SendOrPostCallback* openReadOperationCompleted;
    struct OpenWriteCompletedEventHandler* OpenWriteCompleted;
    struct SendOrPostCallback* openWriteOperationCompleted;
    struct DownloadStringCompletedEventHandler* DownloadStringCompleted;
    struct SendOrPostCallback* downloadStringOperationCompleted;
    struct DownloadDataCompletedEventHandler* DownloadDataCompleted;
    struct SendOrPostCallback* downloadDataOperationCompleted;
    struct AsyncCompletedEventHandler* DownloadFileCompleted;
    struct SendOrPostCallback* downloadFileOperationCompleted;
    struct UploadStringCompletedEventHandler* UploadStringCompleted;
    struct SendOrPostCallback* uploadStringOperationCompleted;
    struct UploadDataCompletedEventHandler* UploadDataCompleted;
    struct SendOrPostCallback* uploadDataOperationCompleted;
    struct UploadFileCompletedEventHandler* UploadFileCompleted;
    struct SendOrPostCallback* uploadFileOperationCompleted;
    struct UploadValuesCompletedEventHandler* UploadValuesCompleted;
    struct SendOrPostCallback* uploadValuesOperationCompleted;
    struct DownloadProgressChangedEventHandler* DownloadProgressChanged;
    struct UploadProgressChangedEventHandler* UploadProgressChanged;
    struct SendOrPostCallback* reportDownloadProgressChanged;
    struct SendOrPostCallback* reportUploadProgressChanged;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WebClient__Fields_FWDDECL)
#define IL2CPP_STRUCT_WebClient__Fields_FWDDECL
#include <Modloader/app/structs/AsyncCompletedEventHandler.h>
#include <Modloader/app/structs/AsyncOperation.h>
#include <Modloader/app/structs/DownloadDataCompletedEventHandler.h>
#include <Modloader/app/structs/DownloadProgressChangedEventHandler.h>
#include <Modloader/app/structs/DownloadStringCompletedEventHandler.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/ICredentials.h>
#include <Modloader/app/structs/IWebProxy.h>
#include <Modloader/app/structs/NameValueCollection.h>
#include <Modloader/app/structs/OpenReadCompletedEventHandler.h>
#include <Modloader/app/structs/OpenWriteCompletedEventHandler.h>
#include <Modloader/app/structs/RequestCachePolicy.h>
#include <Modloader/app/structs/SendOrPostCallback.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UploadDataCompletedEventHandler.h>
#include <Modloader/app/structs/UploadFileCompletedEventHandler.h>
#include <Modloader/app/structs/UploadProgressChangedEventHandler.h>
#include <Modloader/app/structs/UploadStringCompletedEventHandler.h>
#include <Modloader/app/structs/UploadValuesCompletedEventHandler.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/WebClient_ProgressData.h>
#include <Modloader/app/structs/WebHeaderCollection.h>
#include <Modloader/app/structs/WebRequest.h>
#include <Modloader/app/structs/WebResponse.h>
#endif
#undef IL2CPP_STRUCT_WebClient__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebClient__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WebClient__Fields_FWDDECL)
#include <Modloader/app/structs/WebClient__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebClient__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

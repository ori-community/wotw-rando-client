#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlDownloadManager_GetNonFileStreamAsync_d_5_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlDownloadManager_GetNonFileStreamAsync_d_5_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDownloadManager_GetNonFileStreamAsync_d_5_DEFINED)
#include <Modloader/app/structs/AsyncTaskMethodBuilder_1_System_IO_Stream_.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Net_WebResponse_.h>
#if defined(IL2CPP_STRUCT_AsyncTaskMethodBuilder_1_System_IO_Stream__DEFINED) && defined(IL2CPP_STRUCT_ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Net_WebResponse__DEFINED)
#define IL2CPP_STRUCT_XmlDownloadManager_GetNonFileStreamAsync_d_5_DEFINED
struct Uri;
struct ICredentials;
struct IWebProxy;
struct RequestCachePolicy;
struct WebRequest;
struct XmlDownloadManager;
struct XmlDownloadManager_GetNonFileStreamAsync_d_5 {
    int32_t __1__state;
    struct AsyncTaskMethodBuilder_1_System_IO_Stream_ __t__builder;
    struct Uri* uri;
    struct ICredentials* credentials;
    struct IWebProxy* proxy;
    struct RequestCachePolicy* cachePolicy;
    struct WebRequest* _req_5__1;
    struct XmlDownloadManager* __4__this;
    struct ConfiguredTaskAwaitable_1_TResult_ConfiguredTaskAwaiter_System_Net_WebResponse_ __u__1;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlDownloadManager_GetNonFileStreamAsync_d_5_FWDDECL)
#define IL2CPP_STRUCT_XmlDownloadManager_GetNonFileStreamAsync_d_5_FWDDECL
#include <Modloader/app/structs/ICredentials.h>
#include <Modloader/app/structs/IWebProxy.h>
#include <Modloader/app/structs/RequestCachePolicy.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/WebRequest.h>
#include <Modloader/app/structs/XmlDownloadManager.h>
#endif
#undef IL2CPP_STRUCT_XmlDownloadManager_GetNonFileStreamAsync_d_5_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDownloadManager_GetNonFileStreamAsync_d_5_DEFINED) && !defined(IL2CPP_STRUCT_XmlDownloadManager_GetNonFileStreamAsync_d_5_FWDDECL)
#include <Modloader/app/structs/XmlDownloadManager_GetNonFileStreamAsync_d_5.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlDownloadManager_GetNonFileStreamAsync_d_5.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

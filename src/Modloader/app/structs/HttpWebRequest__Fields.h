#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpWebRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpWebRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpWebRequest__Fields_DEFINED)
#include <Modloader/app/structs/DecompressionMethods__Enum.h>
#include <Modloader/app/structs/HttpWebRequest_AuthorizationState.h>
#include <Modloader/app/structs/WebRequest__Fields.h>
#if defined(IL2CPP_STRUCT_WebRequest__Fields_DEFINED) && defined(IL2CPP_STRUCT_DecompressionMethods__Enum_DEFINED) && defined(IL2CPP_STRUCT_HttpWebRequest_AuthorizationState_DEFINED)
#define IL2CPP_STRUCT_HttpWebRequest__Fields_DEFINED
struct Uri;
struct X509CertificateCollection_1;
struct String;
struct HttpContinueDelegate;
struct CookieContainer;
struct ICredentials;
struct WebHeaderCollection;
struct Version;
struct IWebProxy;
struct ServicePoint;
struct WebConnectionStream;
struct HttpWebResponse;
struct WebAsyncResult;
struct EventHandler;
struct Byte__Array;
struct Exception;
struct Object;
struct WebConnection;
struct MonoTlsProvider;
struct MonoTlsSettings;
struct ServerCertValidationCallback;
struct Action_1_System_IO_Stream_;
struct HttpWebRequest__Fields {
    struct WebRequest__Fields _;
    struct Uri* requestUri;
    struct Uri* actualUri;
    bool hostChanged;
    bool allowAutoRedirect;
    bool allowBuffering;
    struct X509CertificateCollection_1* certificates;
    struct String* connectionGroup;
    bool haveContentLength;
    int64_t contentLength;
    struct HttpContinueDelegate* continueDelegate;
    struct CookieContainer* cookieContainer;
    struct ICredentials* credentials;
    bool haveResponse;
    bool haveRequest;
    bool requestSent;
    struct WebHeaderCollection* webHeaders;
    bool keepAlive;
    int32_t maxAutoRedirect;
    struct String* mediaType;
    struct String* method;
    struct String* initialMethod;
    bool pipelined;
    bool preAuthenticate;
    bool usedPreAuth;
    struct Version* version;
    bool force_version;
    struct Version* actualVersion;
    struct IWebProxy* proxy;
    bool sendChunked;
    struct ServicePoint* servicePoint;
    int32_t timeout;
    struct WebConnectionStream* writeStream;
    struct HttpWebResponse* webResponse;
    struct WebAsyncResult* asyncWrite;
    struct WebAsyncResult* asyncRead;
    struct EventHandler* abortHandler;
    int32_t aborted;
    bool gotRequestStream;
    int32_t redirects;
    bool expectContinue;
    struct Byte__Array* bodyBuffer;
    int32_t bodyBufferLength;
    bool getResponseCalled;
    struct Exception* saved_exc;
    struct Object* locker;
    bool finished_reading;
    struct WebConnection* WebConnection;
    DecompressionMethods__Enum auto_decomp;

    int32_t maxResponseHeadersLength;
    int32_t readWriteTimeout;
    struct MonoTlsProvider* tlsProvider;
    struct MonoTlsSettings* tlsSettings;
    struct ServerCertValidationCallback* certValidationCallback;
    struct HttpWebRequest_AuthorizationState auth_state;
    struct HttpWebRequest_AuthorizationState proxy_auth_state;
    struct String* host;
    struct Action_1_System_IO_Stream_* ResendContentFactory;
    bool _ThrowOnError_k__BackingField;
    bool unsafe_auth_blah;
    bool _ReuseConnection_k__BackingField;
    struct WebConnection* StoredConnection;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpWebRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_HttpWebRequest__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_System_IO_Stream_.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CookieContainer.h>
#include <Modloader/app/structs/EventHandler.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/HttpContinueDelegate.h>
#include <Modloader/app/structs/HttpWebResponse.h>
#include <Modloader/app/structs/ICredentials.h>
#include <Modloader/app/structs/IWebProxy.h>
#include <Modloader/app/structs/MonoTlsProvider.h>
#include <Modloader/app/structs/MonoTlsSettings.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ServerCertValidationCallback.h>
#include <Modloader/app/structs/ServicePoint.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/Version.h>
#include <Modloader/app/structs/WebAsyncResult.h>
#include <Modloader/app/structs/WebConnection.h>
#include <Modloader/app/structs/WebConnectionStream.h>
#include <Modloader/app/structs/WebHeaderCollection.h>
#include <Modloader/app/structs/X509CertificateCollection_1.h>
#endif
#undef IL2CPP_STRUCT_HttpWebRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpWebRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HttpWebRequest__Fields_FWDDECL)
#include <Modloader/app/structs/HttpWebRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpWebRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

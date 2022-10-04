#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/X509EnhancedKeyUsageExtension.h>
#include <Il2CppModLoader/app/types/X509ExtensionEnumerator.h>
#include <Il2CppModLoader/app/types/X509Helper2_MyNativeHelper.h>
#include <Il2CppModLoader/app/types/X509KeyUsageFlags__Enum.h>
#include <Il2CppModLoader/app/types/X509KeyUsageExtension.h>
#include <Il2CppModLoader/app/types/StoreName__Enum.h>
#include <Il2CppModLoader/app/types/X509Stores.h>
#include <Il2CppModLoader/app/types/X509SubjectKeyIdentifierExtension.h>
#include <Il2CppModLoader/app/types/InvalidDataException.h>
#include <Il2CppModLoader/app/types/GZipStream.h>
#include <Il2CppModLoader/app/types/DeflateStream.h>
#include <Il2CppModLoader/app/types/DeflateStreamNative.h>
#include <Il2CppModLoader/app/types/DeflateStreamNative_UnmanagedReadOrWrite.h>
#include <Il2CppModLoader/app/types/DeflateStreamNative_SafeDeflateStreamHandle.h>
#include <Il2CppModLoader/app/types/DeflateStream_ReadMethod.h>
#include <Il2CppModLoader/app/types/DeflateStream_WriteMethod.h>
#include <Il2CppModLoader/app/types/NetEventSource.h>
#include <Il2CppModLoader/app/types/AuthenticationSchemes__Enum.h>
#include <Il2CppModLoader/app/types/HttpListenerRequest.h>
#include <Il2CppModLoader/app/types/HttpListenerContext.h>
#include <Il2CppModLoader/app/types/HttpListenerResponse.h>
#include <Il2CppModLoader/app/types/ResponseStream.h>
#include <Il2CppModLoader/app/types/HttpConnection.h>
#include <Il2CppModLoader/app/types/EndPointListener.h>
#include <Il2CppModLoader/app/types/HttpListener.h>
#include <Il2CppModLoader/app/types/HttpListenerPrefixCollection.h>
#include <Il2CppModLoader/app/types/ServiceNameStore.h>
#include <Il2CppModLoader/app/types/HttpConnection__Array.h>
#include <Il2CppModLoader/app/types/ListenerPrefix.h>
#include <Il2CppModLoader/app/types/RequestStream.h>
#include <Il2CppModLoader/app/types/HttpListenerRequest_GCCDelegate.h>
#include <Il2CppModLoader/app/types/CredentialCache_CredentialEnumerator.h>
#include <Il2CppModLoader/app/types/ICredentials__Array.h>
#include <Il2CppModLoader/app/types/SystemNetworkCredential.h>
#include <Il2CppModLoader/app/types/CredentialHostKey.h>
#include <Il2CppModLoader/app/types/CredentialKey.h>
#include <Il2CppModLoader/app/types/DnsEndPoint.h>
#include <Il2CppModLoader/app/types/HttpListenerException.h>
#include <Il2CppModLoader/app/types/HttpListenerRequestUriBuilder.h>
#include <Il2CppModLoader/app/types/HttpVersion.h>
#include <Il2CppModLoader/app/types/InternalException.h>
#include <Il2CppModLoader/app/types/WebException.h>
#include <Il2CppModLoader/app/types/WebRequestPrefixElement.h>
#include <Il2CppModLoader/app/types/HttpAbortDelegate.h>
#include <Il2CppModLoader/app/types/KnownHttpVerb.h>
#include <Il2CppModLoader/app/types/ListDictionary.h>
#include <Il2CppModLoader/app/types/ListDictionary_DictionaryNode.h>
#include <Il2CppModLoader/app/types/ProtocolViolationException.h>
#include <Il2CppModLoader/app/types/CaseInsensitiveAscii.h>
#include <Il2CppModLoader/app/types/DelayedRegex.h>
#include <Il2CppModLoader/app/types/WebPermission.h>
#include <Il2CppModLoader/app/types/WebProxy.h>
#include <Il2CppModLoader/app/types/Regex__Array.h>
#include <Il2CppModLoader/app/types/AutoWebProxyScriptEngine.h>
#include <Il2CppModLoader/app/types/Uri__Array.h>
#include <Il2CppModLoader/app/types/ProxyChain_ProxyEnumerator.h>
#include <Il2CppModLoader/app/types/ProxyScriptChain.h>
#include <Il2CppModLoader/app/types/WebRequest_WebProxyWrapper.h>
#include <Il2CppModLoader/app/types/WebRequest_c_DisplayClass78_0.h>
#include <Il2CppModLoader/app/types/WebRequest_c_DisplayClass79_0.h>
#include <Il2CppModLoader/app/types/WebUtility_UrlDecoder.h>
#include <Il2CppModLoader/app/types/LazyAsyncResult_ThreadContext.h>
#include <Il2CppModLoader/app/types/LazyAsyncResult.h>
#include <Il2CppModLoader/app/types/BaseLoggingObject.h>
#include <Il2CppModLoader/app/types/FtpStatusCode__Enum.h>
#include <Il2CppModLoader/app/types/PooledStream.h>
#include <Il2CppModLoader/app/types/ConnectionPool.h>
#include <Il2CppModLoader/app/types/InterlockedStack.h>
#include <Il2CppModLoader/app/types/DirectProxy.h>
#include <Il2CppModLoader/app/types/ScatterGatherBuffers.h>
#include <Il2CppModLoader/app/types/ScatterGatherBuffers_MemoryChunk.h>
#include <Il2CppModLoader/app/types/Semaphore_1.h>
#include <Il2CppModLoader/app/types/TimerThread_InfiniteTimerQueue.h>
#include <Il2CppModLoader/app/types/TimerThread_InfiniteTimer.h>
#include <Il2CppModLoader/app/types/WebProxyData.h>
#include <Il2CppModLoader/app/types/EmptyWebProxy.h>
#include <Il2CppModLoader/app/types/ConnectionPool_AsyncConnectionPoolRequest.h>
#include <Il2CppModLoader/app/types/Cookie.h>
#include <Il2CppModLoader/app/types/Comparer_1.h>
#include <Il2CppModLoader/app/types/CookieTokenizer.h>
#include <Il2CppModLoader/app/types/CookieTokenizer_RecognizedAttribute__Array.h>
#include <Il2CppModLoader/app/types/CookieParser.h>
#include <Il2CppModLoader/app/types/CookieCollection_CookieCollectionEnumerator.h>
#include <Il2CppModLoader/app/types/PathList.h>
#include <Il2CppModLoader/app/types/PathList_PathListComparer.h>
#include <Il2CppModLoader/app/types/CookieException.h>
#include <Il2CppModLoader/app/types/FileWebRequest.h>
#include <Il2CppModLoader/app/types/FileWebRequestCreator.h>
#include <Il2CppModLoader/app/types/FileWebStream.h>
#include <Il2CppModLoader/app/types/FileWebResponse.h>
#include <Il2CppModLoader/app/types/Base64Stream.h>
#include <Il2CppModLoader/app/types/Base64Stream_ReadStateInfo.h>
#include <Il2CppModLoader/app/types/Base64WriteStateInfo.h>
#include <Il2CppModLoader/app/types/Base64Stream_ReadAsyncResult.h>
#include <Il2CppModLoader/app/types/Base64Stream_WriteAsyncResult.h>
#include <Il2CppModLoader/app/types/WebClient.h>
#include <Il2CppModLoader/app/types/WebClient_ProgressData.h>
#include <Il2CppModLoader/app/types/OpenReadCompletedEventHandler.h>
#include <Il2CppModLoader/app/types/OpenReadCompletedEventArgs.h>
#include <Il2CppModLoader/app/types/OpenWriteCompletedEventHandler.h>

namespace app::classes::types {
    namespace X509EnhancedKeyUsageExtension { IL2CPP_MODLOADER_DLLEXPORT ::app::X509EnhancedKeyUsageExtension__Class** type_info = (::app::X509EnhancedKeyUsageExtension__Class**)(modloader::win::memory::resolve_rva(0x04786158)); }
    namespace X509ExtensionEnumerator { IL2CPP_MODLOADER_DLLEXPORT ::app::X509ExtensionEnumerator__Class** type_info = (::app::X509ExtensionEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0474BAE0)); }
    namespace X509Helper2_MyNativeHelper { IL2CPP_MODLOADER_DLLEXPORT ::app::X509Helper2_MyNativeHelper__Class** type_info = (::app::X509Helper2_MyNativeHelper__Class**)(modloader::win::memory::resolve_rva(0x047099B0)); }
    namespace X509KeyUsageFlags__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::X509KeyUsageFlags__Enum__Class** type_info = (::app::X509KeyUsageFlags__Enum__Class**)(modloader::win::memory::resolve_rva(0x0472D150)); }
    namespace X509KeyUsageExtension { IL2CPP_MODLOADER_DLLEXPORT ::app::X509KeyUsageExtension__Class** type_info = (::app::X509KeyUsageExtension__Class**)(modloader::win::memory::resolve_rva(0x047543D0)); }
    namespace StoreName__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::StoreName__Enum__Class** type_info = (::app::StoreName__Enum__Class**)(modloader::win::memory::resolve_rva(0x04704B10)); }
    namespace X509Stores { IL2CPP_MODLOADER_DLLEXPORT ::app::X509Stores__Class** type_info = (::app::X509Stores__Class**)(modloader::win::memory::resolve_rva(0x04721198)); }
    namespace X509SubjectKeyIdentifierExtension { IL2CPP_MODLOADER_DLLEXPORT ::app::X509SubjectKeyIdentifierExtension__Class** type_info = (::app::X509SubjectKeyIdentifierExtension__Class**)(modloader::win::memory::resolve_rva(0x047312D0)); }
    namespace InvalidDataException { IL2CPP_MODLOADER_DLLEXPORT ::app::InvalidDataException__Class** type_info = (::app::InvalidDataException__Class**)(modloader::win::memory::resolve_rva(0x0470F018)); }
    namespace GZipStream { IL2CPP_MODLOADER_DLLEXPORT ::app::GZipStream__Class** type_info = (::app::GZipStream__Class**)(modloader::win::memory::resolve_rva(0x04719238)); }
    namespace DeflateStream { IL2CPP_MODLOADER_DLLEXPORT ::app::DeflateStream__Class** type_info = (::app::DeflateStream__Class**)(modloader::win::memory::resolve_rva(0x04783998)); }
    namespace DeflateStreamNative { IL2CPP_MODLOADER_DLLEXPORT ::app::DeflateStreamNative__Class** type_info = (::app::DeflateStreamNative__Class**)(modloader::win::memory::resolve_rva(0x04757450)); }
    namespace DeflateStreamNative_UnmanagedReadOrWrite { IL2CPP_MODLOADER_DLLEXPORT ::app::DeflateStreamNative_UnmanagedReadOrWrite__Class** type_info = (::app::DeflateStreamNative_UnmanagedReadOrWrite__Class**)(modloader::win::memory::resolve_rva(0x04711CF0)); }
    namespace DeflateStreamNative_SafeDeflateStreamHandle { IL2CPP_MODLOADER_DLLEXPORT ::app::DeflateStreamNative_SafeDeflateStreamHandle__Class** type_info = (::app::DeflateStreamNative_SafeDeflateStreamHandle__Class**)(modloader::win::memory::resolve_rva(0x047053A0)); }
    namespace DeflateStream_ReadMethod { IL2CPP_MODLOADER_DLLEXPORT ::app::DeflateStream_ReadMethod__Class** type_info = (::app::DeflateStream_ReadMethod__Class**)(modloader::win::memory::resolve_rva(0x04710078)); }
    namespace DeflateStream_WriteMethod { IL2CPP_MODLOADER_DLLEXPORT ::app::DeflateStream_WriteMethod__Class** type_info = (::app::DeflateStream_WriteMethod__Class**)(modloader::win::memory::resolve_rva(0x0475A990)); }
    namespace NetEventSource { IL2CPP_MODLOADER_DLLEXPORT ::app::NetEventSource__Class** type_info = (::app::NetEventSource__Class**)(modloader::win::memory::resolve_rva(0x04755FF8)); }
    namespace AuthenticationSchemes__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::AuthenticationSchemes__Enum__Class** type_info = (::app::AuthenticationSchemes__Enum__Class**)(modloader::win::memory::resolve_rva(0x04719058)); }
    namespace HttpListenerRequest { IL2CPP_MODLOADER_DLLEXPORT ::app::HttpListenerRequest__Class** type_info = (::app::HttpListenerRequest__Class**)(modloader::win::memory::resolve_rva(0x04715F70)); }
    namespace HttpListenerContext { IL2CPP_MODLOADER_DLLEXPORT ::app::HttpListenerContext__Class** type_info = (::app::HttpListenerContext__Class**)(modloader::win::memory::resolve_rva(0x04758FE0)); }
    namespace HttpListenerResponse { IL2CPP_MODLOADER_DLLEXPORT ::app::HttpListenerResponse__Class** type_info = (::app::HttpListenerResponse__Class**)(modloader::win::memory::resolve_rva(0x04727DC0)); }
    namespace ResponseStream { IL2CPP_MODLOADER_DLLEXPORT ::app::ResponseStream__Class** type_info = (::app::ResponseStream__Class**)(modloader::win::memory::resolve_rva(0x0478E1D0)); }
    namespace HttpConnection { IL2CPP_MODLOADER_DLLEXPORT ::app::HttpConnection__Class** type_info = (::app::HttpConnection__Class**)(modloader::win::memory::resolve_rva(0x04754908)); }
    namespace EndPointListener { IL2CPP_MODLOADER_DLLEXPORT ::app::EndPointListener__Class** type_info = (::app::EndPointListener__Class**)(modloader::win::memory::resolve_rva(0x04739A08)); }
    namespace HttpListener { IL2CPP_MODLOADER_DLLEXPORT ::app::HttpListener__Class** type_info = (::app::HttpListener__Class**)(modloader::win::memory::resolve_rva(0x04776758)); }
    namespace HttpListenerPrefixCollection { IL2CPP_MODLOADER_DLLEXPORT ::app::HttpListenerPrefixCollection__Class** type_info = (::app::HttpListenerPrefixCollection__Class**)(modloader::win::memory::resolve_rva(0x0476EA60)); }
    namespace ServiceNameStore { IL2CPP_MODLOADER_DLLEXPORT ::app::ServiceNameStore__Class** type_info = (::app::ServiceNameStore__Class**)(modloader::win::memory::resolve_rva(0x04793608)); }
    namespace HttpConnection__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::HttpConnection__Array__Class** type_info = (::app::HttpConnection__Array__Class**)(modloader::win::memory::resolve_rva(0x04780C28)); }
    namespace ListenerPrefix { IL2CPP_MODLOADER_DLLEXPORT ::app::ListenerPrefix__Class** type_info = (::app::ListenerPrefix__Class**)(modloader::win::memory::resolve_rva(0x04744868)); }
    namespace RequestStream { IL2CPP_MODLOADER_DLLEXPORT ::app::RequestStream__Class** type_info = (::app::RequestStream__Class**)(modloader::win::memory::resolve_rva(0x0470BE60)); }
    namespace HttpListenerRequest_GCCDelegate { IL2CPP_MODLOADER_DLLEXPORT ::app::HttpListenerRequest_GCCDelegate__Class** type_info = (::app::HttpListenerRequest_GCCDelegate__Class**)(modloader::win::memory::resolve_rva(0x04727E80)); }
    namespace CredentialCache_CredentialEnumerator { IL2CPP_MODLOADER_DLLEXPORT ::app::CredentialCache_CredentialEnumerator__Class** type_info = (::app::CredentialCache_CredentialEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04781F00)); }
    namespace ICredentials__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::ICredentials__Array__Class** type_info = (::app::ICredentials__Array__Class**)(modloader::win::memory::resolve_rva(0x0477BC50)); }
    namespace SystemNetworkCredential { IL2CPP_MODLOADER_DLLEXPORT ::app::SystemNetworkCredential__Class** type_info = (::app::SystemNetworkCredential__Class**)(modloader::win::memory::resolve_rva(0x047278A0)); }
    namespace CredentialHostKey { IL2CPP_MODLOADER_DLLEXPORT ::app::CredentialHostKey__Class** type_info = (::app::CredentialHostKey__Class**)(modloader::win::memory::resolve_rva(0x0472A9D0)); }
    namespace CredentialKey { IL2CPP_MODLOADER_DLLEXPORT ::app::CredentialKey__Class** type_info = (::app::CredentialKey__Class**)(modloader::win::memory::resolve_rva(0x04782148)); }
    namespace DnsEndPoint { IL2CPP_MODLOADER_DLLEXPORT ::app::DnsEndPoint__Class** type_info = (::app::DnsEndPoint__Class**)(modloader::win::memory::resolve_rva(0x047918D0)); }
    namespace HttpListenerException { IL2CPP_MODLOADER_DLLEXPORT ::app::HttpListenerException__Class** type_info = (::app::HttpListenerException__Class**)(modloader::win::memory::resolve_rva(0x0470EEB0)); }
    namespace HttpListenerRequestUriBuilder { IL2CPP_MODLOADER_DLLEXPORT ::app::HttpListenerRequestUriBuilder__Class** type_info = (::app::HttpListenerRequestUriBuilder__Class**)(modloader::win::memory::resolve_rva(0x04723E98)); }
    namespace HttpVersion { IL2CPP_MODLOADER_DLLEXPORT ::app::HttpVersion__Class** type_info = (::app::HttpVersion__Class**)(modloader::win::memory::resolve_rva(0x0471B0C8)); }
    namespace InternalException { IL2CPP_MODLOADER_DLLEXPORT ::app::InternalException__Class** type_info = (::app::InternalException__Class**)(modloader::win::memory::resolve_rva(0x04785F00)); }
    namespace WebException { IL2CPP_MODLOADER_DLLEXPORT ::app::WebException__Class** type_info = (::app::WebException__Class**)(modloader::win::memory::resolve_rva(0x0475D9F8)); }
    namespace WebRequestPrefixElement { IL2CPP_MODLOADER_DLLEXPORT ::app::WebRequestPrefixElement__Class** type_info = (::app::WebRequestPrefixElement__Class**)(modloader::win::memory::resolve_rva(0x047263B0)); }
    namespace HttpAbortDelegate { IL2CPP_MODLOADER_DLLEXPORT ::app::HttpAbortDelegate__Class** type_info = (::app::HttpAbortDelegate__Class**)(modloader::win::memory::resolve_rva(0x0470A8C8)); }
    namespace KnownHttpVerb { IL2CPP_MODLOADER_DLLEXPORT ::app::KnownHttpVerb__Class** type_info = (::app::KnownHttpVerb__Class**)(modloader::win::memory::resolve_rva(0x04781AC8)); }
    namespace ListDictionary { IL2CPP_MODLOADER_DLLEXPORT ::app::ListDictionary__Class** type_info = (::app::ListDictionary__Class**)(modloader::win::memory::resolve_rva(0x0477E478)); }
    namespace ListDictionary_DictionaryNode { IL2CPP_MODLOADER_DLLEXPORT ::app::ListDictionary_DictionaryNode__Class** type_info = (::app::ListDictionary_DictionaryNode__Class**)(modloader::win::memory::resolve_rva(0x0476B8B0)); }
    namespace ProtocolViolationException { IL2CPP_MODLOADER_DLLEXPORT ::app::ProtocolViolationException__Class** type_info = (::app::ProtocolViolationException__Class**)(modloader::win::memory::resolve_rva(0x04718030)); }
    namespace CaseInsensitiveAscii { IL2CPP_MODLOADER_DLLEXPORT ::app::CaseInsensitiveAscii__Class** type_info = (::app::CaseInsensitiveAscii__Class**)(modloader::win::memory::resolve_rva(0x04782BF8)); }
    namespace DelayedRegex { IL2CPP_MODLOADER_DLLEXPORT ::app::DelayedRegex__Class** type_info = (::app::DelayedRegex__Class**)(modloader::win::memory::resolve_rva(0x04700B40)); }
    namespace WebPermission { IL2CPP_MODLOADER_DLLEXPORT ::app::WebPermission__Class** type_info = (::app::WebPermission__Class**)(modloader::win::memory::resolve_rva(0x04735E38)); }
    namespace WebProxy { IL2CPP_MODLOADER_DLLEXPORT ::app::WebProxy__Class** type_info = (::app::WebProxy__Class**)(modloader::win::memory::resolve_rva(0x04729180)); }
    namespace Regex__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Regex__Array__Class** type_info = (::app::Regex__Array__Class**)(modloader::win::memory::resolve_rva(0x0475B170)); }
    namespace AutoWebProxyScriptEngine { IL2CPP_MODLOADER_DLLEXPORT ::app::AutoWebProxyScriptEngine__Class** type_info = (::app::AutoWebProxyScriptEngine__Class**)(modloader::win::memory::resolve_rva(0x04769600)); }
    namespace Uri__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::Uri__Array__Class** type_info = (::app::Uri__Array__Class**)(modloader::win::memory::resolve_rva(0x04794538)); }
    namespace ProxyChain_ProxyEnumerator { IL2CPP_MODLOADER_DLLEXPORT ::app::ProxyChain_ProxyEnumerator__Class** type_info = (::app::ProxyChain_ProxyEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0476E4E0)); }
    namespace ProxyScriptChain { IL2CPP_MODLOADER_DLLEXPORT ::app::ProxyScriptChain__Class** type_info = (::app::ProxyScriptChain__Class**)(modloader::win::memory::resolve_rva(0x04759F88)); }
    namespace WebRequest_WebProxyWrapper { IL2CPP_MODLOADER_DLLEXPORT ::app::WebRequest_WebProxyWrapper__Class** type_info = (::app::WebRequest_WebProxyWrapper__Class**)(modloader::win::memory::resolve_rva(0x0472B730)); }
    namespace WebRequest_c_DisplayClass78_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::WebRequest_c_DisplayClass78_0__Class** type_info = (::app::WebRequest_c_DisplayClass78_0__Class**)(modloader::win::memory::resolve_rva(0x0474B4D0)); }
    namespace WebRequest_c_DisplayClass79_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::WebRequest_c_DisplayClass79_0__Class** type_info = (::app::WebRequest_c_DisplayClass79_0__Class**)(modloader::win::memory::resolve_rva(0x04719AD8)); }
    namespace WebUtility_UrlDecoder { IL2CPP_MODLOADER_DLLEXPORT ::app::WebUtility_UrlDecoder__Class** type_info = (::app::WebUtility_UrlDecoder__Class**)(modloader::win::memory::resolve_rva(0x04759950)); }
    namespace LazyAsyncResult_ThreadContext { IL2CPP_MODLOADER_DLLEXPORT ::app::LazyAsyncResult_ThreadContext__Class** type_info = (::app::LazyAsyncResult_ThreadContext__Class**)(modloader::win::memory::resolve_rva(0x047779E0)); }
    namespace LazyAsyncResult { IL2CPP_MODLOADER_DLLEXPORT ::app::LazyAsyncResult__Class** type_info = (::app::LazyAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x0476F6B0)); }
    namespace BaseLoggingObject { IL2CPP_MODLOADER_DLLEXPORT ::app::BaseLoggingObject__Class** type_info = (::app::BaseLoggingObject__Class**)(modloader::win::memory::resolve_rva(0x0477E5C0)); }
    namespace FtpStatusCode__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::FtpStatusCode__Enum__Class** type_info = (::app::FtpStatusCode__Enum__Class**)(modloader::win::memory::resolve_rva(0x0472F548)); }
    namespace PooledStream { IL2CPP_MODLOADER_DLLEXPORT ::app::PooledStream__Class** type_info = (::app::PooledStream__Class**)(modloader::win::memory::resolve_rva(0x04763D38)); }
    namespace ConnectionPool { IL2CPP_MODLOADER_DLLEXPORT ::app::ConnectionPool__Class** type_info = (::app::ConnectionPool__Class**)(modloader::win::memory::resolve_rva(0x04791350)); }
    namespace InterlockedStack { IL2CPP_MODLOADER_DLLEXPORT ::app::InterlockedStack__Class** type_info = (::app::InterlockedStack__Class**)(modloader::win::memory::resolve_rva(0x04761390)); }
    namespace DirectProxy { IL2CPP_MODLOADER_DLLEXPORT ::app::DirectProxy__Class** type_info = (::app::DirectProxy__Class**)(modloader::win::memory::resolve_rva(0x04732B60)); }
    namespace ScatterGatherBuffers { IL2CPP_MODLOADER_DLLEXPORT ::app::ScatterGatherBuffers__Class** type_info = (::app::ScatterGatherBuffers__Class**)(modloader::win::memory::resolve_rva(0x047450E8)); }
    namespace ScatterGatherBuffers_MemoryChunk { IL2CPP_MODLOADER_DLLEXPORT ::app::ScatterGatherBuffers_MemoryChunk__Class** type_info = (::app::ScatterGatherBuffers_MemoryChunk__Class**)(modloader::win::memory::resolve_rva(0x04750D20)); }
    namespace Semaphore_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::Semaphore_1__Class** type_info = (::app::Semaphore_1__Class**)(modloader::win::memory::resolve_rva(0x04747898)); }
    namespace TimerThread_InfiniteTimerQueue { IL2CPP_MODLOADER_DLLEXPORT ::app::TimerThread_InfiniteTimerQueue__Class** type_info = (::app::TimerThread_InfiniteTimerQueue__Class**)(modloader::win::memory::resolve_rva(0x047774F0)); }
    namespace TimerThread_InfiniteTimer { IL2CPP_MODLOADER_DLLEXPORT ::app::TimerThread_InfiniteTimer__Class** type_info = (::app::TimerThread_InfiniteTimer__Class**)(modloader::win::memory::resolve_rva(0x0471A930)); }
    namespace WebProxyData { IL2CPP_MODLOADER_DLLEXPORT ::app::WebProxyData__Class** type_info = (::app::WebProxyData__Class**)(modloader::win::memory::resolve_rva(0x04708DB8)); }
    namespace EmptyWebProxy { IL2CPP_MODLOADER_DLLEXPORT ::app::EmptyWebProxy__Class** type_info = (::app::EmptyWebProxy__Class**)(modloader::win::memory::resolve_rva(0x047991B8)); }
    namespace ConnectionPool_AsyncConnectionPoolRequest { IL2CPP_MODLOADER_DLLEXPORT ::app::ConnectionPool_AsyncConnectionPoolRequest__Class** type_info = (::app::ConnectionPool_AsyncConnectionPoolRequest__Class**)(modloader::win::memory::resolve_rva(0x047754A8)); }
    namespace Cookie { IL2CPP_MODLOADER_DLLEXPORT ::app::Cookie__Class** type_info = (::app::Cookie__Class**)(modloader::win::memory::resolve_rva(0x0473DC50)); }
    namespace Comparer_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::Comparer_1__Class** type_info = (::app::Comparer_1__Class**)(modloader::win::memory::resolve_rva(0x04788778)); }
    namespace CookieTokenizer { IL2CPP_MODLOADER_DLLEXPORT ::app::CookieTokenizer__Class** type_info = (::app::CookieTokenizer__Class**)(modloader::win::memory::resolve_rva(0x0476AF70)); }
    namespace CookieTokenizer_RecognizedAttribute__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::CookieTokenizer_RecognizedAttribute__Array__Class** type_info = (::app::CookieTokenizer_RecognizedAttribute__Array__Class**)(modloader::win::memory::resolve_rva(0x0477D278)); }
    namespace CookieParser { IL2CPP_MODLOADER_DLLEXPORT ::app::CookieParser__Class** type_info = (::app::CookieParser__Class**)(modloader::win::memory::resolve_rva(0x047837C0)); }
    namespace CookieCollection_CookieCollectionEnumerator { IL2CPP_MODLOADER_DLLEXPORT ::app::CookieCollection_CookieCollectionEnumerator__Class** type_info = (::app::CookieCollection_CookieCollectionEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0472ACF0)); }
    namespace PathList { IL2CPP_MODLOADER_DLLEXPORT ::app::PathList__Class** type_info = (::app::PathList__Class**)(modloader::win::memory::resolve_rva(0x04720E20)); }
    namespace PathList_PathListComparer { IL2CPP_MODLOADER_DLLEXPORT ::app::PathList_PathListComparer__Class** type_info = (::app::PathList_PathListComparer__Class**)(modloader::win::memory::resolve_rva(0x047638E0)); }
    namespace CookieException { IL2CPP_MODLOADER_DLLEXPORT ::app::CookieException__Class** type_info = (::app::CookieException__Class**)(modloader::win::memory::resolve_rva(0x04714B08)); }
    namespace FileWebRequest { IL2CPP_MODLOADER_DLLEXPORT ::app::FileWebRequest__Class** type_info = (::app::FileWebRequest__Class**)(modloader::win::memory::resolve_rva(0x04704818)); }
    namespace FileWebRequestCreator { IL2CPP_MODLOADER_DLLEXPORT ::app::FileWebRequestCreator__Class** type_info = (::app::FileWebRequestCreator__Class**)(modloader::win::memory::resolve_rva(0x04751258)); }
    namespace FileWebStream { IL2CPP_MODLOADER_DLLEXPORT ::app::FileWebStream__Class** type_info = (::app::FileWebStream__Class**)(modloader::win::memory::resolve_rva(0x0470B160)); }
    namespace FileWebResponse { IL2CPP_MODLOADER_DLLEXPORT ::app::FileWebResponse__Class** type_info = (::app::FileWebResponse__Class**)(modloader::win::memory::resolve_rva(0x047065F0)); }
    namespace Base64Stream { IL2CPP_MODLOADER_DLLEXPORT ::app::Base64Stream__Class** type_info = (::app::Base64Stream__Class**)(modloader::win::memory::resolve_rva(0x04777EE0)); }
    namespace Base64Stream_ReadStateInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::Base64Stream_ReadStateInfo__Class** type_info = (::app::Base64Stream_ReadStateInfo__Class**)(modloader::win::memory::resolve_rva(0x047431D8)); }
    namespace Base64WriteStateInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::Base64WriteStateInfo__Class** type_info = (::app::Base64WriteStateInfo__Class**)(modloader::win::memory::resolve_rva(0x0477AD58)); }
    namespace Base64Stream_ReadAsyncResult { IL2CPP_MODLOADER_DLLEXPORT ::app::Base64Stream_ReadAsyncResult__Class** type_info = (::app::Base64Stream_ReadAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x04719540)); }
    namespace Base64Stream_WriteAsyncResult { IL2CPP_MODLOADER_DLLEXPORT ::app::Base64Stream_WriteAsyncResult__Class** type_info = (::app::Base64Stream_WriteAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x0476FEA8)); }
    namespace WebClient { IL2CPP_MODLOADER_DLLEXPORT ::app::WebClient__Class** type_info = (::app::WebClient__Class**)(modloader::win::memory::resolve_rva(0x047155A0)); }
    namespace WebClient_ProgressData { IL2CPP_MODLOADER_DLLEXPORT ::app::WebClient_ProgressData__Class** type_info = (::app::WebClient_ProgressData__Class**)(modloader::win::memory::resolve_rva(0x0477AAB8)); }
    namespace OpenReadCompletedEventHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::OpenReadCompletedEventHandler__Class** type_info = (::app::OpenReadCompletedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0471B8A0)); }
    namespace OpenReadCompletedEventArgs { IL2CPP_MODLOADER_DLLEXPORT ::app::OpenReadCompletedEventArgs__Class** type_info = (::app::OpenReadCompletedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04722C18)); }
    namespace OpenWriteCompletedEventHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::OpenWriteCompletedEventHandler__Class** type_info = (::app::OpenWriteCompletedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04712F98)); }
}

#include <Il2CppModLoader/windows_api/memory.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/app/types/ServerCertValidationCallback.h>
#include <Il2CppModLoader/app/types/RemoteCertificateValidationCallback.h>
#include <Il2CppModLoader/app/types/SslPolicyErrors__Enum.h>
#include <Il2CppModLoader/app/types/ChainValidationHelper.h>
#include <Il2CppModLoader/app/types/LocalCertSelectionCallback.h>
#include <Il2CppModLoader/app/types/WebExceptionStatus__Enum.h>
#include <Il2CppModLoader/app/types/MonoTlsStream.h>
#include <Il2CppModLoader/app/types/NetworkStream.h>
#include <Il2CppModLoader/app/types/AddressFamily__Enum.h>
#include <Il2CppModLoader/app/types/Socket.h>
#include <Il2CppModLoader/app/types/SafeSocketHandle.h>
#include <Il2CppModLoader/app/types/SocketAddress.h>
#include <Il2CppModLoader/app/types/IOAsyncCallback.h>
#include <Il2CppModLoader/app/types/SocketOperation__Enum.h>
#include <Il2CppModLoader/app/types/SocketAsyncResult.h>
#include <Il2CppModLoader/app/types/IPAddress.h>
#include <Il2CppModLoader/app/types/IPAddress__Array.h>
#include <Il2CppModLoader/app/types/BufferOffsetSize_1.h>
#include <Il2CppModLoader/app/types/BufferOffsetSize_1__Array.h>
#include <Il2CppModLoader/app/types/WebRequest.h>
#include <Il2CppModLoader/app/types/HttpWebRequest_NtlmAuthState__Enum.h>
#include <Il2CppModLoader/app/types/HttpWebRequest.h>
#include <Il2CppModLoader/app/types/TimerThread_TimerQueue.h>
#include <Il2CppModLoader/app/types/TimerThread_TimerNode.h>
#include <Il2CppModLoader/app/types/TimerThread_Callback.h>
#include <Il2CppModLoader/app/types/RequestCacheLevel__Enum.h>
#include <Il2CppModLoader/app/types/RequestCachePolicy.h>
#include <Il2CppModLoader/app/types/RequestCacheProtocol.h>
#include <Il2CppModLoader/app/types/RequestCacheBinding.h>
#include <Il2CppModLoader/app/types/RequestCache.h>
#include <Il2CppModLoader/app/types/WebRequest_DesignerWebRequestCreate.h>
#include <Il2CppModLoader/app/types/IWebRequestCreate.h>
#include <Il2CppModLoader/app/types/NameObjectCollectionBase.h>
#include <Il2CppModLoader/app/types/NameValueCollection.h>
#include <Il2CppModLoader/app/types/WebHeaderCollection.h>
#include <Il2CppModLoader/app/types/NameObjectCollectionBase_NameObjectEntry.h>
#include <Il2CppModLoader/app/types/NameObjectCollectionBase_KeysCollection.h>
#include <Il2CppModLoader/app/types/HeaderInfoTable.h>
#include <Il2CppModLoader/app/types/HeaderInfo.h>
#include <Il2CppModLoader/app/types/HeaderParser.h>
#include <Il2CppModLoader/app/types/WebHeaderCollection_RfcChar__Enum__Array.h>
#include <Il2CppModLoader/app/types/WebResponse.h>
#include <Il2CppModLoader/app/types/CookieContainer.h>
#include <Il2CppModLoader/app/types/HeaderVariantInfo__Array.h>
#include <Il2CppModLoader/app/types/ServicePoint.h>
#include <Il2CppModLoader/app/types/IPHostEntry.h>
#include <Il2CppModLoader/app/types/WebConnectionGroup.h>
#include <Il2CppModLoader/app/types/WebConnectionGroup_ConnectionState.h>
#include <Il2CppModLoader/app/types/WebConnection.h>
#include <Il2CppModLoader/app/types/IWebConnectionState.h>
#include <Il2CppModLoader/app/types/WebConnection_AbortHelper.h>
#include <Il2CppModLoader/app/types/WebConnectionData.h>
#include <Il2CppModLoader/app/types/MonoChunkStream.h>
#include <Il2CppModLoader/app/types/IPEndPoint.h>
#include <Il2CppModLoader/app/types/WebConnectionStream.h>
#include <Il2CppModLoader/app/types/HttpStatusCode__Enum.h>
#include <Il2CppModLoader/app/types/HttpWebResponse.h>
#include <Il2CppModLoader/app/types/CookieCollection.h>
#include <Il2CppModLoader/app/types/SimpleAsyncResult.h>
#include <Il2CppModLoader/app/types/WebAsyncResult.h>
#include <Il2CppModLoader/app/types/SimpleAsyncCallback.h>
#include <Il2CppModLoader/app/types/ValidationResult.h>
#include <Il2CppModLoader/app/types/MobileAuthenticatedStream_c_DisplayClass66_0.h>
#include <Il2CppModLoader/app/types/CallbackHelpers_c_DisplayClass0_0.h>
#include <Il2CppModLoader/app/types/CallbackHelpers_c_DisplayClass5_0.h>
#include <Il2CppModLoader/app/types/CallbackHelpers_c_DisplayClass8_0.h>
#include <Il2CppModLoader/app/types/NtlmSession.h>
#include <Il2CppModLoader/app/types/MessageBase.h>
#include <Il2CppModLoader/app/types/Type1Message.h>
#include <Il2CppModLoader/app/types/Authorization.h>
#include <Il2CppModLoader/app/types/NtlmClient.h>
#include <Il2CppModLoader/app/types/NtlmClient_c.h>
#include <Il2CppModLoader/app/types/SafeProcessHandle.h>
#include <Il2CppModLoader/app/types/UriBuilder.h>
#include <Il2CppModLoader/app/types/InvariantComparer.h>
#include <Il2CppModLoader/app/types/UriParser_BuiltInUriParser.h>
#include <Il2CppModLoader/app/types/IOSelectorJob.h>
#include <Il2CppModLoader/app/types/DescriptionAttribute.h>
#include <Il2CppModLoader/app/types/TypeConverter.h>
#include <Il2CppModLoader/app/types/ITypeDescriptorContext.h>
#include <Il2CppModLoader/app/types/PropertyDescriptorCollection.h>
#include <Il2CppModLoader/app/types/MemberDescriptor.h>
#include <Il2CppModLoader/app/types/PropertyDescriptor.h>
#include <Il2CppModLoader/app/types/AttributeCollection.h>
#include <Il2CppModLoader/app/types/AttributeCollection_AttributeEntry__Array.h>
#include <Il2CppModLoader/app/types/ArrayConverter_ArrayPropertyDescriptor.h>
#include <Il2CppModLoader/app/types/PropertyDescriptor__Array.h>
#include <Il2CppModLoader/app/types/TypeConverter_StandardValuesCollection.h>
#include <Il2CppModLoader/app/types/ElapsedEventHandler.h>
#include <Il2CppModLoader/app/types/ElapsedEventArgs.h>
#include <Il2CppModLoader/app/types/Component.h>
#include <Il2CppModLoader/app/types/Timer_1.h>
#include <Il2CppModLoader/app/types/ISite.h>
#include <Il2CppModLoader/app/types/EventHandlerList.h>
#include <Il2CppModLoader/app/types/EventHandlerList_ListEntry.h>
#include <Il2CppModLoader/app/types/ISynchronizeInvoke.h>
#include <Il2CppModLoader/app/types/RegexOptions__Enum.h>
#include <Il2CppModLoader/app/types/Regex.h>
#include <Il2CppModLoader/app/types/ExclusiveReference.h>
#include <Il2CppModLoader/app/types/RegexRunner.h>

namespace app::classes::types {
    namespace ServerCertValidationCallback { IL2CPP_MODLOADER_DLLEXPORT ::app::ServerCertValidationCallback__Class** type_info = (::app::ServerCertValidationCallback__Class**)(modloader::win::memory::resolve_rva(0x04726900)); }
    namespace RemoteCertificateValidationCallback { IL2CPP_MODLOADER_DLLEXPORT ::app::RemoteCertificateValidationCallback__Class** type_info = (::app::RemoteCertificateValidationCallback__Class**)(modloader::win::memory::resolve_rva(0x04727530)); }
    namespace SslPolicyErrors__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::SslPolicyErrors__Enum__Class** type_info = (::app::SslPolicyErrors__Enum__Class**)(modloader::win::memory::resolve_rva(0x0471D588)); }
    namespace ChainValidationHelper { IL2CPP_MODLOADER_DLLEXPORT ::app::ChainValidationHelper__Class** type_info = (::app::ChainValidationHelper__Class**)(modloader::win::memory::resolve_rva(0x04703A40)); }
    namespace LocalCertSelectionCallback { IL2CPP_MODLOADER_DLLEXPORT ::app::LocalCertSelectionCallback__Class** type_info = (::app::LocalCertSelectionCallback__Class**)(modloader::win::memory::resolve_rva(0x0473FD50)); }
    namespace WebExceptionStatus__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::WebExceptionStatus__Enum__Class** type_info = (::app::WebExceptionStatus__Enum__Class**)(modloader::win::memory::resolve_rva(0x04707668)); }
    namespace MonoTlsStream { IL2CPP_MODLOADER_DLLEXPORT ::app::MonoTlsStream__Class** type_info = (::app::MonoTlsStream__Class**)(modloader::win::memory::resolve_rva(0x0478B4D8)); }
    namespace NetworkStream { IL2CPP_MODLOADER_DLLEXPORT ::app::NetworkStream__Class** type_info = (::app::NetworkStream__Class**)(modloader::win::memory::resolve_rva(0x04710DF0)); }
    namespace AddressFamily__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::AddressFamily__Enum__Class** type_info = (::app::AddressFamily__Enum__Class**)(modloader::win::memory::resolve_rva(0x04736E48)); }
    namespace Socket { IL2CPP_MODLOADER_DLLEXPORT ::app::Socket__Class** type_info = (::app::Socket__Class**)(modloader::win::memory::resolve_rva(0x0474A568)); }
    namespace SafeSocketHandle { IL2CPP_MODLOADER_DLLEXPORT ::app::SafeSocketHandle__Class** type_info = (::app::SafeSocketHandle__Class**)(modloader::win::memory::resolve_rva(0x0473C310)); }
    namespace SocketAddress { IL2CPP_MODLOADER_DLLEXPORT ::app::SocketAddress__Class** type_info = (::app::SocketAddress__Class**)(modloader::win::memory::resolve_rva(0x04761F20)); }
    namespace IOAsyncCallback { IL2CPP_MODLOADER_DLLEXPORT ::app::IOAsyncCallback__Class** type_info = (::app::IOAsyncCallback__Class**)(modloader::win::memory::resolve_rva(0x047971C8)); }
    namespace SocketOperation__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::SocketOperation__Enum__Class** type_info = (::app::SocketOperation__Enum__Class**)(modloader::win::memory::resolve_rva(0x0476C9B8)); }
    namespace SocketAsyncResult { IL2CPP_MODLOADER_DLLEXPORT ::app::SocketAsyncResult__Class** type_info = (::app::SocketAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x0472C388)); }
    namespace IPAddress { IL2CPP_MODLOADER_DLLEXPORT ::app::IPAddress__Class** type_info = (::app::IPAddress__Class**)(modloader::win::memory::resolve_rva(0x0475CAE0)); }
    namespace IPAddress__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::IPAddress__Array__Class** type_info = (::app::IPAddress__Array__Class**)(modloader::win::memory::resolve_rva(0x047415C0)); }
    namespace BufferOffsetSize_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::BufferOffsetSize_1__Class** type_info = (::app::BufferOffsetSize_1__Class**)(modloader::win::memory::resolve_rva(0x047420B0)); }
    namespace BufferOffsetSize_1__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::BufferOffsetSize_1__Array__Class** type_info = (::app::BufferOffsetSize_1__Array__Class**)(modloader::win::memory::resolve_rva(0x04730F40)); }
    namespace WebRequest { IL2CPP_MODLOADER_DLLEXPORT ::app::WebRequest__Class** type_info = (::app::WebRequest__Class**)(modloader::win::memory::resolve_rva(0x047180E0)); }
    namespace HttpWebRequest_NtlmAuthState__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::HttpWebRequest_NtlmAuthState__Enum__Class** type_info = (::app::HttpWebRequest_NtlmAuthState__Enum__Class**)(modloader::win::memory::resolve_rva(0x0472DB78)); }
    namespace HttpWebRequest { IL2CPP_MODLOADER_DLLEXPORT ::app::HttpWebRequest__Class** type_info = (::app::HttpWebRequest__Class**)(modloader::win::memory::resolve_rva(0x04797D90)); }
    namespace TimerThread_TimerQueue { IL2CPP_MODLOADER_DLLEXPORT ::app::TimerThread_TimerQueue__Class** type_info = (::app::TimerThread_TimerQueue__Class**)(modloader::win::memory::resolve_rva(0x04769590)); }
    namespace TimerThread_TimerNode { IL2CPP_MODLOADER_DLLEXPORT ::app::TimerThread_TimerNode__Class** type_info = (::app::TimerThread_TimerNode__Class**)(modloader::win::memory::resolve_rva(0x047548B8)); }
    namespace TimerThread_Callback { IL2CPP_MODLOADER_DLLEXPORT ::app::TimerThread_Callback__Class** type_info = (::app::TimerThread_Callback__Class**)(modloader::win::memory::resolve_rva(0x04731FA8)); }
    namespace RequestCacheLevel__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::RequestCacheLevel__Enum__Class** type_info = (::app::RequestCacheLevel__Enum__Class**)(modloader::win::memory::resolve_rva(0x04755218)); }
    namespace RequestCachePolicy { IL2CPP_MODLOADER_DLLEXPORT ::app::RequestCachePolicy__Class** type_info = (::app::RequestCachePolicy__Class**)(modloader::win::memory::resolve_rva(0x04703F20)); }
    namespace RequestCacheProtocol { IL2CPP_MODLOADER_DLLEXPORT ::app::RequestCacheProtocol__Class** type_info = (::app::RequestCacheProtocol__Class**)(modloader::win::memory::resolve_rva(0x047345C8)); }
    namespace RequestCacheBinding { IL2CPP_MODLOADER_DLLEXPORT ::app::RequestCacheBinding__Class** type_info = (::app::RequestCacheBinding__Class**)(modloader::win::memory::resolve_rva(0x04732568)); }
    namespace RequestCache { IL2CPP_MODLOADER_DLLEXPORT ::app::RequestCache__Class** type_info = (::app::RequestCache__Class**)(modloader::win::memory::resolve_rva(0x047308C8)); }
    namespace WebRequest_DesignerWebRequestCreate { IL2CPP_MODLOADER_DLLEXPORT ::app::WebRequest_DesignerWebRequestCreate__Class** type_info = (::app::WebRequest_DesignerWebRequestCreate__Class**)(modloader::win::memory::resolve_rva(0x04734710)); }
    namespace IWebRequestCreate { IL2CPP_MODLOADER_DLLEXPORT ::app::IWebRequestCreate__Class** type_info = (::app::IWebRequestCreate__Class**)(modloader::win::memory::resolve_rva(0x0473AC28)); }
    namespace NameObjectCollectionBase { IL2CPP_MODLOADER_DLLEXPORT ::app::NameObjectCollectionBase__Class** type_info = (::app::NameObjectCollectionBase__Class**)(modloader::win::memory::resolve_rva(0x0478A8F0)); }
    namespace NameValueCollection { IL2CPP_MODLOADER_DLLEXPORT ::app::NameValueCollection__Class** type_info = (::app::NameValueCollection__Class**)(modloader::win::memory::resolve_rva(0x047136B0)); }
    namespace WebHeaderCollection { IL2CPP_MODLOADER_DLLEXPORT ::app::WebHeaderCollection__Class** type_info = (::app::WebHeaderCollection__Class**)(modloader::win::memory::resolve_rva(0x0477B2E8)); }
    namespace NameObjectCollectionBase_NameObjectEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::NameObjectCollectionBase_NameObjectEntry__Class** type_info = (::app::NameObjectCollectionBase_NameObjectEntry__Class**)(modloader::win::memory::resolve_rva(0x047262C0)); }
    namespace NameObjectCollectionBase_KeysCollection { IL2CPP_MODLOADER_DLLEXPORT ::app::NameObjectCollectionBase_KeysCollection__Class** type_info = (::app::NameObjectCollectionBase_KeysCollection__Class**)(modloader::win::memory::resolve_rva(0x04732560)); }
    namespace HeaderInfoTable { IL2CPP_MODLOADER_DLLEXPORT ::app::HeaderInfoTable__Class** type_info = (::app::HeaderInfoTable__Class**)(modloader::win::memory::resolve_rva(0x04744EB0)); }
    namespace HeaderInfo { IL2CPP_MODLOADER_DLLEXPORT ::app::HeaderInfo__Class** type_info = (::app::HeaderInfo__Class**)(modloader::win::memory::resolve_rva(0x0477B1A8)); }
    namespace HeaderParser { IL2CPP_MODLOADER_DLLEXPORT ::app::HeaderParser__Class** type_info = (::app::HeaderParser__Class**)(modloader::win::memory::resolve_rva(0x0473B0F8)); }
    namespace WebHeaderCollection_RfcChar__Enum__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::WebHeaderCollection_RfcChar__Enum__Array__Class** type_info = (::app::WebHeaderCollection_RfcChar__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x0477A7B8)); }
    namespace WebResponse { IL2CPP_MODLOADER_DLLEXPORT ::app::WebResponse__Class** type_info = (::app::WebResponse__Class**)(modloader::win::memory::resolve_rva(0x047516B0)); }
    namespace CookieContainer { IL2CPP_MODLOADER_DLLEXPORT ::app::CookieContainer__Class** type_info = (::app::CookieContainer__Class**)(modloader::win::memory::resolve_rva(0x04722A70)); }
    namespace HeaderVariantInfo__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::HeaderVariantInfo__Array__Class** type_info = (::app::HeaderVariantInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04722EA8)); }
    namespace ServicePoint { IL2CPP_MODLOADER_DLLEXPORT ::app::ServicePoint__Class** type_info = (::app::ServicePoint__Class**)(modloader::win::memory::resolve_rva(0x04707FB8)); }
    namespace IPHostEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::IPHostEntry__Class** type_info = (::app::IPHostEntry__Class**)(modloader::win::memory::resolve_rva(0x0474F468)); }
    namespace WebConnectionGroup { IL2CPP_MODLOADER_DLLEXPORT ::app::WebConnectionGroup__Class** type_info = (::app::WebConnectionGroup__Class**)(modloader::win::memory::resolve_rva(0x047055F8)); }
    namespace WebConnectionGroup_ConnectionState { IL2CPP_MODLOADER_DLLEXPORT ::app::WebConnectionGroup_ConnectionState__Class** type_info = (::app::WebConnectionGroup_ConnectionState__Class**)(modloader::win::memory::resolve_rva(0x0478AB68)); }
    namespace WebConnection { IL2CPP_MODLOADER_DLLEXPORT ::app::WebConnection__Class** type_info = (::app::WebConnection__Class**)(modloader::win::memory::resolve_rva(0x04740A50)); }
    namespace IWebConnectionState { IL2CPP_MODLOADER_DLLEXPORT ::app::IWebConnectionState__Class** type_info = (::app::IWebConnectionState__Class**)(modloader::win::memory::resolve_rva(0x0477D1E0)); }
    namespace WebConnection_AbortHelper { IL2CPP_MODLOADER_DLLEXPORT ::app::WebConnection_AbortHelper__Class** type_info = (::app::WebConnection_AbortHelper__Class**)(modloader::win::memory::resolve_rva(0x0475C350)); }
    namespace WebConnectionData { IL2CPP_MODLOADER_DLLEXPORT ::app::WebConnectionData__Class** type_info = (::app::WebConnectionData__Class**)(modloader::win::memory::resolve_rva(0x0477E9D8)); }
    namespace MonoChunkStream { IL2CPP_MODLOADER_DLLEXPORT ::app::MonoChunkStream__Class** type_info = (::app::MonoChunkStream__Class**)(modloader::win::memory::resolve_rva(0x0476A4E0)); }
    namespace IPEndPoint { IL2CPP_MODLOADER_DLLEXPORT ::app::IPEndPoint__Class** type_info = (::app::IPEndPoint__Class**)(modloader::win::memory::resolve_rva(0x04779A68)); }
    namespace WebConnectionStream { IL2CPP_MODLOADER_DLLEXPORT ::app::WebConnectionStream__Class** type_info = (::app::WebConnectionStream__Class**)(modloader::win::memory::resolve_rva(0x0471B1C8)); }
    namespace HttpStatusCode__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::HttpStatusCode__Enum__Class** type_info = (::app::HttpStatusCode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04714280)); }
    namespace HttpWebResponse { IL2CPP_MODLOADER_DLLEXPORT ::app::HttpWebResponse__Class** type_info = (::app::HttpWebResponse__Class**)(modloader::win::memory::resolve_rva(0x047722A8)); }
    namespace CookieCollection { IL2CPP_MODLOADER_DLLEXPORT ::app::CookieCollection__Class** type_info = (::app::CookieCollection__Class**)(modloader::win::memory::resolve_rva(0x047923A8)); }
    namespace SimpleAsyncResult { IL2CPP_MODLOADER_DLLEXPORT ::app::SimpleAsyncResult__Class** type_info = (::app::SimpleAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x0471DA78)); }
    namespace WebAsyncResult { IL2CPP_MODLOADER_DLLEXPORT ::app::WebAsyncResult__Class** type_info = (::app::WebAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x0476ED78)); }
    namespace SimpleAsyncCallback { IL2CPP_MODLOADER_DLLEXPORT ::app::SimpleAsyncCallback__Class** type_info = (::app::SimpleAsyncCallback__Class**)(modloader::win::memory::resolve_rva(0x047942D8)); }
    namespace ValidationResult { IL2CPP_MODLOADER_DLLEXPORT ::app::ValidationResult__Class** type_info = (::app::ValidationResult__Class**)(modloader::win::memory::resolve_rva(0x04719170)); }
    namespace MobileAuthenticatedStream_c_DisplayClass66_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::MobileAuthenticatedStream_c_DisplayClass66_0__Class** type_info = (::app::MobileAuthenticatedStream_c_DisplayClass66_0__Class**)(modloader::win::memory::resolve_rva(0x04717A48)); }
    namespace CallbackHelpers_c_DisplayClass0_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::CallbackHelpers_c_DisplayClass0_0__Class** type_info = (::app::CallbackHelpers_c_DisplayClass0_0__Class**)(modloader::win::memory::resolve_rva(0x04734180)); }
    namespace CallbackHelpers_c_DisplayClass5_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::CallbackHelpers_c_DisplayClass5_0__Class** type_info = (::app::CallbackHelpers_c_DisplayClass5_0__Class**)(modloader::win::memory::resolve_rva(0x0478EFD0)); }
    namespace CallbackHelpers_c_DisplayClass8_0 { IL2CPP_MODLOADER_DLLEXPORT ::app::CallbackHelpers_c_DisplayClass8_0__Class** type_info = (::app::CallbackHelpers_c_DisplayClass8_0__Class**)(modloader::win::memory::resolve_rva(0x0471C328)); }
    namespace NtlmSession { IL2CPP_MODLOADER_DLLEXPORT ::app::NtlmSession__Class** type_info = (::app::NtlmSession__Class**)(modloader::win::memory::resolve_rva(0x0478E0C0)); }
    namespace MessageBase { IL2CPP_MODLOADER_DLLEXPORT ::app::MessageBase__Class** type_info = (::app::MessageBase__Class**)(modloader::win::memory::resolve_rva(0x04702AE8)); }
    namespace Type1Message { IL2CPP_MODLOADER_DLLEXPORT ::app::Type1Message__Class** type_info = (::app::Type1Message__Class**)(modloader::win::memory::resolve_rva(0x04716A90)); }
    namespace Authorization { IL2CPP_MODLOADER_DLLEXPORT ::app::Authorization__Class** type_info = (::app::Authorization__Class**)(modloader::win::memory::resolve_rva(0x0474C108)); }
    namespace NtlmClient { IL2CPP_MODLOADER_DLLEXPORT ::app::NtlmClient__Class** type_info = (::app::NtlmClient__Class**)(modloader::win::memory::resolve_rva(0x047675C0)); }
    namespace NtlmClient_c { IL2CPP_MODLOADER_DLLEXPORT ::app::NtlmClient_c__Class** type_info = (::app::NtlmClient_c__Class**)(modloader::win::memory::resolve_rva(0x0476B308)); }
    namespace SafeProcessHandle { IL2CPP_MODLOADER_DLLEXPORT ::app::SafeProcessHandle__Class** type_info = (::app::SafeProcessHandle__Class**)(modloader::win::memory::resolve_rva(0x0475C8A0)); }
    namespace UriBuilder { IL2CPP_MODLOADER_DLLEXPORT ::app::UriBuilder__Class** type_info = (::app::UriBuilder__Class**)(modloader::win::memory::resolve_rva(0x0475E208)); }
    namespace InvariantComparer { IL2CPP_MODLOADER_DLLEXPORT ::app::InvariantComparer__Class** type_info = (::app::InvariantComparer__Class**)(modloader::win::memory::resolve_rva(0x0477CE98)); }
    namespace UriParser_BuiltInUriParser { IL2CPP_MODLOADER_DLLEXPORT ::app::UriParser_BuiltInUriParser__Class** type_info = (::app::UriParser_BuiltInUriParser__Class**)(modloader::win::memory::resolve_rva(0x04710870)); }
    namespace IOSelectorJob { IL2CPP_MODLOADER_DLLEXPORT ::app::IOSelectorJob__Class** type_info = (::app::IOSelectorJob__Class**)(modloader::win::memory::resolve_rva(0x04777918)); }
    namespace DescriptionAttribute { IL2CPP_MODLOADER_DLLEXPORT ::app::DescriptionAttribute__Class** type_info = (::app::DescriptionAttribute__Class**)(modloader::win::memory::resolve_rva(0x04785A30)); }
    namespace TypeConverter { IL2CPP_MODLOADER_DLLEXPORT ::app::TypeConverter__Class** type_info = (::app::TypeConverter__Class**)(modloader::win::memory::resolve_rva(0x04753398)); }
    namespace ITypeDescriptorContext { IL2CPP_MODLOADER_DLLEXPORT ::app::ITypeDescriptorContext__Class** type_info = (::app::ITypeDescriptorContext__Class**)(modloader::win::memory::resolve_rva(0x047597C0)); }
    namespace PropertyDescriptorCollection { IL2CPP_MODLOADER_DLLEXPORT ::app::PropertyDescriptorCollection__Class** type_info = (::app::PropertyDescriptorCollection__Class**)(modloader::win::memory::resolve_rva(0x04783D10)); }
    namespace MemberDescriptor { IL2CPP_MODLOADER_DLLEXPORT ::app::MemberDescriptor__Class** type_info = (::app::MemberDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04774F78)); }
    namespace PropertyDescriptor { IL2CPP_MODLOADER_DLLEXPORT ::app::PropertyDescriptor__Class** type_info = (::app::PropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x047055F0)); }
    namespace AttributeCollection { IL2CPP_MODLOADER_DLLEXPORT ::app::AttributeCollection__Class** type_info = (::app::AttributeCollection__Class**)(modloader::win::memory::resolve_rva(0x0478BF90)); }
    namespace AttributeCollection_AttributeEntry__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::AttributeCollection_AttributeEntry__Array__Class** type_info = (::app::AttributeCollection_AttributeEntry__Array__Class**)(modloader::win::memory::resolve_rva(0x047924C8)); }
    namespace ArrayConverter_ArrayPropertyDescriptor { IL2CPP_MODLOADER_DLLEXPORT ::app::ArrayConverter_ArrayPropertyDescriptor__Class** type_info = (::app::ArrayConverter_ArrayPropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04780C38)); }
    namespace PropertyDescriptor__Array { IL2CPP_MODLOADER_DLLEXPORT ::app::PropertyDescriptor__Array__Class** type_info = (::app::PropertyDescriptor__Array__Class**)(modloader::win::memory::resolve_rva(0x0476C998)); }
    namespace TypeConverter_StandardValuesCollection { IL2CPP_MODLOADER_DLLEXPORT ::app::TypeConverter_StandardValuesCollection__Class** type_info = (::app::TypeConverter_StandardValuesCollection__Class**)(modloader::win::memory::resolve_rva(0x04764220)); }
    namespace ElapsedEventHandler { IL2CPP_MODLOADER_DLLEXPORT ::app::ElapsedEventHandler__Class** type_info = (::app::ElapsedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04799A30)); }
    namespace ElapsedEventArgs { IL2CPP_MODLOADER_DLLEXPORT ::app::ElapsedEventArgs__Class** type_info = (::app::ElapsedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04759400)); }
    namespace Component { IL2CPP_MODLOADER_DLLEXPORT ::app::Component__Class** type_info = (::app::Component__Class**)(modloader::win::memory::resolve_rva(0x0479A0C0)); }
    namespace Timer_1 { IL2CPP_MODLOADER_DLLEXPORT ::app::Timer_1__Class** type_info = (::app::Timer_1__Class**)(modloader::win::memory::resolve_rva(0x04717B50)); }
    namespace ISite { IL2CPP_MODLOADER_DLLEXPORT ::app::ISite__Class** type_info = (::app::ISite__Class**)(modloader::win::memory::resolve_rva(0x04771F30)); }
    namespace EventHandlerList { IL2CPP_MODLOADER_DLLEXPORT ::app::EventHandlerList__Class** type_info = (::app::EventHandlerList__Class**)(modloader::win::memory::resolve_rva(0x0476F738)); }
    namespace EventHandlerList_ListEntry { IL2CPP_MODLOADER_DLLEXPORT ::app::EventHandlerList_ListEntry__Class** type_info = (::app::EventHandlerList_ListEntry__Class**)(modloader::win::memory::resolve_rva(0x0479A208)); }
    namespace ISynchronizeInvoke { IL2CPP_MODLOADER_DLLEXPORT ::app::ISynchronizeInvoke__Class** type_info = (::app::ISynchronizeInvoke__Class**)(modloader::win::memory::resolve_rva(0x0477FF38)); }
    namespace RegexOptions__Enum { IL2CPP_MODLOADER_DLLEXPORT ::app::RegexOptions__Enum__Class** type_info = (::app::RegexOptions__Enum__Class**)(modloader::win::memory::resolve_rva(0x04708478)); }
    namespace Regex { IL2CPP_MODLOADER_DLLEXPORT ::app::Regex__Class** type_info = (::app::Regex__Class**)(modloader::win::memory::resolve_rva(0x04768EE0)); }
    namespace ExclusiveReference { IL2CPP_MODLOADER_DLLEXPORT ::app::ExclusiveReference__Class** type_info = (::app::ExclusiveReference__Class**)(modloader::win::memory::resolve_rva(0x04712BE0)); }
    namespace RegexRunner { IL2CPP_MODLOADER_DLLEXPORT ::app::RegexRunner__Class** type_info = (::app::RegexRunner__Class**)(modloader::win::memory::resolve_rva(0x0474D630)); }
}

#include <Il2CppModLoader/app/types/AuthenticationManager.h>
#include <Il2CppModLoader/app/types/Base64Stream.h>
#include <Il2CppModLoader/app/types/Base64Stream_ReadAsyncResult.h>
#include <Il2CppModLoader/app/types/Base64Stream_ReadStateInfo.h>
#include <Il2CppModLoader/app/types/Base64Stream_WriteAsyncResult.h>
#include <Il2CppModLoader/app/types/Base64WriteStateInfo.h>
#include <Il2CppModLoader/app/types/BasicClient.h>
#include <Il2CppModLoader/app/types/ChunkedInputStream.h>
#include <Il2CppModLoader/app/types/ChunkedInputStream_ReadBufferState.h>
#include <Il2CppModLoader/app/types/Comparer_1.h>
#include <Il2CppModLoader/app/types/CompletionDelegate.h>
#include <Il2CppModLoader/app/types/ConnectionPool_AsyncConnectionPoolRequest.h>
#include <Il2CppModLoader/app/types/Cookie.h>
#include <Il2CppModLoader/app/types/CookieCollection_CookieCollectionEnumerator.h>
#include <Il2CppModLoader/app/types/CookieException.h>
#include <Il2CppModLoader/app/types/CookieParser.h>
#include <Il2CppModLoader/app/types/CookieTokenizer.h>
#include <Il2CppModLoader/app/types/CookieTokenizer_RecognizedAttribute__Array.h>
#include <Il2CppModLoader/app/types/DefaultCertificatePolicy.h>
#include <Il2CppModLoader/app/types/DigestClient.h>
#include <Il2CppModLoader/app/types/DigestHeaderParser.h>
#include <Il2CppModLoader/app/types/DigestSession.h>
#include <Il2CppModLoader/app/types/Dns_GetHostAddressesCallback.h>
#include <Il2CppModLoader/app/types/Dns_GetHostByNameCallback.h>
#include <Il2CppModLoader/app/types/Dns_GetHostEntryIPCallback.h>
#include <Il2CppModLoader/app/types/Dns_GetHostEntryNameCallback.h>
#include <Il2CppModLoader/app/types/Dns_ResolveCallback.h>
#include <Il2CppModLoader/app/types/DownloadDataCompletedEventArgs.h>
#include <Il2CppModLoader/app/types/DownloadDataCompletedEventHandler.h>
#include <Il2CppModLoader/app/types/DownloadProgressChangedEventArgs.h>
#include <Il2CppModLoader/app/types/DownloadProgressChangedEventHandler.h>
#include <Il2CppModLoader/app/types/DownloadStringCompletedEventArgs.h>
#include <Il2CppModLoader/app/types/DownloadStringCompletedEventHandler.h>
#include <Il2CppModLoader/app/types/EmptyWebProxy.h>
#include <Il2CppModLoader/app/types/EndPointManager.h>
#include <Il2CppModLoader/app/types/EndpointPermission.h>
#include <Il2CppModLoader/app/types/FileWebRequest.h>
#include <Il2CppModLoader/app/types/FileWebRequestCreator.h>
#include <Il2CppModLoader/app/types/FileWebResponse.h>
#include <Il2CppModLoader/app/types/FileWebStream.h>
#include <Il2CppModLoader/app/types/FtpAsyncResult.h>
#include <Il2CppModLoader/app/types/FtpDataStream.h>
#include <Il2CppModLoader/app/types/FtpDataStream_ReadDelegate.h>
#include <Il2CppModLoader/app/types/FtpDataStream_WriteDelegate.h>
#include <Il2CppModLoader/app/types/FtpRequestCreator.h>
#include <Il2CppModLoader/app/types/FtpStatus.h>
#include <Il2CppModLoader/app/types/FtpWebRequest.h>
#include <Il2CppModLoader/app/types/FtpWebResponse.h>
#include <Il2CppModLoader/app/types/HttpListenerBasicIdentity.h>
#include <Il2CppModLoader/app/types/HttpListenerRequest_Context.h>
#include <Il2CppModLoader/app/types/HttpRequestCreator.h>
#include <Il2CppModLoader/app/types/HttpStreamAsyncResult.h>
#include <Il2CppModLoader/app/types/HttpWebRequest_c_DisplayClass238_0.h>
#include <Il2CppModLoader/app/types/HybridDictionary.h>
#include <Il2CppModLoader/app/types/ListenerAsyncResult.h>
#include <Il2CppModLoader/app/types/MonoChunkStream_Chunk.h>
#include <Il2CppModLoader/app/types/MonoHttpDate.h>
#include <Il2CppModLoader/app/types/NtlmClient_1.h>
#include <Il2CppModLoader/app/types/OpenReadCompletedEventArgs.h>
#include <Il2CppModLoader/app/types/OpenReadCompletedEventHandler.h>
#include <Il2CppModLoader/app/types/OpenWriteCompletedEventArgs.h>
#include <Il2CppModLoader/app/types/OpenWriteCompletedEventHandler.h>
#include <Il2CppModLoader/app/types/PathList.h>
#include <Il2CppModLoader/app/types/PathList_PathListComparer.h>
#include <Il2CppModLoader/app/types/ServerCertValidationCallback_CallbackContext.h>
#include <Il2CppModLoader/app/types/ServicePointManager.h>
#include <Il2CppModLoader/app/types/ServicePointManager_SPKey.h>
#include <Il2CppModLoader/app/types/SimpleAsyncResult_c_DisplayClass11_0.h>
#include <Il2CppModLoader/app/types/SimpleAsyncResult_c_DisplayClass9_0.h>
#include <Il2CppModLoader/app/types/SocketAsyncEventArgs.h>
#include <Il2CppModLoader/app/types/SocketPermission.h>
#include <Il2CppModLoader/app/types/TimerThread_InfiniteTimer.h>
#include <Il2CppModLoader/app/types/TimerThread_InfiniteTimerQueue.h>
#include <Il2CppModLoader/app/types/TransportType__Enum.h>
#include <Il2CppModLoader/app/types/UploadDataCompletedEventArgs.h>
#include <Il2CppModLoader/app/types/UploadDataCompletedEventHandler.h>
#include <Il2CppModLoader/app/types/UploadFileCompletedEventArgs.h>
#include <Il2CppModLoader/app/types/UploadFileCompletedEventHandler.h>
#include <Il2CppModLoader/app/types/UploadProgressChangedEventArgs.h>
#include <Il2CppModLoader/app/types/UploadProgressChangedEventHandler.h>
#include <Il2CppModLoader/app/types/UploadStringCompletedEventArgs.h>
#include <Il2CppModLoader/app/types/UploadStringCompletedEventHandler.h>
#include <Il2CppModLoader/app/types/UploadValuesCompletedEventArgs.h>
#include <Il2CppModLoader/app/types/UploadValuesCompletedEventHandler.h>
#include <Il2CppModLoader/app/types/WebClient.h>
#include <Il2CppModLoader/app/types/WebClient_DownloadBitsState.h>
#include <Il2CppModLoader/app/types/WebClient_ProgressData.h>
#include <Il2CppModLoader/app/types/WebClient_UploadBitsState.h>
#include <Il2CppModLoader/app/types/WebClient_WebClientWriteStream.h>
#include <Il2CppModLoader/app/types/WebClient_c.h>
#include <Il2CppModLoader/app/types/WebClient_c_DisplayClass219_0.h>
#include <Il2CppModLoader/app/types/WebClient_c_DisplayClass221_0.h>
#include <Il2CppModLoader/app/types/WebClient_c_DisplayClass225_0.h>
#include <Il2CppModLoader/app/types/WebClient_c_DisplayClass229_0.h>
#include <Il2CppModLoader/app/types/WebClient_c_DisplayClass231_0.h>
#include <Il2CppModLoader/app/types/WebClient_c_DisplayClass233_0.h>
#include <Il2CppModLoader/app/types/WebClient_c_DisplayClass237_0.h>
#include <Il2CppModLoader/app/types/WebClient_c_DisplayClass241_0.h>
#include <Il2CppModLoader/app/types/WebClient_c_DisplayClass245_0.h>
#include <Il2CppModLoader/app/types/WebProxyData.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimerThread_InfiniteTimerQueue {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimerThread_InfiniteTimerQueue__Class** type_info = (::app::TimerThread_InfiniteTimerQueue__Class**)(modloader::win::memory::resolve_rva(0x047774F0));
    }
    namespace TimerThread_InfiniteTimer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TimerThread_InfiniteTimer__Class** type_info = (::app::TimerThread_InfiniteTimer__Class**)(modloader::win::memory::resolve_rva(0x0471A930));
    }
    namespace WebProxyData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WebProxyData__Class** type_info = (::app::WebProxyData__Class**)(modloader::win::memory::resolve_rva(0x04708DB8));
    }
    namespace EmptyWebProxy {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EmptyWebProxy__Class** type_info = (::app::EmptyWebProxy__Class**)(modloader::win::memory::resolve_rva(0x047991B8));
    }
    namespace ConnectionPool_AsyncConnectionPoolRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ConnectionPool_AsyncConnectionPoolRequest__Class** type_info = (::app::ConnectionPool_AsyncConnectionPoolRequest__Class**)(modloader::win::memory::resolve_rva(0x047754A8));
    }
    namespace Cookie {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Cookie__Class** type_info = (::app::Cookie__Class**)(modloader::win::memory::resolve_rva(0x0473DC50));
    }
    namespace Comparer_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Comparer_1__Class** type_info = (::app::Comparer_1__Class**)(modloader::win::memory::resolve_rva(0x04788778));
    }
    namespace CookieTokenizer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CookieTokenizer__Class** type_info = (::app::CookieTokenizer__Class**)(modloader::win::memory::resolve_rva(0x0476AF70));
    }
    namespace CookieTokenizer_RecognizedAttribute__Array {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CookieTokenizer_RecognizedAttribute__Array__Class** type_info = (::app::CookieTokenizer_RecognizedAttribute__Array__Class**)(modloader::win::memory::resolve_rva(0x0477D278));
    }
    namespace CookieParser {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CookieParser__Class** type_info = (::app::CookieParser__Class**)(modloader::win::memory::resolve_rva(0x047837C0));
    }
    namespace CookieCollection_CookieCollectionEnumerator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CookieCollection_CookieCollectionEnumerator__Class** type_info = (::app::CookieCollection_CookieCollectionEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0472ACF0));
    }
    namespace PathList {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PathList__Class** type_info = (::app::PathList__Class**)(modloader::win::memory::resolve_rva(0x04720E20));
    }
    namespace PathList_PathListComparer {
        IL2CPP_MODLOADER_DLLEXPORT ::app::PathList_PathListComparer__Class** type_info = (::app::PathList_PathListComparer__Class**)(modloader::win::memory::resolve_rva(0x047638E0));
    }
    namespace CookieException {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CookieException__Class** type_info = (::app::CookieException__Class**)(modloader::win::memory::resolve_rva(0x04714B08));
    }
    namespace FileWebRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FileWebRequest__Class** type_info = (::app::FileWebRequest__Class**)(modloader::win::memory::resolve_rva(0x04704818));
    }
    namespace FileWebRequestCreator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FileWebRequestCreator__Class** type_info = (::app::FileWebRequestCreator__Class**)(modloader::win::memory::resolve_rva(0x04751258));
    }
    namespace FileWebStream {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FileWebStream__Class** type_info = (::app::FileWebStream__Class**)(modloader::win::memory::resolve_rva(0x0470B160));
    }
    namespace FileWebResponse {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FileWebResponse__Class** type_info = (::app::FileWebResponse__Class**)(modloader::win::memory::resolve_rva(0x047065F0));
    }
    namespace Base64Stream {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Base64Stream__Class** type_info = (::app::Base64Stream__Class**)(modloader::win::memory::resolve_rva(0x04777EE0));
    }
    namespace Base64Stream_ReadStateInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Base64Stream_ReadStateInfo__Class** type_info = (::app::Base64Stream_ReadStateInfo__Class**)(modloader::win::memory::resolve_rva(0x047431D8));
    }
    namespace Base64WriteStateInfo {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Base64WriteStateInfo__Class** type_info = (::app::Base64WriteStateInfo__Class**)(modloader::win::memory::resolve_rva(0x0477AD58));
    }
    namespace Base64Stream_ReadAsyncResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Base64Stream_ReadAsyncResult__Class** type_info = (::app::Base64Stream_ReadAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x04719540));
    }
    namespace Base64Stream_WriteAsyncResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Base64Stream_WriteAsyncResult__Class** type_info = (::app::Base64Stream_WriteAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x0476FEA8));
    }
    namespace WebClient {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WebClient__Class** type_info = (::app::WebClient__Class**)(modloader::win::memory::resolve_rva(0x047155A0));
    }
    namespace WebClient_ProgressData {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WebClient_ProgressData__Class** type_info = (::app::WebClient_ProgressData__Class**)(modloader::win::memory::resolve_rva(0x0477AAB8));
    }
    namespace OpenReadCompletedEventHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OpenReadCompletedEventHandler__Class** type_info = (::app::OpenReadCompletedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0471B8A0));
    }
    namespace OpenReadCompletedEventArgs {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OpenReadCompletedEventArgs__Class** type_info = (::app::OpenReadCompletedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04722C18));
    }
    namespace OpenWriteCompletedEventHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OpenWriteCompletedEventHandler__Class** type_info = (::app::OpenWriteCompletedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04712F98));
    }
    namespace OpenWriteCompletedEventArgs {
        IL2CPP_MODLOADER_DLLEXPORT ::app::OpenWriteCompletedEventArgs__Class** type_info = (::app::OpenWriteCompletedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04732470));
    }
    namespace DownloadStringCompletedEventHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DownloadStringCompletedEventHandler__Class** type_info = (::app::DownloadStringCompletedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04705768));
    }
    namespace DownloadStringCompletedEventArgs {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DownloadStringCompletedEventArgs__Class** type_info = (::app::DownloadStringCompletedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04756B58));
    }
    namespace DownloadDataCompletedEventHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DownloadDataCompletedEventHandler__Class** type_info = (::app::DownloadDataCompletedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04706588));
    }
    namespace DownloadDataCompletedEventArgs {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DownloadDataCompletedEventArgs__Class** type_info = (::app::DownloadDataCompletedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x047881B8));
    }
    namespace UploadStringCompletedEventHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UploadStringCompletedEventHandler__Class** type_info = (::app::UploadStringCompletedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0475E6D0));
    }
    namespace UploadStringCompletedEventArgs {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UploadStringCompletedEventArgs__Class** type_info = (::app::UploadStringCompletedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0472F210));
    }
    namespace UploadDataCompletedEventHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UploadDataCompletedEventHandler__Class** type_info = (::app::UploadDataCompletedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x047769B0));
    }
    namespace UploadDataCompletedEventArgs {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UploadDataCompletedEventArgs__Class** type_info = (::app::UploadDataCompletedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04702050));
    }
    namespace UploadFileCompletedEventHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UploadFileCompletedEventHandler__Class** type_info = (::app::UploadFileCompletedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04766CE0));
    }
    namespace UploadFileCompletedEventArgs {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UploadFileCompletedEventArgs__Class** type_info = (::app::UploadFileCompletedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0476CAF8));
    }
    namespace UploadValuesCompletedEventHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UploadValuesCompletedEventHandler__Class** type_info = (::app::UploadValuesCompletedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04761278));
    }
    namespace UploadValuesCompletedEventArgs {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UploadValuesCompletedEventArgs__Class** type_info = (::app::UploadValuesCompletedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04781738));
    }
    namespace DownloadProgressChangedEventHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DownloadProgressChangedEventHandler__Class** type_info = (::app::DownloadProgressChangedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04707318));
    }
    namespace DownloadProgressChangedEventArgs {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DownloadProgressChangedEventArgs__Class** type_info = (::app::DownloadProgressChangedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0473D0D8));
    }
    namespace UploadProgressChangedEventHandler {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UploadProgressChangedEventHandler__Class** type_info = (::app::UploadProgressChangedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0477E9E0));
    }
    namespace UploadProgressChangedEventArgs {
        IL2CPP_MODLOADER_DLLEXPORT ::app::UploadProgressChangedEventArgs__Class** type_info = (::app::UploadProgressChangedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04763DC0));
    }
    namespace WebClient_DownloadBitsState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WebClient_DownloadBitsState__Class** type_info = (::app::WebClient_DownloadBitsState__Class**)(modloader::win::memory::resolve_rva(0x0473FC00));
    }
    namespace CompletionDelegate {
        IL2CPP_MODLOADER_DLLEXPORT ::app::CompletionDelegate__Class** type_info = (::app::CompletionDelegate__Class**)(modloader::win::memory::resolve_rva(0x04718BF0));
    }
    namespace WebClient_UploadBitsState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WebClient_UploadBitsState__Class** type_info = (::app::WebClient_UploadBitsState__Class**)(modloader::win::memory::resolve_rva(0x0478ED00));
    }
    namespace WebClient_WebClientWriteStream {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WebClient_WebClientWriteStream__Class** type_info = (::app::WebClient_WebClientWriteStream__Class**)(modloader::win::memory::resolve_rva(0x0472ED10));
    }
    namespace WebClient_c_DisplayClass219_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WebClient_c_DisplayClass219_0__Class** type_info = (::app::WebClient_c_DisplayClass219_0__Class**)(modloader::win::memory::resolve_rva(0x04747E68));
    }
    namespace WebClient_c {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WebClient_c__Class** type_info = (::app::WebClient_c__Class**)(modloader::win::memory::resolve_rva(0x04703B18));
    }
    namespace WebClient_c_DisplayClass221_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WebClient_c_DisplayClass221_0__Class** type_info = (::app::WebClient_c_DisplayClass221_0__Class**)(modloader::win::memory::resolve_rva(0x04766A38));
    }
    namespace WebClient_c_DisplayClass225_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WebClient_c_DisplayClass225_0__Class** type_info = (::app::WebClient_c_DisplayClass225_0__Class**)(modloader::win::memory::resolve_rva(0x0477BC60));
    }
    namespace WebClient_c_DisplayClass229_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WebClient_c_DisplayClass229_0__Class** type_info = (::app::WebClient_c_DisplayClass229_0__Class**)(modloader::win::memory::resolve_rva(0x04733DA8));
    }
    namespace WebClient_c_DisplayClass231_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WebClient_c_DisplayClass231_0__Class** type_info = (::app::WebClient_c_DisplayClass231_0__Class**)(modloader::win::memory::resolve_rva(0x047048B0));
    }
    namespace WebClient_c_DisplayClass233_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WebClient_c_DisplayClass233_0__Class** type_info = (::app::WebClient_c_DisplayClass233_0__Class**)(modloader::win::memory::resolve_rva(0x04782B08));
    }
    namespace WebClient_c_DisplayClass237_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WebClient_c_DisplayClass237_0__Class** type_info = (::app::WebClient_c_DisplayClass237_0__Class**)(modloader::win::memory::resolve_rva(0x04747970));
    }
    namespace WebClient_c_DisplayClass241_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WebClient_c_DisplayClass241_0__Class** type_info = (::app::WebClient_c_DisplayClass241_0__Class**)(modloader::win::memory::resolve_rva(0x04716A80));
    }
    namespace WebClient_c_DisplayClass245_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::WebClient_c_DisplayClass245_0__Class** type_info = (::app::WebClient_c_DisplayClass245_0__Class**)(modloader::win::memory::resolve_rva(0x047592C0));
    }
    namespace ServerCertValidationCallback_CallbackContext {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ServerCertValidationCallback_CallbackContext__Class** type_info = (::app::ServerCertValidationCallback_CallbackContext__Class**)(modloader::win::memory::resolve_rva(0x04794388));
    }
    namespace AuthenticationManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::AuthenticationManager__Class** type_info = (::app::AuthenticationManager__Class**)(modloader::win::memory::resolve_rva(0x04774AD8));
    }
    namespace BasicClient {
        IL2CPP_MODLOADER_DLLEXPORT ::app::BasicClient__Class** type_info = (::app::BasicClient__Class**)(modloader::win::memory::resolve_rva(0x04754B50));
    }
    namespace ChunkedInputStream {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ChunkedInputStream__Class** type_info = (::app::ChunkedInputStream__Class**)(modloader::win::memory::resolve_rva(0x04738590));
    }
    namespace ChunkedInputStream_ReadBufferState {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ChunkedInputStream_ReadBufferState__Class** type_info = (::app::ChunkedInputStream_ReadBufferState__Class**)(modloader::win::memory::resolve_rva(0x04752AE8));
    }
    namespace HttpStreamAsyncResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HttpStreamAsyncResult__Class** type_info = (::app::HttpStreamAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x047187F8));
    }
    namespace DefaultCertificatePolicy {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DefaultCertificatePolicy__Class** type_info = (::app::DefaultCertificatePolicy__Class**)(modloader::win::memory::resolve_rva(0x0474A760));
    }
    namespace DigestHeaderParser {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DigestHeaderParser__Class** type_info = (::app::DigestHeaderParser__Class**)(modloader::win::memory::resolve_rva(0x0476F0A8));
    }
    namespace DigestSession {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DigestSession__Class** type_info = (::app::DigestSession__Class**)(modloader::win::memory::resolve_rva(0x0470E558));
    }
    namespace DigestClient {
        IL2CPP_MODLOADER_DLLEXPORT ::app::DigestClient__Class** type_info = (::app::DigestClient__Class**)(modloader::win::memory::resolve_rva(0x04731908));
    }
    namespace Dns_GetHostByNameCallback {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Dns_GetHostByNameCallback__Class** type_info = (::app::Dns_GetHostByNameCallback__Class**)(modloader::win::memory::resolve_rva(0x047546E0));
    }
    namespace Dns_ResolveCallback {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Dns_ResolveCallback__Class** type_info = (::app::Dns_ResolveCallback__Class**)(modloader::win::memory::resolve_rva(0x0478FD88));
    }
    namespace Dns_GetHostEntryNameCallback {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Dns_GetHostEntryNameCallback__Class** type_info = (::app::Dns_GetHostEntryNameCallback__Class**)(modloader::win::memory::resolve_rva(0x04776B88));
    }
    namespace Dns_GetHostEntryIPCallback {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Dns_GetHostEntryIPCallback__Class** type_info = (::app::Dns_GetHostEntryIPCallback__Class**)(modloader::win::memory::resolve_rva(0x04785D70));
    }
    namespace Dns_GetHostAddressesCallback {
        IL2CPP_MODLOADER_DLLEXPORT ::app::Dns_GetHostAddressesCallback__Class** type_info = (::app::Dns_GetHostAddressesCallback__Class**)(modloader::win::memory::resolve_rva(0x04782718));
    }
    namespace SocketAsyncEventArgs {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SocketAsyncEventArgs__Class** type_info = (::app::SocketAsyncEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04748DA0));
    }
    namespace EndPointManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EndPointManager__Class** type_info = (::app::EndPointManager__Class**)(modloader::win::memory::resolve_rva(0x04734190));
    }
    namespace TransportType__Enum {
        IL2CPP_MODLOADER_DLLEXPORT ::app::TransportType__Enum__Class** type_info = (::app::TransportType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04707920));
    }
    namespace EndpointPermission {
        IL2CPP_MODLOADER_DLLEXPORT ::app::EndpointPermission__Class** type_info = (::app::EndpointPermission__Class**)(modloader::win::memory::resolve_rva(0x04790410));
    }
    namespace FtpAsyncResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FtpAsyncResult__Class** type_info = (::app::FtpAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x04775EC0));
    }
    namespace FtpWebResponse {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FtpWebResponse__Class** type_info = (::app::FtpWebResponse__Class**)(modloader::win::memory::resolve_rva(0x04762AF0));
    }
    namespace FtpWebRequest {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FtpWebRequest__Class** type_info = (::app::FtpWebRequest__Class**)(modloader::win::memory::resolve_rva(0x04780F78));
    }
    namespace FtpDataStream {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FtpDataStream__Class** type_info = (::app::FtpDataStream__Class**)(modloader::win::memory::resolve_rva(0x0471D860));
    }
    namespace FtpDataStream_WriteDelegate {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FtpDataStream_WriteDelegate__Class** type_info = (::app::FtpDataStream_WriteDelegate__Class**)(modloader::win::memory::resolve_rva(0x0472A360));
    }
    namespace FtpDataStream_ReadDelegate {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FtpDataStream_ReadDelegate__Class** type_info = (::app::FtpDataStream_ReadDelegate__Class**)(modloader::win::memory::resolve_rva(0x0472D4C0));
    }
    namespace FtpRequestCreator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FtpRequestCreator__Class** type_info = (::app::FtpRequestCreator__Class**)(modloader::win::memory::resolve_rva(0x04752160));
    }
    namespace FtpStatus {
        IL2CPP_MODLOADER_DLLEXPORT ::app::FtpStatus__Class** type_info = (::app::FtpStatus__Class**)(modloader::win::memory::resolve_rva(0x04714B10));
    }
    namespace HttpListenerBasicIdentity {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HttpListenerBasicIdentity__Class** type_info = (::app::HttpListenerBasicIdentity__Class**)(modloader::win::memory::resolve_rva(0x0475C4C8));
    }
    namespace HttpListenerRequest_Context {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HttpListenerRequest_Context__Class** type_info = (::app::HttpListenerRequest_Context__Class**)(modloader::win::memory::resolve_rva(0x0475F2E8));
    }
    namespace HttpRequestCreator {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HttpRequestCreator__Class** type_info = (::app::HttpRequestCreator__Class**)(modloader::win::memory::resolve_rva(0x047454E0));
    }
    namespace HttpWebRequest_c_DisplayClass238_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HttpWebRequest_c_DisplayClass238_0__Class** type_info = (::app::HttpWebRequest_c_DisplayClass238_0__Class**)(modloader::win::memory::resolve_rva(0x0475F898));
    }
    namespace ListenerAsyncResult {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ListenerAsyncResult__Class** type_info = (::app::ListenerAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x04744AC0));
    }
    namespace MonoChunkStream_Chunk {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MonoChunkStream_Chunk__Class** type_info = (::app::MonoChunkStream_Chunk__Class**)(modloader::win::memory::resolve_rva(0x04795F30));
    }
    namespace MonoHttpDate {
        IL2CPP_MODLOADER_DLLEXPORT ::app::MonoHttpDate__Class** type_info = (::app::MonoHttpDate__Class**)(modloader::win::memory::resolve_rva(0x04756EB8));
    }
    namespace NtlmClient_1 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::NtlmClient_1__Class** type_info = (::app::NtlmClient_1__Class**)(modloader::win::memory::resolve_rva(0x0470DEC0));
    }
    namespace ServicePointManager {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ServicePointManager__Class** type_info = (::app::ServicePointManager__Class**)(modloader::win::memory::resolve_rva(0x04752FC8));
    }
    namespace HybridDictionary {
        IL2CPP_MODLOADER_DLLEXPORT ::app::HybridDictionary__Class** type_info = (::app::HybridDictionary__Class**)(modloader::win::memory::resolve_rva(0x0475CF60));
    }
    namespace ServicePointManager_SPKey {
        IL2CPP_MODLOADER_DLLEXPORT ::app::ServicePointManager_SPKey__Class** type_info = (::app::ServicePointManager_SPKey__Class**)(modloader::win::memory::resolve_rva(0x04795718));
    }
    namespace SimpleAsyncResult_c_DisplayClass9_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SimpleAsyncResult_c_DisplayClass9_0__Class** type_info = (::app::SimpleAsyncResult_c_DisplayClass9_0__Class**)(modloader::win::memory::resolve_rva(0x04704B08));
    }
    namespace SimpleAsyncResult_c_DisplayClass11_0 {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SimpleAsyncResult_c_DisplayClass11_0__Class** type_info = (::app::SimpleAsyncResult_c_DisplayClass11_0__Class**)(modloader::win::memory::resolve_rva(0x04779AB8));
    }
    namespace SocketPermission {
        IL2CPP_MODLOADER_DLLEXPORT ::app::SocketPermission__Class** type_info = (::app::SocketPermission__Class**)(modloader::win::memory::resolve_rva(0x04793D98));
    }
} // namespace app::classes::types

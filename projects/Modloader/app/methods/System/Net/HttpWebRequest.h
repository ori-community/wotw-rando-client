#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HttpWebRequest.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CookieContainer.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/DecompressionMethods__Enum.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/HttpContinueDelegate.h>
#include <Modloader/app/structs/HttpStatusCode__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/ICredentials.h>
#include <Modloader/app/structs/IWebProxy.h>
#include <Modloader/app/structs/MonoTlsProvider.h>
#include <Modloader/app/structs/MonoTlsSettings.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RemoteCertificateValidationCallback.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/ServerCertValidationCallback.h>
#include <Modloader/app/structs/ServicePoint.h>
#include <Modloader/app/structs/SimpleAsyncCallback.h>
#include <Modloader/app/structs/SimpleAsyncResult.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/TransportContext.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/Version.h>
#include <Modloader/app/structs/WebAsyncResult.h>
#include <Modloader/app/structs/WebConnectionData.h>
#include <Modloader/app/structs/WebConnectionStream.h>
#include <Modloader/app/structs/WebExceptionStatus__Enum.h>
#include <Modloader/app/structs/WebHeaderCollection.h>
#include <Modloader/app/structs/WebResponse.h>
#include <Modloader/app/structs/X509CertificateCollection_1.h>

namespace app::classes::System::Net::HttpWebRequest {
    IL2CPP_REGISTER_METHOD(0x01E59BB0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01E59C30, void, ctor_1, (app::HttpWebRequest * this_ptr, app::Uri* uri))
    IL2CPP_REGISTER_METHOD(0x01E59F70, void, ctor_2, (app::HttpWebRequest * this_ptr, app::Uri* uri, app::MonoTlsProvider* tls_provider, app::MonoTlsSettings* settings))
    IL2CPP_REGISTER_METHOD(0x01E59FB0, void, ctor_3, (app::HttpWebRequest * this_ptr, app::SerializationInfo* serialization_info, app::StreamingContext streaming_context))
    IL2CPP_REGISTER_METHOD(0x01E5A630, void, ResetAuthorization, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5A670, void, SetSpecialHeaders, (app::HttpWebRequest * this_ptr, app::String* header_name, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01E5A7B0, app::String*, get_Accept, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5A850, void, set_Accept, (app::HttpWebRequest * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::Uri*, get_Address, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_Address, (app::HttpWebRequest * this_ptr, app::Uri* value))
    IL2CPP_REGISTER_METHOD(0x00614BA0, bool, get_AllowAutoRedirect, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00614BB0, void, set_AllowAutoRedirect, (app::HttpWebRequest * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00EEDBB0, bool, get_AllowWriteStreamBuffering, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EEDBC0, void, set_AllowWriteStreamBuffering, (app::HttpWebRequest * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowReadStreamBuffering, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5A8F0, void, set_AllowReadStreamBuffering, (app::HttpWebRequest * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01E5A990, app::Exception*, GetMustImplement, ())
    IL2CPP_REGISTER_METHOD(0x0040EF70, app::DecompressionMethods__Enum, get_AutomaticDecompression, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5AAD0, void, set_AutomaticDecompression, (app::HttpWebRequest * this_ptr, app::DecompressionMethods__Enum value))
    IL2CPP_REGISTER_METHOD(0x01E5AB00, bool, get_InternalAllowBuffering, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5AB10, bool, get_MethodWithBuffer, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007008C0, app::MonoTlsProvider*, get_TlsProvider, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FAE9A0, app::MonoTlsSettings*, get_TlsSettings, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5AC70, app::X509CertificateCollection_1*, get_ClientCertificates, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5ADD0, void, set_ClientCertificates, (app::HttpWebRequest * this_ptr, app::X509CertificateCollection_1* value))
    IL2CPP_REGISTER_METHOD(0x01E5AE90, app::String*, get_Connection, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5AF30, void, set_Connection, (app::HttpWebRequest * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::String*, get_ConnectionGroupName, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_ConnectionGroupName, (app::HttpWebRequest * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, int64_t, get_ContentLength, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5B110, void, set_ContentLength, (app::HttpWebRequest * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_InternalContentLength, (app::HttpWebRequest * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x01E5B1E0, bool, get_ThrowOnError, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5B1F0, void, set_ThrowOnError, (app::HttpWebRequest * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01E5B200, app::String*, get_ContentType, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5B2A0, void, set_ContentType, (app::HttpWebRequest * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::HttpContinueDelegate*, get_ContinueDelegate, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_ContinueDelegate, (app::HttpWebRequest * this_ptr, app::HttpContinueDelegate* value))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::CookieContainer*, get_CookieContainer, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_CookieContainer, (app::HttpWebRequest * this_ptr, app::CookieContainer* value))
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::ICredentials*, get_Credentials, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_Credentials, (app::HttpWebRequest * this_ptr, app::ICredentials* value))
    IL2CPP_REGISTER_METHOD(0x01E5B340, app::DateTime, get_Date, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5B4A0, void, set_Date, (app::HttpWebRequest * this_ptr, app::DateTime value))
    IL2CPP_REGISTER_METHOD(0x01E5B5F0, void, SetDateHeaderHelper, (app::HttpWebRequest * this_ptr, app::String* header_name, app::DateTime date_time))
    IL2CPP_REGISTER_METHOD(0x01E5B6E0, int32_t, get_DefaultMaximumErrorResponseLength, ())
    IL2CPP_REGISTER_METHOD(0x01E5B780, void, set_DefaultMaximumErrorResponseLength, (int32_t value))
    IL2CPP_REGISTER_METHOD(0x01E5B820, app::String*, get_Expect, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5B8C0, void, set_Expect, (app::HttpWebRequest * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x003FFE10, bool, get_HaveResponse, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::WebHeaderCollection*, get_Headers, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5BA70, void, set_Headers, (app::HttpWebRequest * this_ptr, app::WebHeaderCollection* value))
    IL2CPP_REGISTER_METHOD(0x01E5BC70, app::String*, get_Host, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5BCA0, void, set_Host, (app::HttpWebRequest * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01E5BF10, bool, CheckValidHost, (app::String * scheme, app::String* val))
    IL2CPP_REGISTER_METHOD(0x01E5C090, app::DateTime, get_IfModifiedSince, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5C1A0, void, set_IfModifiedSince, (app::HttpWebRequest * this_ptr, app::DateTime value))
    IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_KeepAlive, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0061E2E0, void, set_KeepAlive, (app::HttpWebRequest * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x007007F0, int32_t, get_MaximumAutomaticRedirections, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5C280, void, set_MaximumAutomaticRedirections, (app::HttpWebRequest * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x011A8110, int32_t, get_MaximumResponseHeadersLength, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5C340, void, set_MaximumResponseHeadersLength, (app::HttpWebRequest * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01E5C350, int32_t, get_DefaultMaximumResponseHeadersLength, ())
    IL2CPP_REGISTER_METHOD(0x01E5C3F0, void, set_DefaultMaximumResponseHeadersLength, (int32_t value))
    IL2CPP_REGISTER_METHOD(0x01E5C4A0, int32_t, get_ReadWriteTimeout, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5C4B0, void, set_ReadWriteTimeout, (app::HttpWebRequest * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01E5C5B0, int32_t, get_ContinueTimeout, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5C600, void, set_ContinueTimeout, (app::HttpWebRequest * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FBC80, app::String*, get_MediaType, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC90, void, set_MediaType, (app::HttpWebRequest * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FBCA0, app::String*, get_Method, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5C650, void, set_Method, (app::HttpWebRequest * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x005DA240, bool, get_Pipelined, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009AD920, void, set_Pipelined, (app::HttpWebRequest * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00762910, bool, get_PreAuthenticate, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008555F0, void, set_PreAuthenticate, (app::HttpWebRequest * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::Version*, get_ProtocolVersion, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5C880, void, set_ProtocolVersion, (app::HttpWebRequest * this_ptr, app::Version* value))
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::IWebProxy*, get_Proxy, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5CA10, void, set_Proxy, (app::HttpWebRequest * this_ptr, app::IWebProxy* value))
    IL2CPP_REGISTER_METHOD(0x01E5CA50, app::String*, get_Referer, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5CAF0, void, set_Referer, (app::HttpWebRequest * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Uri*, get_RequestUri, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFEA0, bool, get_SendChunked, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5CC30, void, set_SendChunked, (app::HttpWebRequest * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01E5CC60, app::ServicePoint*, get_ServicePoint, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B0220, app::ServicePoint*, get_ServicePointNoLock, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SupportsCookieContainer, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010B5C70, int32_t, get_Timeout, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5CC70, void, set_Timeout, (app::HttpWebRequest * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01E5CD30, app::String*, get_TransferEncoding, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5CDD0, void, set_TransferEncoding, (app::HttpWebRequest * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01E5CFC0, bool, get_UseDefaultCredentials, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5D000, void, set_UseDefaultCredentials, (app::HttpWebRequest * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01E5D040, app::String*, get_UserAgent, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5D0E0, void, set_UserAgent, (app::HttpWebRequest * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01E5D190, bool, get_UnsafeAuthenticatedConnectionSharing, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5D1A0, void, set_UnsafeAuthenticatedConnectionSharing, (app::HttpWebRequest * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x005B38C0, bool, get_GotRequestStream, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DF990, bool, get_ExpectContinue, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5D1B0, void, set_ExpectContinue, (app::HttpWebRequest * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::Uri*, get_AuthUri, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5D1C0, bool, get_ProxyQuery, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B1A9A0, app::ServerCertValidationCallback*, get_ServerCertValidationCallback, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5D200, app::RemoteCertificateValidationCallback*, get_ServerCertificateValidationCallback, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5D220, void, set_ServerCertificateValidationCallback, (app::HttpWebRequest * this_ptr, app::RemoteCertificateValidationCallback* value))
    IL2CPP_REGISTER_METHOD(0x01E5D390, app::ServicePoint*, GetServicePoint, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5D530, void, AddRange_1, (app::HttpWebRequest * this_ptr, int32_t range))
    IL2CPP_REGISTER_METHOD(0x01E5D5D0, void, AddRange_2, (app::HttpWebRequest * this_ptr, int32_t from, int32_t to))
    IL2CPP_REGISTER_METHOD(0x01E5D680, void, AddRange_3, (app::HttpWebRequest * this_ptr, app::String* range_specifier, int32_t range))
    IL2CPP_REGISTER_METHOD(0x01E5D690, void, AddRange_4, (app::HttpWebRequest * this_ptr, app::String* range_specifier, int32_t from, int32_t to))
    IL2CPP_REGISTER_METHOD(0x01E5D6B0, void, AddRange_5, (app::HttpWebRequest * this_ptr, int64_t range))
    IL2CPP_REGISTER_METHOD(0x01E5D750, void, AddRange_6, (app::HttpWebRequest * this_ptr, int64_t from, int64_t to))
    IL2CPP_REGISTER_METHOD(0x01E5D800, void, AddRange_7, (app::HttpWebRequest * this_ptr, app::String* range_specifier, int64_t range))
    IL2CPP_REGISTER_METHOD(0x01E5DB60, void, AddRange_8, (app::HttpWebRequest * this_ptr, app::String* range_specifier, int64_t from, int64_t to))
    IL2CPP_REGISTER_METHOD(0x01E5DDE0, app::IAsyncResult*, BeginGetRequestStream, (app::HttpWebRequest * this_ptr, app::AsyncCallback* callback, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x01E5E3D0, app::Stream*, EndGetRequestStream_1, (app::HttpWebRequest * this_ptr, app::IAsyncResult* async_result))
    IL2CPP_REGISTER_METHOD(0x01E5E560, app::Stream*, GetRequestStream_1, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5E710, app::Stream*, GetRequestStream_2, (app::HttpWebRequest * this_ptr, app::TransportContext** context))
    IL2CPP_REGISTER_METHOD(0x01E5E760, bool, CheckIfForceWrite, (app::HttpWebRequest * this_ptr, app::SimpleAsyncResult* result))
    IL2CPP_REGISTER_METHOD(0x01E5E940, app::IAsyncResult*, BeginGetResponse, (app::HttpWebRequest * this_ptr, app::AsyncCallback* callback, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x01E5EEE0, app::WebResponse*, EndGetResponse, (app::HttpWebRequest * this_ptr, app::IAsyncResult* async_result))
    IL2CPP_REGISTER_METHOD(0x01E5F0A0, app::Stream*, EndGetRequestStream_2, (app::HttpWebRequest * this_ptr, app::IAsyncResult* async_result, app::TransportContext** context))
    IL2CPP_REGISTER_METHOD(0x01E5F0C0, app::WebResponse*, GetResponse, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006D6470, bool, get_FinishedReading, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A5B6A0, void, set_FinishedReading, (app::HttpWebRequest * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01E5F1C0, bool, get_Aborted, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5F1E0, void, Abort, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D28380, void, ISerializable_GetObjectData, (app::HttpWebRequest * this_ptr, app::SerializationInfo* serialization_info, app::StreamingContext streaming_context))
    IL2CPP_REGISTER_METHOD(0x01E5F670, void, GetObjectData, (app::HttpWebRequest * this_ptr, app::SerializationInfo* serialization_info, app::StreamingContext streaming_context))
    IL2CPP_REGISTER_METHOD(0x01E5F9A0, void, CheckRequestStarted, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5FA50, void, DoContinueDelegate, (app::HttpWebRequest * this_ptr, int32_t status_code, app::WebHeaderCollection* headers))
    IL2CPP_REGISTER_METHOD(0x01E5FA70, void, RewriteRedirectToGet, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E5FB60, bool, Redirect, (app::HttpWebRequest * this_ptr, app::WebAsyncResult* result, app::HttpStatusCode__Enum code, app::WebResponse* response))
    IL2CPP_REGISTER_METHOD(0x01E60420, app::String*, GetHeaders, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E60D60, void, DoPreAuthenticate, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E60F80, void, SetWriteStreamError_1, (app::HttpWebRequest * this_ptr, app::WebExceptionStatus__Enum status, app::Exception* exc))
    IL2CPP_REGISTER_METHOD(0x01E612F0, app::Byte__Array*, GetRequestHeaders, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E618A0, void, SetWriteStream, (app::HttpWebRequest * this_ptr, app::WebConnectionStream* stream))
    IL2CPP_REGISTER_METHOD(0x01E61AC0, void, SetWriteStreamInner, (app::HttpWebRequest * this_ptr, app::SimpleAsyncCallback* callback))
    IL2CPP_REGISTER_METHOD(0x01E61C20, void, SetWriteStreamError_2, (app::HttpWebRequest * this_ptr, app::Exception* exc))
    IL2CPP_REGISTER_METHOD(0x01E61D00, void, SetResponseError, (app::HttpWebRequest * this_ptr, app::WebExceptionStatus__Enum status, app::Exception* e, app::String* where))
    IL2CPP_REGISTER_METHOD(0x01E62100, void, CheckSendError, (app::HttpWebRequest * this_ptr, app::WebConnectionData* data))
    IL2CPP_REGISTER_METHOD(0x01E62330, bool, HandleNtlmAuth, (app::HttpWebRequest * this_ptr, app::WebAsyncResult* r))
    IL2CPP_REGISTER_METHOD(0x01E62550, void, SetResponseData, (app::HttpWebRequest * this_ptr, app::WebConnectionData* data))
    IL2CPP_REGISTER_METHOD(0x01E63050, bool, CheckAuthorization, (app::HttpWebRequest * this_ptr, app::WebResponse* response, app::HttpStatusCode__Enum code))
    IL2CPP_REGISTER_METHOD(0x01E63080, bool, CheckFinalStatus, (app::HttpWebRequest * this_ptr, app::WebAsyncResult* result))
    IL2CPP_REGISTER_METHOD(0x01E63BA0, bool, get_ReuseConnection, (app::HttpWebRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E63BB0, void, set_ReuseConnection, (app::HttpWebRequest * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01E63BC0, app::StringBuilder*, GenerateConnectionGroup, (app::String * connection_group_name, bool unsafe_connection_group, bool is_internal_group))
    IL2CPP_REGISTER_METHOD(0x01E63D90, void, _SetWriteStream_b__258_0, (app::HttpWebRequest * this_ptr, app::SimpleAsyncResult* result))
    IL2CPP_REGISTER_METHOD(0x01E64060, void, _SetWriteStream_b__258_1, (app::HttpWebRequest * this_ptr, app::SimpleAsyncResult* inner))
    IL2CPP_REGISTER_METHOD(0x01E64100, bool, _SetWriteStreamInner_b__259_0, (app::HttpWebRequest * this_ptr, app::SimpleAsyncResult* result))
    IL2CPP_REGISTER_METHOD(0x01E64200, void, ctor_4, (app::HttpWebRequest * this_ptr))
} // namespace app::classes::System::Net::HttpWebRequest

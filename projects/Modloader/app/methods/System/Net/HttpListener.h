#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HttpListener.h>
#include <Modloader/app/structs/X509Certificate_1.h>
#include <Modloader/app/structs/MonoTlsProvider.h>
#include <Modloader/app/structs/MonoTlsSettings.h>
#include <Modloader/app/structs/IPAddress.h>
#include <Modloader/app/structs/SslStream.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/RemoteCertificateValidationCallback.h>
#include <Modloader/app/structs/AuthenticationSchemes__Enum.h>
#include <Modloader/app/structs/AuthenticationSchemeSelector.h>
#include <Modloader/app/structs/HttpListener_ExtendedProtectionSelector.h>
#include <Modloader/app/structs/HttpListenerPrefixCollection.h>
#include <Modloader/app/structs/HttpListenerTimeoutManager.h>
#include <Modloader/app/structs/ExtendedProtectionPolicy.h>
#include <Modloader/app/structs/ServiceNameCollection.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/HttpListenerContext.h>
#include <Modloader/app/structs/Task_1_System_Net_HttpListenerContext_.h>
#include <Modloader/app/structs/HttpConnection.h>

namespace app::classes::System::Net::HttpListener {
    IL2CPP_REGISTER_METHOD(0x01D411E0, void, ctor_1, (app::HttpListener * this_ptr, app::X509Certificate_1* certificate, app::MonoTlsProvider* tls_provider, app::MonoTlsSettings* tls_settings))
    IL2CPP_REGISTER_METHOD(0x01D41230, app::X509Certificate_1*, LoadCertificateAndKey, (app::HttpListener * this_ptr, app::IPAddress* addr, int32_t port))
    IL2CPP_REGISTER_METHOD(0x01D41710, app::SslStream*, CreateSslStream, (app::HttpListener * this_ptr, app::Stream* inner_stream, bool owns_stream, app::RemoteCertificateValidationCallback* callback))
    IL2CPP_REGISTER_METHOD(0x01D41AD0, void, ctor_2, (app::HttpListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB970, app::AuthenticationSchemes__Enum, get_AuthenticationSchemes, (app::HttpListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D423C0, void, set_AuthenticationSchemes, (app::HttpListener * this_ptr, app::AuthenticationSchemes__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::AuthenticationSchemeSelector*, get_AuthenticationSchemeSelectorDelegate, (app::HttpListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D423F0, void, set_AuthenticationSchemeSelectorDelegate, (app::HttpListener * this_ptr, app::AuthenticationSchemeSelector* value))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::HttpListener_ExtendedProtectionSelector*, get_ExtendedProtectionSelectorDelegate, (app::HttpListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D42420, void, set_ExtendedProtectionSelectorDelegate, (app::HttpListener * this_ptr, app::HttpListener_ExtendedProtectionSelector* value))
    IL2CPP_REGISTER_METHODINFO(0x04725BE0, HttpListener_set_ExtendedProtectionSelectorDelegate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IgnoreWriteExceptions, (app::HttpListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D42530, void, set_IgnoreWriteExceptions, (app::HttpListener * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00EEDBB0, bool, get_IsListening, (app::HttpListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsSupported, ())
    IL2CPP_REGISTER_METHOD(0x01D42560, app::HttpListenerPrefixCollection*, get_Prefixes, (app::HttpListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D42580, app::HttpListenerTimeoutManager*, get_TimeoutManager, (app::HttpListener * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04745970, HttpListener_get_TimeoutManager__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::ExtendedProtectionPolicy*, get_ExtendedProtectionPolicy, (app::HttpListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D425D0, void, set_ExtendedProtectionPolicy, (app::HttpListener * this_ptr, app::ExtendedProtectionPolicy* value))
    IL2CPP_REGISTER_METHODINFO(0x047958A0, HttpListener_set_ExtendedProtectionPolicy__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D426C0, app::ServiceNameCollection*, get_DefaultServiceNames, (app::HttpListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_Realm, (app::HttpListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D42830, void, set_Realm, (app::HttpListener * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00614BA0, bool, get_UnsafeConnectionNtlmAuthentication, (app::HttpListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D42860, void, set_UnsafeConnectionNtlmAuthentication, (app::HttpListener * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01D42890, void, Abort, (app::HttpListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D428B0, void, Close_1, (app::HttpListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D428F0, void, Close_2, (app::HttpListener * this_ptr, bool force))
    IL2CPP_REGISTER_METHOD(0x01D429B0, void, Cleanup, (app::HttpListener * this_ptr, bool close_existing))
    IL2CPP_REGISTER_METHOD(0x01D43410, app::IAsyncResult*, BeginGetContext, (app::HttpListener * this_ptr, app::AsyncCallback* callback, app::Object* state))
    IL2CPP_REGISTER_METHODINFO(0x0476C950, HttpListener_BeginGetContext__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D439A0, app::HttpListenerContext*, EndGetContext, (app::HttpListener * this_ptr, app::IAsyncResult* async_result))
    IL2CPP_REGISTER_METHODINFO(0x04762890, HttpListener_EndGetContext__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D43CE0, app::AuthenticationSchemes__Enum, SelectAuthenticationScheme, (app::HttpListener * this_ptr, app::HttpListenerContext* context))
    IL2CPP_REGISTER_METHOD(0x01D43D20, app::HttpListenerContext*, GetContext, (app::HttpListener * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470DEB0, HttpListener_GetContext__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D43ED0, void, Start, (app::HttpListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D43F80, void, Stop, (app::HttpListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D43FB0, void, IDisposable_Dispose, (app::HttpListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D43FE0, app::Task_1_System_Net_HttpListenerContext_*, GetContextAsync, (app::HttpListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D44280, void, CheckDisposed, (app::HttpListener * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04747AE0, HttpListener_CheckDisposed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D44360, app::HttpListenerContext*, GetContextFromQueue, (app::HttpListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D44490, void, RegisterContext, (app::HttpListener * this_ptr, app::HttpListenerContext* context))
    IL2CPP_REGISTER_METHOD(0x01D448B0, void, UnregisterContext, (app::HttpListener * this_ptr, app::HttpListenerContext* context))
    IL2CPP_REGISTER_METHOD(0x01D44AD0, void, AddConnection, (app::HttpListener * this_ptr, app::HttpConnection* cnc))
    IL2CPP_REGISTER_METHOD(0x01D44B00, void, RemoveConnection, (app::HttpListener * this_ptr, app::HttpConnection* cnc))
} // namespace app::classes::System::Net::HttpListener

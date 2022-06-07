#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Security::Interface::MonoRemoteCertificateValidationCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::MonoRemoteCertificateValidationCallback * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01BD1590, bool, Invoke, (app::MonoRemoteCertificateValidationCallback * this_ptr, app::String * target_host, app::X509Certificate_1 * certificate, app::X509Chain * chain, app::MonoSslPolicyErrors__Enum ssl_policy_errors))
    IL2CPP_REGISTER_METHOD(0x02A46450, app::IAsyncResult *, BeginInvoke, (app::MonoRemoteCertificateValidationCallback * this_ptr, app::String * target_host, app::X509Certificate_1 * certificate, app::X509Chain * chain, app::MonoSslPolicyErrors__Enum ssl_policy_errors, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::MonoRemoteCertificateValidationCallback * this_ptr, app::IAsyncResult * result))
}

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::Security::RemoteCertificateValidationCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::RemoteCertificateValidationCallback * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01BD1590, bool, Invoke, (app::RemoteCertificateValidationCallback * this_ptr, app::Object * sender, app::X509Certificate_1 * certificate, app::X509Chain * chain, app::SslPolicyErrors__Enum ssl_policy_errors))
    IL2CPP_REGISTER_METHOD(0x01BD1BA0, app::IAsyncResult *, BeginInvoke, (app::RemoteCertificateValidationCallback * this_ptr, app::Object * sender, app::X509Certificate_1 * certificate, app::X509Chain * chain, app::SslPolicyErrors__Enum ssl_policy_errors, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::RemoteCertificateValidationCallback * this_ptr, app::IAsyncResult * result))
}

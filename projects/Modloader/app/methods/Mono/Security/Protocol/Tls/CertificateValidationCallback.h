#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Mono::Security::Protocol::Tls::CertificateValidationCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::CertificateValidationCallback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01D3D560, bool, Invoke, (app::CertificateValidationCallback * this_ptr, app::X509Certificate_1* certificate, app::Int32__Array* certificate_errors))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::CertificateValidationCallback * this_ptr, app::X509Certificate_1* certificate, app::Int32__Array* certificate_errors, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::CertificateValidationCallback * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Mono::Security::Protocol::Tls::CertificateValidationCallback

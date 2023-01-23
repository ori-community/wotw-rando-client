#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CertificateSelectionCallback.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/X509Certificate_1.h>
#include <Modloader/app/structs/X509CertificateCollection_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::Mono::Security::Protocol::Tls::CertificateSelectionCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::CertificateSelectionCallback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01BD0F10, app::X509Certificate_1*, Invoke, (app::CertificateSelectionCallback * this_ptr, app::X509CertificateCollection_1* client_certificates, app::X509Certificate_1* server_certificate, app::String* target_host, app::X509CertificateCollection_1* server_requested_certificates))
    IL2CPP_REGISTER_METHOD(0x01BD1540, app::IAsyncResult*, BeginInvoke, (app::CertificateSelectionCallback * this_ptr, app::X509CertificateCollection_1* client_certificates, app::X509Certificate_1* server_certificate, app::String* target_host, app::X509CertificateCollection_1* server_requested_certificates, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::X509Certificate_1*, EndInvoke, (app::CertificateSelectionCallback * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Mono::Security::Protocol::Tls::CertificateSelectionCallback

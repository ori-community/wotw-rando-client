#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TlsClientCertificate_1.h>
#include <Modloader/app/structs/Context_1.h>
#include <Modloader/app/structs/X509Certificate_1.h>

namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Client::TlsClientCertificate {
    IL2CPP_REGISTER_METHOD(0x01F6A2D0, void, ctor, (app::TlsClientCertificate_1 * this_ptr, app::Context_1* context))
    IL2CPP_REGISTER_METHOD(0x01F6A300, app::X509Certificate_1*, get_ClientCertificate, (app::TlsClientCertificate_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F6A330, void, Update, (app::TlsClientCertificate_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F6A390, void, GetClientCertificate, (app::TlsClientCertificate_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F6A6D0, void, SendCertificates, (app::TlsClientCertificate_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F6A940, void, ProcessAsSsl3, (app::TlsClientCertificate_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F6A980, void, ProcessAsTls1, (app::TlsClientCertificate_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F6A9C0, app::X509Certificate_1*, FindParentCertificate, (app::TlsClientCertificate_1 * this_ptr, app::X509Certificate_1* cert))
} // namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Client::TlsClientCertificate

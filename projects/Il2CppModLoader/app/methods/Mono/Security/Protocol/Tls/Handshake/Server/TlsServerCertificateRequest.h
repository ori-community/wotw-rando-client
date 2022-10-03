#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Server::TlsServerCertificateRequest {
    IL2CPP_REGISTER_METHOD(0x01F745E0, void, ctor, (app::TlsServerCertificateRequest * this_ptr, app::Context_1* context))
    IL2CPP_REGISTER_METHOD(0x01F6CDE0, void, ProcessAsSsl3, (app::TlsServerCertificateRequest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F74610, void, ProcessAsTls1, (app::TlsServerCertificateRequest * this_ptr))
} // namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Server::TlsServerCertificateRequest

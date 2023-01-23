#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TlsServerCertificate.h>
#include <Modloader/app/structs/Context_1.h>

namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Server::TlsServerCertificate {
    IL2CPP_REGISTER_METHOD(0x01F6A2D0, void, ctor, (app::TlsServerCertificate * this_ptr, app::Context_1* context))
    IL2CPP_REGISTER_METHOD(0x01F6CDE0, void, ProcessAsSsl3, (app::TlsServerCertificate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F74220, void, ProcessAsTls1, (app::TlsServerCertificate * this_ptr))
} // namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Server::TlsServerCertificate

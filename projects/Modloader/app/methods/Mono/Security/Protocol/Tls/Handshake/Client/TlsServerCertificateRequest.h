#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TlsServerCertificateRequest_1.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Context_1.h>

namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Client::TlsServerCertificateRequest {
    IL2CPP_REGISTER_METHOD(0x01F6ED80, void, ctor, (app::TlsServerCertificateRequest_1 * this_ptr, app::Context_1* context, app::Byte__Array* buffer))
    IL2CPP_REGISTER_METHOD(0x01F6EDC0, void, Update, (app::TlsServerCertificateRequest_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F6CDE0, void, ProcessAsSsl3, (app::TlsServerCertificateRequest_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F6EE50, void, ProcessAsTls1, (app::TlsServerCertificateRequest_1 * this_ptr))
} // namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Client::TlsServerCertificateRequest

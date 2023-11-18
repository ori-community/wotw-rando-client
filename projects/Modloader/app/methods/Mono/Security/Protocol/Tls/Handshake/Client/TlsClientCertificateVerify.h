#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TlsClientCertificateVerify_1.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Context_1.h>
#include <Modloader/app/structs/RSA.h>

namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Client::TlsClientCertificateVerify {
    IL2CPP_REGISTER_METHOD(0x01F6AC60, void, ctor, (app::TlsClientCertificateVerify_1 * this_ptr, app::Context_1* context))
    IL2CPP_REGISTER_METHOD(0x01F6A330, void, Update, (app::TlsClientCertificateVerify_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F6AC90, void, ProcessAsSsl3, (app::TlsClientCertificateVerify_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F6B040, void, ProcessAsTls1, (app::TlsClientCertificateVerify_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F6B3E0, app::RSA*, getClientCertRSA, (app::TlsClientCertificateVerify_1 * this_ptr, app::RSA* priv_key))
    IL2CPP_REGISTER_METHOD(0x01F6B870, app::Byte__Array*, getUnsignedBigInteger, (app::TlsClientCertificateVerify_1 * this_ptr, app::Byte__Array* integer))
} // namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Client::TlsClientCertificateVerify

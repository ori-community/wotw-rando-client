#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::Handshake::Client::TlsClientCertificateVerify {
    IL2CPP_REGISTER_METHOD(0x01F6AC60, void, ctor, (app::TlsClientCertificateVerify_1 * this_ptr, app::Context_1 * context))
    IL2CPP_REGISTER_METHOD(0x01F6A330, void, Update, (app::TlsClientCertificateVerify_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F6AC90, void, ProcessAsSsl3, (app::TlsClientCertificateVerify_1 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478A708, TlsClientCertificateVerify_1_ProcessAsSsl3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F6B040, void, ProcessAsTls1, (app::TlsClientCertificateVerify_1 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04744AD0, TlsClientCertificateVerify_1_ProcessAsTls1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F6B3E0, app::RSA *, getClientCertRSA, (app::TlsClientCertificateVerify_1 * this_ptr, app::RSA * priv_key))
    IL2CPP_REGISTER_METHOD(0x01F6B870, app::Byte__Array *, getUnsignedBigInteger, (app::TlsClientCertificateVerify_1 * this_ptr, app::Byte__Array * integer))
}

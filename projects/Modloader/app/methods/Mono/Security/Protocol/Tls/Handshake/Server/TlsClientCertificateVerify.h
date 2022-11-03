#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificateVerify {
    IL2CPP_REGISTER_METHOD(0x01F72310, void, ctor, (app::TlsClientCertificateVerify * this_ptr, app::Context_1* context, app::Byte__Array* buffer))
    IL2CPP_REGISTER_METHOD(0x01F72350, void, ProcessAsSsl3, (app::TlsClientCertificateVerify * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474A5D8, TlsClientCertificateVerify_ProcessAsSsl3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F72670, void, ProcessAsTls1, (app::TlsClientCertificateVerify * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047329E8, TlsClientCertificateVerify_ProcessAsTls1__MethodInfo)
} // namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Server::TlsClientCertificateVerify

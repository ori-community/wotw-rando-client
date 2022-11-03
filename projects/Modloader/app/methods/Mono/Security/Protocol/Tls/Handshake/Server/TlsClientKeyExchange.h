#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Server::TlsClientKeyExchange {
    IL2CPP_REGISTER_METHOD(0x01F738E0, void, ctor, (app::TlsClientKeyExchange * this_ptr, app::Context_1* context, app::Byte__Array* buffer))
    IL2CPP_REGISTER_METHOD(0x01F73920, void, ProcessAsSsl3, (app::TlsClientKeyExchange * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04770460, TlsClientKeyExchange_ProcessAsSsl3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F73DA0, void, ProcessAsTls1, (app::TlsClientKeyExchange * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470BA50, TlsClientKeyExchange_ProcessAsTls1__MethodInfo)
} // namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Server::TlsClientKeyExchange

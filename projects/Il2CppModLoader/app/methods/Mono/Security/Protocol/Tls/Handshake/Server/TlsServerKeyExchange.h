#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::Handshake::Server::TlsServerKeyExchange {
    IL2CPP_REGISTER_METHOD(0x01F75430, void, ctor, (app::TlsServerKeyExchange * this_ptr, app::Context_1 * context))
    IL2CPP_REGISTER_METHOD(0x01F75460, void, Update, (app::TlsServerKeyExchange * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04795838, TlsServerKeyExchange_Update__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F6CDE0, void, ProcessAsSsl3, (app::TlsServerKeyExchange * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F754B0, void, ProcessAsTls1, (app::TlsServerKeyExchange * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F758C0, app::Byte__Array *, createSignature, (app::TlsServerKeyExchange * this_ptr, app::RSA * rsa, app::Byte__Array * buffer))
}

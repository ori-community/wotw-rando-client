#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Context_1.h>
#include <Modloader/app/structs/RSA.h>
#include <Modloader/app/structs/TlsServerKeyExchange.h>

namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Server::TlsServerKeyExchange {
    IL2CPP_REGISTER_METHOD(0x01F75430, void, ctor, app::TlsServerKeyExchange* this_ptr, app::Context_1* context)
    IL2CPP_REGISTER_METHOD(0x01F75460, void, Update, app::TlsServerKeyExchange* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F6CDE0, void, ProcessAsSsl3, app::TlsServerKeyExchange* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F754B0, void, ProcessAsTls1, app::TlsServerKeyExchange* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F758C0, app::Byte__Array*, createSignature, app::TlsServerKeyExchange* this_ptr, app::RSA* rsa, app::Byte__Array* buffer)
} // namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Server::TlsServerKeyExchange

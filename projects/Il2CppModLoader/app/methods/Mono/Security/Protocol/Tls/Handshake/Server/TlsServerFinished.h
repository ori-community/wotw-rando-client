#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Server::TlsServerFinished {
    IL2CPP_REGISTER_METHOD(0x01F6B960, void, ctor, (app::TlsServerFinished * this_ptr, app::Context_1* context))
    IL2CPP_REGISTER_METHOD(0x01F747D0, void, ProcessAsSsl3, (app::TlsServerFinished * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F74AB0, void, ProcessAsTls1, (app::TlsServerFinished * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F74D10, void, cctor, ())
} // namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Server::TlsServerFinished

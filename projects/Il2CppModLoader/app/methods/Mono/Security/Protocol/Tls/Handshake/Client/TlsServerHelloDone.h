#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Tls::Handshake::Client::TlsServerHelloDone {
    IL2CPP_REGISTER_METHOD(0x01F704A0, void, ctor, (app::TlsServerHelloDone_1 * this_ptr, app::Context_1 * context, app::Byte__Array * buffer))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ProcessAsSsl3, (app::TlsServerHelloDone_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ProcessAsTls1, (app::TlsServerHelloDone_1 * this_ptr))
}

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TlsClientHello_1.h>
#include <Modloader/app/structs/Context_1.h>

namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Client::TlsClientHello {
    IL2CPP_REGISTER_METHOD(0x01F6BF80, void, ctor, (app::TlsClientHello_1 * this_ptr, app::Context_1* context))
    IL2CPP_REGISTER_METHOD(0x01F6BFB0, void, Update, (app::TlsClientHello_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F6C0D0, void, ProcessAsSsl3, (app::TlsClientHello_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F6C5A0, void, ProcessAsTls1, (app::TlsClientHello_1 * this_ptr))
} // namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Client::TlsClientHello

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TlsServerFinished_1.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Context_1.h>

namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Client::TlsServerFinished {
    IL2CPP_REGISTER_METHOD(0x01F6F4B0, void, ctor, (app::TlsServerFinished_1 * this_ptr, app::Context_1* context, app::Byte__Array* buffer))
    IL2CPP_REGISTER_METHOD(0x01F6F4F0, void, Update, (app::TlsServerFinished_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F6F520, void, ProcessAsSsl3, (app::TlsServerFinished_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F6F840, void, ProcessAsTls1, (app::TlsServerFinished_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F6FAF0, void, cctor, ())
} // namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Client::TlsServerFinished

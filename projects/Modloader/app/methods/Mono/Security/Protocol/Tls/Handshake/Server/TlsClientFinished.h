#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TlsClientFinished.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Context_1.h>

namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Server::TlsClientFinished {
    IL2CPP_REGISTER_METHOD(0x01F6F4B0, void, ctor, (app::TlsClientFinished * this_ptr, app::Context_1* context, app::Byte__Array* buffer))
    IL2CPP_REGISTER_METHOD(0x01F72980, void, ProcessAsSsl3, (app::TlsClientFinished * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F72D80, void, ProcessAsTls1, (app::TlsClientFinished * this_ptr))
} // namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Server::TlsClientFinished

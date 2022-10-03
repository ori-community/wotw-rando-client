#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Client::TlsServerFinished {
    IL2CPP_REGISTER_METHOD(0x01F6F4B0, void, ctor, (app::TlsServerFinished_1 * this_ptr, app::Context_1* context, app::Byte__Array* buffer))
    IL2CPP_REGISTER_METHOD(0x01F6F4F0, void, Update, (app::TlsServerFinished_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F6F520, void, ProcessAsSsl3, (app::TlsServerFinished_1 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04775890, TlsServerFinished_1_ProcessAsSsl3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F6F840, void, ProcessAsTls1, (app::TlsServerFinished_1 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04764778, TlsServerFinished_1_ProcessAsTls1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F6FAF0, void, cctor, ())
} // namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Client::TlsServerFinished

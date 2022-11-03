#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Client::TlsServerHello {
    IL2CPP_REGISTER_METHOD(0x01F6FBA0, void, ctor, (app::TlsServerHello_1 * this_ptr, app::Context_1* context, app::Byte__Array* buffer))
    IL2CPP_REGISTER_METHOD(0x01F6FBE0, void, Update, (app::TlsServerHello_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F6CDE0, void, ProcessAsSsl3, (app::TlsServerHello_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F6FE90, void, ProcessAsTls1, (app::TlsServerHello_1 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470DDC0, TlsServerHello_1_ProcessAsTls1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F70360, void, processProtocol, (app::TlsServerHello_1 * this_ptr, int16_t protocol))
    IL2CPP_REGISTER_METHODINFO(0x04722060, TlsServerHello_1_processProtocol__MethodInfo)
} // namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Client::TlsServerHello

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Context_1.h>
#include <Modloader/app/structs/TlsClientHello.h>

namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Server::TlsClientHello {
    IL2CPP_REGISTER_METHOD(0x01F73030, void, ctor, app::TlsClientHello* this_ptr, app::Context_1* context, app::Byte__Array* buffer)
    IL2CPP_REGISTER_METHOD(0x01F73070, void, Update, app::TlsClientHello* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F6CDE0, void, ProcessAsSsl3, app::TlsClientHello* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F730F0, void, ProcessAsTls1, app::TlsClientHello* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F73590, void, processProtocol, app::TlsClientHello* this_ptr, int16_t protocol)
    IL2CPP_REGISTER_METHOD(0x01F736D0, void, selectCipherSuite, app::TlsClientHello* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F738C0, void, selectCompressionMethod, app::TlsClientHello* this_ptr)
} // namespace app::classes::Mono::Security::Protocol::Tls::Handshake::Server::TlsClientHello

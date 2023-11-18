#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ServerRecordProtocol.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/HandshakeMessage.h>
#include <Modloader/app/structs/HandshakeType__Enum.h>
#include <Modloader/app/structs/ServerContext.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/TlsStream.h>

namespace app::classes::Mono::Security::Protocol::Tls::ServerRecordProtocol {
    IL2CPP_REGISTER_METHOD(0x01F7BD10, void, ctor, (app::ServerRecordProtocol * this_ptr, app::Stream* inner_stream, app::ServerContext* context))
    IL2CPP_REGISTER_METHOD(0x01F7BDD0, app::HandshakeMessage*, GetMessage, (app::ServerRecordProtocol * this_ptr, app::HandshakeType__Enum type))
    IL2CPP_REGISTER_METHOD(0x01F7BDE0, void, ProcessHandshakeMessage, (app::ServerRecordProtocol * this_ptr, app::TlsStream* hand_msg))
    IL2CPP_REGISTER_METHOD(0x01F7C020, app::HandshakeMessage*, createClientHandshakeMessage, (app::ServerRecordProtocol * this_ptr, app::HandshakeType__Enum type, app::Byte__Array* buffer))
    IL2CPP_REGISTER_METHOD(0x01F7C720, app::HandshakeMessage*, createServerHandshakeMessage, (app::ServerRecordProtocol * this_ptr, app::HandshakeType__Enum type))
} // namespace app::classes::Mono::Security::Protocol::Tls::ServerRecordProtocol

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/ClientContext.h>
#include <Modloader/app/structs/ClientRecordProtocol.h>
#include <Modloader/app/structs/HandshakeMessage.h>
#include <Modloader/app/structs/HandshakeType__Enum.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/TlsStream.h>

namespace app::classes::Mono::Security::Protocol::Tls::ClientRecordProtocol {
    IL2CPP_REGISTER_METHOD(0x01F66450, void, ctor, app::ClientRecordProtocol* this_ptr, app::Stream* inner_stream, app::ClientContext* context)
    IL2CPP_REGISTER_METHOD(0x01F66510, app::HandshakeMessage*, GetMessage, app::ClientRecordProtocol* this_ptr, app::HandshakeType__Enum type)
    IL2CPP_REGISTER_METHOD(0x01F66520, void, ProcessHandshakeMessage, app::ClientRecordProtocol* this_ptr, app::TlsStream* hand_msg)
    IL2CPP_REGISTER_METHOD(0x01F66760, app::HandshakeMessage*, createClientHandshakeMessage, app::ClientRecordProtocol* this_ptr, app::HandshakeType__Enum type)
    IL2CPP_REGISTER_METHOD(
        0x01F66CD0,
        app::HandshakeMessage*,
        createServerHandshakeMessage,
        app::ClientRecordProtocol* this_ptr,
        app::HandshakeType__Enum type,
        app::Byte__Array* buffer
    )
} // namespace app::classes::Mono::Security::Protocol::Tls::ClientRecordProtocol

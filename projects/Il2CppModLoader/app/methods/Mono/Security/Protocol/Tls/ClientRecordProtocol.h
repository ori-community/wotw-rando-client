#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Mono::Security::Protocol::Tls::ClientRecordProtocol {
    IL2CPP_REGISTER_METHOD(0x01F66450, void, ctor, (app::ClientRecordProtocol * this_ptr, app::Stream* inner_stream, app::ClientContext* context))
    IL2CPP_REGISTER_METHOD(0x01F66510, app::HandshakeMessage*, GetMessage, (app::ClientRecordProtocol * this_ptr, app::HandshakeType__Enum type))
    IL2CPP_REGISTER_METHOD(0x01F66520, void, ProcessHandshakeMessage, (app::ClientRecordProtocol * this_ptr, app::TlsStream* hand_msg))
    IL2CPP_REGISTER_METHOD(0x01F66760, app::HandshakeMessage*, createClientHandshakeMessage, (app::ClientRecordProtocol * this_ptr, app::HandshakeType__Enum type))
    IL2CPP_REGISTER_METHODINFO(0x04764BF0, ClientRecordProtocol_createClientHandshakeMessage__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F66CD0, app::HandshakeMessage*, createServerHandshakeMessage, (app::ClientRecordProtocol * this_ptr, app::HandshakeType__Enum type, app::Byte__Array* buffer))
    IL2CPP_REGISTER_METHODINFO(0x0473E1D8, ClientRecordProtocol_createServerHandshakeMessage__MethodInfo)
} // namespace app::classes::Mono::Security::Protocol::Tls::ClientRecordProtocol

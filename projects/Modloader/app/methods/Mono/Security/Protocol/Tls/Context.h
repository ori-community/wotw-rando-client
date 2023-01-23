#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Context_1.h>
#include <Modloader/app/structs/SecurityProtocolType__Enum_1.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/SecurityCompressionType__Enum.h>
#include <Modloader/app/structs/TlsServerSettings.h>
#include <Modloader/app/structs/TlsClientSettings.h>
#include <Modloader/app/structs/HandshakeType__Enum.h>
#include <Modloader/app/structs/HandshakeState__Enum.h>
#include <Modloader/app/structs/CipherSuiteCollection.h>
#include <Modloader/app/structs/TlsStream.h>
#include <Modloader/app/structs/RecordProtocol.h>
#include <Modloader/app/structs/SecurityParameters.h>

namespace app::classes::Mono::Security::Protocol::Tls::Context {
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_AbbreviatedHandshake, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_AbbreviatedHandshake, (app::Context_1 * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0194FC70, bool, get_ProtocolNegotiated, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0194FC80, void, set_ProtocolNegotiated, (app::Context_1 * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FFEA0, bool, get_ChangeCipherSpecDone, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008496A0, void, set_ChangeCipherSpecDone, (app::Context_1 * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01F69090, app::SecurityProtocolType__Enum_1, get_SecurityProtocol, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04735AD0, Context_1_get_SecurityProtocol__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_SecurityProtocol, (app::Context_1 * this_ptr, app::SecurityProtocolType__Enum_1 value))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::SecurityProtocolType__Enum_1, get_SecurityProtocolFlags, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F69170, int16_t, get_Protocol, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047217E8, Context_1_get_Protocol__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Byte__Array*, get_SessionId, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_SessionId, (app::Context_1 * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, app::SecurityCompressionType__Enum, get_CompressionMethod, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_CompressionMethod, (app::Context_1 * this_ptr, app::SecurityCompressionType__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::TlsServerSettings*, get_ServerSettings, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::TlsClientSettings*, get_ClientSettings, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FCE30, app::HandshakeType__Enum, get_LastHandshakeMsg, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FCE40, void, set_LastHandshakeMsg, (app::Context_1 * this_ptr, app::HandshakeType__Enum value))
    IL2CPP_REGISTER_METHOD(0x003FF3C0, app::HandshakeState__Enum, get_HandshakeState, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F69250, void, set_HandshakeState, (app::Context_1 * this_ptr, app::HandshakeState__Enum value))
    IL2CPP_REGISTER_METHOD(0x00675C60, bool, get_ReceivedConnectionEnd, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00675C70, void, set_ReceivedConnectionEnd, (app::Context_1 * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x008543B0, bool, get_SentConnectionEnd, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC31D0, void, set_SentConnectionEnd, (app::Context_1 * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::CipherSuiteCollection*, get_SupportedCiphers, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_SupportedCiphers, (app::Context_1 * this_ptr, app::CipherSuiteCollection* value))
    IL2CPP_REGISTER_METHOD(0x002FBD20, app::TlsStream*, get_HandshakeMessages, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, uint64_t, get_WriteSequenceNumber, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_WriteSequenceNumber, (app::Context_1 * this_ptr, uint64_t value))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, uint64_t, get_ReadSequenceNumber, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_ReadSequenceNumber, (app::Context_1 * this_ptr, uint64_t value))
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::Byte__Array*, get_ClientRandom, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_ClientRandom, (app::Context_1 * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::Byte__Array*, get_ServerRandom, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_ServerRandom, (app::Context_1 * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::Byte__Array*, get_RandomCS, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC50, void, set_RandomCS, (app::Context_1 * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::Byte__Array*, get_RandomSC, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC70, void, set_RandomSC, (app::Context_1 * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHOD(0x002FBC80, app::Byte__Array*, get_MasterSecret, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC90, void, set_MasterSecret, (app::Context_1 * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHOD(0x002FBCA0, app::Byte__Array*, get_ClientWriteKey, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCB0, void, set_ClientWriteKey, (app::Context_1 * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHOD(0x002FBCC0, app::Byte__Array*, get_ServerWriteKey, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCD0, void, set_ServerWriteKey, (app::Context_1 * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHOD(0x002FBCE0, app::Byte__Array*, get_ClientWriteIV, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCF0, void, set_ClientWriteIV, (app::Context_1 * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::Byte__Array*, get_ServerWriteIV, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD10, void, set_ServerWriteIV, (app::Context_1 * this_ptr, app::Byte__Array* value))
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::RecordProtocol*, get_RecordProtocol, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD70, void, set_RecordProtocol, (app::Context_1 * this_ptr, app::RecordProtocol* value))
    IL2CPP_REGISTER_METHOD(0x01F69260, void, ctor, (app::Context_1 * this_ptr, app::SecurityProtocolType__Enum_1 security_protocol_type))
    IL2CPP_REGISTER_METHOD(0x01F69560, int32_t, GetUnixTime, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F69630, app::Byte__Array*, GetSecureRandomBytes, (app::Context_1 * this_ptr, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01F696F0, void, Clear, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F699E0, void, ClearKeyInfo, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F69B80, app::SecurityProtocolType__Enum_1, DecodeProtocolCode, (app::Context_1 * this_ptr, int16_t code, bool allow_fallback))
    IL2CPP_REGISTER_METHODINFO(0x047462E0, Context_1_DecodeProtocolCode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F69C70, void, ChangeProtocol, (app::Context_1 * this_ptr, int16_t protocol))
    IL2CPP_REGISTER_METHODINFO(0x04710A58, Context_1_ChangeProtocol__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F69DB0, app::SecurityParameters*, get_Current, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F69F20, app::SecurityParameters*, get_Negotiating, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::SecurityParameters*, get_Read, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::SecurityParameters*, get_Write, (app::Context_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F6A090, void, StartSwitchingSecurityParameters, (app::Context_1 * this_ptr, bool client))
    IL2CPP_REGISTER_METHOD(0x01F6A0C0, void, EndSwitchingSecurityParameters, (app::Context_1 * this_ptr, bool client))
} // namespace app::classes::Mono::Security::Protocol::Tls::Context

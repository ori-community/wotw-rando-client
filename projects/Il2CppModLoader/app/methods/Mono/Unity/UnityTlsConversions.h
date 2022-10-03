#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Mono::Unity::UnityTlsConversions {
    IL2CPP_REGISTER_METHOD(0x02490980, app::UnityTls_unitytls_protocol__Enum, GetMinProtocol, (app::SslProtocols__Enum protocols))
    IL2CPP_REGISTER_METHOD(0x02490B10, app::UnityTls_unitytls_protocol__Enum, GetMaxProtocol, (app::SslProtocols__Enum protocols))
    IL2CPP_REGISTER_METHOD(0x02490CA0, app::TlsProtocols__Enum, ConvertProtocolVersion, (app::UnityTls_unitytls_protocol__Enum protocol))
    IL2CPP_REGISTER_METHOD(0x02490CD0, app::AlertDescription__Enum, VerifyResultToAlertDescription, (app::UnityTls_unitytls_x509verify_result__Enum verify_result, app::AlertDescription__Enum default_alert))
    IL2CPP_REGISTER_METHOD(0x024911B0, app::MonoSslPolicyErrors__Enum, VerifyResultToPolicyErrror, (app::UnityTls_unitytls_x509verify_result__Enum verify_result))
} // namespace app::classes::Mono::Unity::UnityTlsConversions

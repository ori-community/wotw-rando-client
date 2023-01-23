#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CipherSuiteCollection.h>
#include <Modloader/app/structs/SecurityProtocolType__Enum_1.h>

namespace app::classes::Mono::Security::Protocol::Tls::CipherSuiteFactory {
    IL2CPP_REGISTER_METHOD(0x01F65BD0, app::CipherSuiteCollection*, GetSupportedCiphers, (bool server, app::SecurityProtocolType__Enum_1 protocol))
    IL2CPP_REGISTER_METHODINFO(0x0476F8F8, CipherSuiteFactory_GetSupportedCiphers__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F65CA0, app::CipherSuiteCollection*, GetTls1SupportedCiphers, ())
    IL2CPP_REGISTER_METHOD(0x01F66060, app::CipherSuiteCollection*, GetSsl3SupportedCiphers, ())
} // namespace app::classes::Mono::Security::Protocol::Tls::CipherSuiteFactory

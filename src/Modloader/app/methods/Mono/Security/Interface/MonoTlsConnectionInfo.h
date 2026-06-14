#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CipherSuiteCode__Enum.h>
#include <Modloader/app/structs/MonoTlsConnectionInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TlsProtocols__Enum.h>

namespace app::classes::Mono::Security::Interface::MonoTlsConnectionInfo {
    IL2CPP_REGISTER_METHOD(0x01B67060, app::CipherSuiteCode__Enum, get_CipherSuiteCode, app::MonoTlsConnectionInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A46540, void, set_CipherSuiteCode, app::MonoTlsConnectionInfo* this_ptr, app::CipherSuiteCode__Enum value)
    IL2CPP_REGISTER_METHOD(0x00CC59E0, app::TlsProtocols__Enum, get_ProtocolVersion, app::MonoTlsConnectionInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_ProtocolVersion, app::MonoTlsConnectionInfo* this_ptr, app::TlsProtocols__Enum value)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_PeerDomainName, app::MonoTlsConnectionInfo* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02A46550, app::String*, ToString, app::MonoTlsConnectionInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MonoTlsConnectionInfo* this_ptr)
} // namespace app::classes::Mono::Security::Interface::MonoTlsConnectionInfo

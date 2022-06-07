#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Ntlm::NtlmSettings {
    IL2CPP_REGISTER_METHOD(0x02A4B800, app::NtlmAuthLevel__Enum, get_DefaultAuthLevel, ())
    IL2CPP_REGISTER_METHOD(0x02A4B8A0, void, cctor, ())
}

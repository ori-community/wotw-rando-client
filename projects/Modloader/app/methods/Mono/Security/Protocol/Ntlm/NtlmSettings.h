#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NtlmAuthLevel__Enum.h>

namespace app::classes::Mono::Security::Protocol::Ntlm::NtlmSettings {
    IL2CPP_REGISTER_METHOD(0x02A4B800, app::NtlmAuthLevel__Enum, get_DefaultAuthLevel, )
    IL2CPP_REGISTER_METHOD(0x02A4B8A0, void, cctor, )
} // namespace app::classes::Mono::Security::Protocol::Ntlm::NtlmSettings

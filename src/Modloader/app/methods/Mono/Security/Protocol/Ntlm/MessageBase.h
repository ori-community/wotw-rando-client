#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/MessageBase.h>
#include <Modloader/app/structs/NtlmFlags__Enum.h>

namespace app::classes::Mono::Security::Protocol::Ntlm::MessageBase {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::MessageBase* this_ptr, int32_t message_type)
    IL2CPP_REGISTER_METHOD(0x00CC59E0, app::NtlmFlags__Enum, get_Flags, app::MessageBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_Flags, app::MessageBase* this_ptr, app::NtlmFlags__Enum value)
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Type, app::MessageBase* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A4B130, app::Byte__Array*, PrepareMessage, app::MessageBase* this_ptr, int32_t message_size)
    IL2CPP_REGISTER_METHOD(0x02A4B2A0, void, Decode, app::MessageBase* this_ptr, app::Byte__Array* message)
    IL2CPP_REGISTER_METHOD(0x02A4B5B0, bool, CheckHeader, app::MessageBase* this_ptr, app::Byte__Array* message)
    IL2CPP_REGISTER_METHOD(0x02A4B750, void, cctor, )
} // namespace app::classes::Mono::Security::Protocol::Ntlm::MessageBase

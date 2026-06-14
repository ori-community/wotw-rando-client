#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type2Message.h>
#include <Modloader/app/structs/Type3Message.h>

namespace app::classes::Mono::Security::Protocol::Ntlm::Type3Message {
    IL2CPP_REGISTER_METHOD(0x02A4C830, void, ctor, app::Type3Message* this_ptr, app::Type2Message* type2)
    IL2CPP_REGISTER_METHOD(0x02A4CB40, void, Finalize, app::Type3Message* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A4CC00, void, set_Domain, app::Type3Message* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_Password, app::Type3Message* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Username, app::Type3Message* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02A4CCE0, void, Decode, app::Type3Message* this_ptr, app::Byte__Array* message)
    IL2CPP_REGISTER_METHOD(0x02A4CF10, app::String*, DecodeString, app::Type3Message* this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t len)
    IL2CPP_REGISTER_METHOD(0x02A4CF90, app::Byte__Array*, EncodeString, app::Type3Message* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x02A4D070, app::Byte__Array*, GetBytes, app::Type3Message* this_ptr)
} // namespace app::classes::Mono::Security::Protocol::Ntlm::Type3Message

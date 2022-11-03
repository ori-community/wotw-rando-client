#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Mono::Security::Protocol::Ntlm::Type1Message {
    IL2CPP_REGISTER_METHOD(0x02A4B920, void, ctor, (app::Type1Message * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A4B9D0, void, set_Domain, (app::Type1Message * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x02A4BAB0, void, set_Host, (app::Type1Message * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x02A4BB90, void, Decode, (app::Type1Message * this_ptr, app::Byte__Array* message))
    IL2CPP_REGISTER_METHOD(0x02A4BCA0, app::Byte__Array*, GetBytes, (app::Type1Message * this_ptr))
} // namespace app::classes::Mono::Security::Protocol::Ntlm::Type1Message

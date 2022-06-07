#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Security::Protocol::Ntlm::Type2Message {
    IL2CPP_REGISTER_METHOD(0x02A4C140, void, ctor, (app::Type2Message * this_ptr, app::Byte__Array * message))
    IL2CPP_REGISTER_METHOD(0x02A4C210, void, Finalize, (app::Type2Message * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A4C2A0, app::Byte__Array *, get_Nonce, (app::Type2Message * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String *, get_TargetName, (app::Type2Message * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A4C3E0, app::Byte__Array *, get_TargetInfo, (app::Type2Message * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A4C520, void, Decode, (app::Type2Message * this_ptr, app::Byte__Array * message))
    IL2CPP_REGISTER_METHOD(0x02A4C6F0, app::Byte__Array *, GetBytes, (app::Type2Message * this_ptr))
}

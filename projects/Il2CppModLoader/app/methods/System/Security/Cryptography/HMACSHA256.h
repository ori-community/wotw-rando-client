#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Security::Cryptography::HMACSHA256 {
    IL2CPP_REGISTER_METHOD(0x020DA160, void, ctor_1, (app::HMACSHA256 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020DA210, void, ctor_2, (app::HMACSHA256 * this_ptr, app::Byte__Array * key))
}

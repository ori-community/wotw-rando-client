#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Security::Cryptography::RIPEMD160 {
    IL2CPP_REGISTER_METHOD(0x028E0840, void, ctor, (app::RIPEMD160 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028E0850, app::RIPEMD160 *, Create_1, ())
    IL2CPP_REGISTER_METHOD(0x028E0990, app::RIPEMD160 *, Create_2, (app::String * hash_name))
}

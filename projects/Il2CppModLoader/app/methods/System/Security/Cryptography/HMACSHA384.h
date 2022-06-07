#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Security::Cryptography::HMACSHA384 {
    IL2CPP_REGISTER_METHOD(0x020DA450, void, ctor_1, (app::HMACSHA384 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020DA500, void, ctor_2, (app::HMACSHA384 * this_ptr, app::Byte__Array * key))
    IL2CPP_REGISTER_METHOD(0x020DA770, int32_t, get_BlockSize, (app::HMACSHA384 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_ProduceLegacyHmacValues, (app::HMACSHA384 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020DA790, void, set_ProduceLegacyHmacValues, (app::HMACSHA384 * this_ptr, bool value))
}

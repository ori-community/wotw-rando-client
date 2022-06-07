#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Security::Cryptography::KeyBuilder {
    IL2CPP_REGISTER_METHOD(0x025CC250, app::RandomNumberGenerator *, get_Rng_1, ())
    IL2CPP_REGISTER_METHOD(0x025CC300, app::Byte__Array *, Key_1, (int32_t size))
    IL2CPP_REGISTER_METHOD(0x025CC3B0, app::Byte__Array *, IV, (int32_t size))
    IL2CPP_REGISTER_METHOD(0x02A3CC60, app::RandomNumberGenerator *, get_Rng_2, ())
    IL2CPP_REGISTER_METHOD(0x02A3CD10, app::Byte__Array *, Key_2, (int32_t size))
}

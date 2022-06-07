#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SpiritFlameProjectileOffsetGenerator {
    IL2CPP_REGISTER_METHOD(0x00D55460, app::Vector3, GenerateSpiritFlameProjectileOffset, (app::SpiritFlameProjectileOffsetGenerator * this_ptr, app::Transform * transform, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00D558C0, void, ctor, (app::SpiritFlameProjectileOffsetGenerator * this_ptr))
}

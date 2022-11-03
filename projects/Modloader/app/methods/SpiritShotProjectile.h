#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SpiritShotProjectile {
    IL2CPP_REGISTER_METHOD(0x00D7BD70, void, Awake, (app::SpiritShotProjectile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D7BD90, void, FixedUpdate, (app::SpiritShotProjectile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D7BDA0, void, SetExplosionParams, (app::SpiritShotProjectile * this_ptr, float scale, float camera_shake))
    IL2CPP_REGISTER_METHOD(0x00D7BDC0, void, ctor, (app::SpiritShotProjectile * this_ptr))
} // namespace app::classes::SpiritShotProjectile

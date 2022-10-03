#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SpikeProjectile {
    IL2CPP_REGISTER_METHOD(0x011C6E80, void, Awake, (app::SpikeProjectile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C6EB0, void, FixedUpdate, (app::SpikeProjectile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C7060, void, OnRicochet, (app::SpikeProjectile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeBashed, (app::SpikeProjectile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C7090, void, ctor, (app::SpikeProjectile * this_ptr))
} // namespace app::classes::SpikeProjectile

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SpiritShardUIShardUpgradeFill {
    IL2CPP_REGISTER_METHOD(0x00D70650, void, SetFill, (app::SpiritShardUIShardUpgradeFill * this_ptr, float fill, bool ignore_time))
    IL2CPP_REGISTER_METHOD(0x00D70980, void, FixedUpdate, (app::SpiritShardUIShardUpgradeFill * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D70AA0, void, ctor, (app::SpiritShardUIShardUpgradeFill * this_ptr))
}

#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SpiritShardUIShardFloatingTooltip {
    IL2CPP_REGISTER_METHOD(0x00D6F470, void, SetAnchor, (app::SpiritShardUIShardFloatingTooltip * this_ptr, app::GameObject* new_anchor))
    IL2CPP_REGISTER_METHOD(0x00D6F790, void, SetAmount, (app::SpiritShardUIShardFloatingTooltip * this_ptr, float xp_cost, app::Color color))
    IL2CPP_REGISTER_METHOD(0x00D6F940, void, ctor, (app::SpiritShardUIShardFloatingTooltip * this_ptr))
} // namespace app::classes::SpiritShardUIShardFloatingTooltip

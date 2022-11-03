#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SpiritShardUIShardBackdrop {
    IL2CPP_REGISTER_METHOD(0x00D6D220, void, SetUpgradeCount, (app::SpiritShardUIShardBackdrop * this_ptr, int32_t actual, int32_t total))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SpiritShardUIShardBackdrop * this_ptr))
} // namespace app::classes::SpiritShardUIShardBackdrop

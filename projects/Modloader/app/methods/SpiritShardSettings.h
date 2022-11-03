#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SpiritShardSettings {
    IL2CPP_REGISTER_METHOD(0x00D68D90, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00D68E30, void, Awake, (app::SpiritShardSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D69060, void, OnDestroy, (app::SpiritShardSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D69110, bool, HasProperSettings, (app::SpiritShardSettings * this_ptr, app::SpiritShardType__Enum shard_type, app::UpgradablePropertyType__Enum property_type))
    IL2CPP_REGISTER_METHOD(0x00D69230, bool, HasSettingsForAbility, (app::SpiritShardSettings * this_ptr, app::SpiritShardType__Enum shard_type))
    IL2CPP_REGISTER_METHOD(0x00D692E0, app::SpiritShardDescription*, GetUpgradableAbility, (app::SpiritShardSettings * this_ptr, app::SpiritShardType__Enum shard_type))
    IL2CPP_REGISTER_METHOD(0x00D69380, bool, IsSpiritShardPassive, (app::SpiritShardSettings * this_ptr, app::SpiritShardType__Enum shard_type))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SpiritShardSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::SpiritShardSettings

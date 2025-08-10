#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>
#include <Modloader/app/structs/SpiritShardUIShardDetails.h>

namespace app::classes::SpiritShardUIShardDetails {
    IL2CPP_REGISTER_METHOD(0x00D6D470, void, Awake, app::SpiritShardUIShardDetails* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D6D7F0, void, OnDestroy, app::SpiritShardUIShardDetails* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D6DA00, void, SetItemDirty, app::SpiritShardUIShardDetails* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D6DA10, void, Show, app::SpiritShardUIShardDetails* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00443C10, void, Hide, app::SpiritShardUIShardDetails* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D6DAE0, void, SetItem, app::SpiritShardUIShardDetails* this_ptr, app::PlayerUberStateShards_Shard* item)
    IL2CPP_REGISTER_METHOD(0x00D6DB20, void, ShowEmptyDetails, app::SpiritShardUIShardDetails* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D6E340, void, UpdateDetails, app::SpiritShardUIShardDetails* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D6E740, void, UpdateUpgradeDetails, app::SpiritShardUIShardDetails* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D6F460, void, ctor, app::SpiritShardUIShardDetails* this_ptr)
} // namespace app::classes::SpiritShardUIShardDetails

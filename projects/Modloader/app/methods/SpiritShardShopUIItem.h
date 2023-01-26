#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SpiritShardShopUIItem.h>

namespace app::classes::SpiritShardShopUIItem {
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::PlayerUberStateShards_Shard*, get_SpiritShard, (app::SpiritShardShopUIItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D693B0, void, Awake, (app::SpiritShardShopUIItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D693C0, void, SetItemContext, (app::SpiritShardShopUIItem * this_ptr, app::Object* context, app::Object* grid_context))
    IL2CPP_REGISTER_METHOD(0x00D694E0, void, OnItemContextDirty, (app::SpiritShardShopUIItem * this_ptr, app::Object* grid_context))
    IL2CPP_REGISTER_METHOD(0x00D694E0, void, Update, (app::SpiritShardShopUIItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D694F0, void, UpdateShard, (app::SpiritShardShopUIItem * this_ptr, app::PlayerUberStateShards_Shard* spirit_shard))
    IL2CPP_REGISTER_METHOD(0x00D69AA0, void, ctor, (app::SpiritShardShopUIItem * this_ptr))
} // namespace app::classes::SpiritShardShopUIItem

#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SpiritShardShopUISubItem {
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::PlayerUberStateShards_Shard*, get_SpiritShard, (app::SpiritShardShopUISubItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D6A600, void, Awake, (app::SpiritShardShopUISubItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D6A620, void, Update, (app::SpiritShardShopUISubItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D6A630, void, SetItemContext, (app::SpiritShardShopUISubItem * this_ptr, app::Object* context, app::Object* grid_context))
    IL2CPP_REGISTER_METHOD(0x00D6A730, void, OnItemContextDirty, (app::SpiritShardShopUISubItem * this_ptr, app::Object* grid_context))
    IL2CPP_REGISTER_METHOD(0x00D6A740, void, SetSpiritShard, (app::SpiritShardShopUISubItem * this_ptr, app::PlayerUberStateShards_Shard* spirit_shard, app::Object* grid_context))
    IL2CPP_REGISTER_METHOD(0x00D6A770, void, UpdateShardIcon, (app::SpiritShardShopUISubItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D6A940, void, UpdateShardProperties, (app::SpiritShardShopUISubItem * this_ptr, app::Object* grid_context, bool initialize))
    IL2CPP_REGISTER_METHOD(0x00D6AA30, void, UpdateShard, (app::SpiritShardShopUISubItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SpiritShardShopUISubItem * this_ptr))
} // namespace app::classes::SpiritShardShopUISubItem

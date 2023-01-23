#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>
#include <Modloader/app/structs/SpiritShardUIItem.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::SpiritShardUIItem {
    IL2CPP_REGISTER_METHOD(0x002FBC80, app::PlayerUberStateShards_Shard*, get_SpiritShard, (app::SpiritShardUIItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D6C400, void, Awake, (app::SpiritShardUIItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D6C430, void, SetItemContext, (app::SpiritShardUIItem * this_ptr, app::Object* context, app::Object* grid_context))
    IL2CPP_REGISTER_METHOD(0x00D6C520, void, OnItemContextDirty, (app::SpiritShardUIItem * this_ptr, app::Object* grid_context))
    IL2CPP_REGISTER_METHOD(0x00D6C530, void, SetSpiritShard, (app::SpiritShardUIItem * this_ptr, app::PlayerUberStateShards_Shard* spirit_shard, app::Object* grid_context))
    IL2CPP_REGISTER_METHOD(0x00D6C570, void, UpdateShardIcon, (app::SpiritShardUIItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D6C860, void, UpdateShardProperties, (app::SpiritShardUIItem * this_ptr, app::Object* grid_context))
    IL2CPP_REGISTER_METHOD(0x00D6D1F0, void, ctor, (app::SpiritShardUIItem * this_ptr))
} // namespace app::classes::SpiritShardUIItem

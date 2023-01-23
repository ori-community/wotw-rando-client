#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>
#include <Modloader/app/structs/SpiritShardUIShardSocket.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SpiritShardType__Enum.h>
#include <Modloader/app/structs/Texture2D.h>

namespace app::classes::SpiritShardUIShardSocket {
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::PlayerUberStateShards_Shard*, get_SpiritShard, (app::SpiritShardUIShardSocket * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D6F980, void, Awake, (app::SpiritShardUIShardSocket * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D6F990, void, SetItemContext, (app::SpiritShardUIShardSocket * this_ptr, app::Object* context, app::Object* grid_context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnItemContextDirty, (app::SpiritShardUIShardSocket * this_ptr, app::Object* grid_context))
    IL2CPP_REGISTER_METHOD(0x00D6FBA0, void, SetShardType, (app::SpiritShardUIShardSocket * this_ptr, app::SpiritShardType__Enum spirit_shard_type))
    IL2CPP_REGISTER_METHOD(0x00D70130, void, UpdateProperties, (app::SpiritShardUIShardSocket * this_ptr, app::Texture2D* icon, int32_t level, int32_t max_level))
    IL2CPP_REGISTER_METHOD(0x00D70630, void, ctor, (app::SpiritShardUIShardSocket * this_ptr))
} // namespace app::classes::SpiritShardUIShardSocket

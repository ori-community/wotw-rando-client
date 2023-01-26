#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerUberStateShards.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/NavigableOnGUI.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>
#include <Modloader/app/structs/SpiritShardType__Enum.h>
#include <Modloader/app/structs/UberStateArchive.h>

namespace app::classes::Moon::uberSerializationWisp::PlayerUberStateShards {
    IL2CPP_REGISTER_METHOD(0x00F406E0, void, ctor, (app::PlayerUberStateShards * this_ptr, app::Action* set_dirty_callback))
    IL2CPP_REGISTER_METHOD(0x00F40DC0, app::PlayerUberStateShards_Shard*, SetAbility, (app::PlayerUberStateShards * this_ptr, app::SpiritShardType__Enum ability, bool value))
    IL2CPP_REGISTER_METHOD(0x00F40EF0, bool, HasAbility, (app::PlayerUberStateShards * this_ptr, app::SpiritShardType__Enum ability))
    IL2CPP_REGISTER_METHOD(0x00F40FA0, app::PlayerUberStateShards_Shard*, GetShard, (app::PlayerUberStateShards * this_ptr, app::SpiritShardType__Enum shard))
    IL2CPP_REGISTER_METHOD(0x00F41040, int32_t, GetShardLevel, (app::PlayerUberStateShards * this_ptr, app::SpiritShardType__Enum shard))
    IL2CPP_REGISTER_METHOD(0x00F410F0, int32_t, GetShardMaxLevel, (app::PlayerUberStateShards * this_ptr, app::SpiritShardType__Enum shard))
    IL2CPP_REGISTER_METHOD(0x00F411B0, void, AddShardSlot, (app::PlayerUberStateShards * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F411C0, void, SetShardSlotCount, (app::PlayerUberStateShards * this_ptr, int32_t count))
    IL2CPP_REGISTER_METHOD(0x00F411D0, app::PlayerUberStateShards_Shard*, GetShardAtSlot, (app::PlayerUberStateShards * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_ShardSlotCount, (app::PlayerUberStateShards * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F412F0, void, Save, (app::PlayerUberStateShards * this_ptr, app::UberStateArchive* archive, app::PlayerUberStateShards* abilities))
    IL2CPP_REGISTER_METHOD(0x00F41500, void, Load, (app::PlayerUberStateShards * this_ptr, app::UberStateArchive* archive, int32_t store_version))
    IL2CPP_REGISTER_METHOD(0x00F417C0, void, OnGui, (app::PlayerUberStateShards * this_ptr, app::NavigableOnGUI* gui))
    IL2CPP_REGISTER_METHOD(0x00F41A00, int64_t, get_Size, (app::PlayerUberStateShards * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F41AB0, void, RunSetDirtyCallback, (app::PlayerUberStateShards * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F41C70, void, cctor, ())
} // namespace app::classes::Moon::uberSerializationWisp::PlayerUberStateShards

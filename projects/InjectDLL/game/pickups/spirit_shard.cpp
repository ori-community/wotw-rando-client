#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>

using namespace modloader;

namespace
{
    bool collecting_spirit_shard = false;

    IL2CPP_INTERCEPT(, SeinPickupProcessor, void, OnCollectSpiritShardPickup, (app::SeinPickupProcessor* this_ptr, app::SpiritShardPickup* spiritShardPickup)) {
        ScopedSetter setter(collecting_spirit_shard, true);
	    SeinPickupProcessor::OnCollectSpiritShardPickup(this_ptr, spiritShardPickup);
    }

    IL2CPP_INTERCEPT(, SeinPickupProcessor, void, OnCollectedShardSlotUpgrade, (app::SeinPickupProcessor* this_ptr, app::ShardSlotUpgradePickup* shardSlotPickup)) {
        ScopedSetter setter(collecting_spirit_shard, true);
	    SeinPickupProcessor::OnCollectedShardSlotUpgrade(this_ptr, shardSlotPickup);
    }

    IL2CPP_INTERCEPT_OVERLOAD(, PlayerSpiritShards, app::PlayerUberStateShards_Shard*, AddNewShardToInventory,
        (app::PlayerSpiritShards* this_ptr, uint8_t spiritShardType), (SpiritShardType)) {
	    if(!collecting_spirit_shard)
            return PlayerSpiritShards::AddNewShardToInventory(this_ptr, spiritShardType);

        auto* result = PlayerSpiritShards::AddNewShardToInventory(this_ptr, spiritShardType);
        if (result)
        {
            //Rollback if shard was new
            result->fields.m_gained = false;
            result->fields.m_isNew = false;
        }

        return result;
    }

    IL2CPP_INTERCEPT(, PlayerSpiritShards, void, AddGlobalShardSlot, (app::PlayerSpiritShards* this_ptr)) {
	    if(!collecting_spirit_shard)
		    PlayerSpiritShards::AddGlobalShardSlot(this_ptr);
    }
}

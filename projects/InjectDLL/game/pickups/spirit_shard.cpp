#include <Il2CppModLoader/interception_macros.h>

bool collecting_spirit_shard = false;

IL2CPP_INTERCEPT(, SeinPickupProcessor, void, OnCollectSpiritShardPickup, (app::SeinPickupProcessor* this_ptr, app::SpiritShardPickup* spiritShardPickup)) {
	collecting_spirit_shard = true;
	SeinPickupProcessor::OnCollectSpiritShardPickup(this_ptr, spiritShardPickup);
	collecting_spirit_shard = false;
}

IL2CPP_INTERCEPT(, SeinPickupProcessor, void, OnCollectedShardSlotUpgrade, (app::SeinPickupProcessor* this_ptr, app::ShardSlotUpgradePickup* shardSlotPickup)) {
	collecting_spirit_shard = true;
	SeinPickupProcessor::OnCollectedShardSlotUpgrade(this_ptr, shardSlotPickup);
	collecting_spirit_shard = false;
}

IL2CPP_INTERCEPT_OVERLOAD(, PlayerSpiritShards, app::PlayerUberStateShards_Shard*, AddNewShardToInventory,
    (app::PlayerSpiritShards* this_ptr, uint8_t spiritShardType), (SpiritShardType)) {
	if(collecting_spirit_shard)
	{
		app::PlayerUberStateShards_Shard* result = PlayerSpiritShards::AddNewShardToInventory(this_ptr, spiritShardType);
		if(result)
		{
			//Rollback if shard was new
			result->fields.m_gained = false;
			result->fields.m_isNew = false;
		}

		return result;
	}

	return PlayerSpiritShards::AddNewShardToInventory(this_ptr, spiritShardType);
}

IL2CPP_INTERCEPT(, PlayerSpiritShards, void, AddGlobalShardSlot, (app::PlayerSpiritShards* this_ptr)) {
	if(collecting_spirit_shard)
		return;
	
	PlayerSpiritShards::AddGlobalShardSlot(this_ptr);
}

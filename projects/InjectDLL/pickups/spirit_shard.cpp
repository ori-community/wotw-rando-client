#include <interception_macros.h>

bool collecting_spirit_shard = false;

INTERCEPT(5822720, void, SeinPickupProcessor__OnCollectSpiritShardPickup, (app::SeinPickupProcessor* this_ptr, app::SpiritShardPickup* spiritShardPickup)) {
	collecting_spirit_shard = true;
	SeinPickupProcessor__OnCollectSpiritShardPickup(this_ptr, spiritShardPickup);
	collecting_spirit_shard = false;
}

INTERCEPT(5810656, void, SeinPickupProcessor__OnCollectedShardSlotUpgrade, (app::SeinPickupProcessor* this_ptr, app::ShardSlotUpgradePickup* shardSlotPickup)) {
	collecting_spirit_shard = true;
	SeinPickupProcessor__OnCollectedShardSlotUpgrade(this_ptr, shardSlotPickup);
	collecting_spirit_shard = false;
}

INTERCEPT(17712336, app::PlayerUberStateShards_Shard*, PlayerSpiritShards__AddNewShardToInventory, (app::PlayerSpiritShards* this_ptr, uint8_t spiritShardType)) {
	if(collecting_spirit_shard)
	{
		app::PlayerUberStateShards_Shard* result = PlayerSpiritShards__AddNewShardToInventory(this_ptr, spiritShardType);
		if(result)
		{
			//Rollback if shard was new
			result->fields.m_gained = false;
			result->fields.m_isNew = false;
		}

		return result;
	}

	return PlayerSpiritShards__AddNewShardToInventory(this_ptr, spiritShardType);
}

INTERCEPT(17711920, void, PlayerSpiritShards__AddGlobalShardSlot, (app::PlayerSpiritShards* this_ptr)) {
	if(collecting_spirit_shard)
		return;
	
	PlayerSpiritShards__AddGlobalShardSlot(this_ptr);
}

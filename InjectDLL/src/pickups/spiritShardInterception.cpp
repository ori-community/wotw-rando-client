#include "pch.h"
#include "interceptionMacros.h"

bool collecting_spirit_shard = false;
INTERCEPT(5822720, void, SeinPickupProcessor__OnCollectSpiritShardPickup, (SeinPickupProcessor_o* this_ptr, SpiritShardPickup_o* spiritShardPickup), {
	collecting_spirit_shard = true;
	SeinPickupProcessor__OnCollectSpiritShardPickup(this_ptr, spiritShardPickup);
	collecting_spirit_shard = false;
});

INTERCEPT(5810656, void, SeinPickupProcessor__OnCollectedShardSlotUpgrade, (SeinPickupProcessor_o* this_ptr, ShardSlotUpgradePickup_o* shardSlotPickup), {
	collecting_spirit_shard = true;
	SeinPickupProcessor__OnCollectedShardSlotUpgrade(this_ptr, shardSlotPickup);
	collecting_spirit_shard = false;
});

INTERCEPT(17712336, Moon_uberSerializationWisp_PlayerUberStateShards_Shard_o*, PlayerSpiritShards__AddNewShardToInventory, (PlayerSpiritShards_o* this_ptr, uint8_t spiritShardType), {
	if(collecting_spirit_shard){
		Moon_uberSerializationWisp_PlayerUberStateShards_Shard_o* result = PlayerSpiritShards__AddNewShardToInventory(this_ptr, spiritShardType);
		if(result){
			//Rollback if shard was new
			result->m_gained = false;
			result->m_isNew = false;
		}
		return result;
		}
	return PlayerSpiritShards__AddNewShardToInventory(this_ptr, spiritShardType);
});

INTERCEPT(17711920, void, PlayerSpiritShards__AddGlobalShardSlot, (PlayerSpiritShards_o* this_ptr), {
	if(collecting_spirit_shard)
		return;
	
	PlayerSpiritShards__AddGlobalShardSlot(this_ptr);
});
#pragma once
#include <Modloader/app/structs/SpiritShardType__Enum.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>
#include <Randomizer/game/shops/shared_grom_opher_tuley.h>


namespace randomizer::game::shops::twillen {
    std::optional<ShopSlot::is_purchased_state_id_t> get_state_id_optional_for_spirit_shard_type(app::SpiritShardType__Enum spirit_shard_type);
    ShopSlot::is_purchased_state_id_t get_state_id_for_spirit_shard_type(app::SpiritShardType__Enum spirit_shard_type);
    ShopCollection::twillen_shop_t::slot_t& get_slot(app::SpiritShardType__Enum spirit_shard_type);
    ShopCollection::twillen_shop_t::slot_t& get_slot(const app::PlayerUberStateShards_Shard* upgradable_shard_item);
    ShopkeeperItemRuntimeAttributes get_slot_attributes(ShopCollection::twillen_shop_t::slot_t& slot);
}

#pragma once
#include <Modloader/app/structs/SpiritShardType__Enum.h>


namespace randomizer::game::shops::twillen {
    ShopSlot::is_purchased_state_id_t get_state_id_for_spirit_shard_type(app::SpiritShardType__Enum spirit_shard_type);
    ShopCollection::twillen_shop_t::slot_t& get_slot(app::SpiritShardType__Enum spirit_shard_type);
}

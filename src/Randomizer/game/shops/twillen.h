#pragma once
#include <Modloader/app/structs/SpiritShardType__Enum.h>


namespace randomizer::game::shops::twillen {
    core::api::uber_states::UberState get_slot_key_for_spirit_shard_type(app::SpiritShardType__Enum spirit_shard_type);
    ShopCollection::twillen_shop_t::slot_t& get_slot(app::SpiritShardType__Enum spirit_shard_type);
}

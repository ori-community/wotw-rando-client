#pragma once
#include <Core/api/uber_states/uber_state.h>
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Randomizer/game/shops/shared_grom_opher_tuley.h>
#include <Randomizer/game/shops/shop.h>


namespace randomizer::game::shops::grom {
    ShopCollection::grom_shop_t::slot_t& get_slot(const app::SerializedByteUberState* vanilla_state);
    ShopCollection::grom_shop_t::slot_t& get_slot(const app::BuilderItem* builder_item);
    ShopkeeperItemRuntimeAttributes get_slot_attributes(ShopCollection::grom_shop_t::slot_t& slot);
}

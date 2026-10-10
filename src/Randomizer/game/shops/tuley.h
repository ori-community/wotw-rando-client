#pragma once
#include <Core/api/uber_states/uber_state.h>
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Randomizer/game/shops/shared_grom_opher_tuley.h>
#include <Randomizer/game/shops/shop.h>


namespace randomizer::game::shops::tuley {
    ShopCollection::tuley_shop_t::slot_t& get_slot(const app::SerializedByteUberState* vanilla_state);
    ShopCollection::tuley_shop_t::slot_t& get_slot(const app::GardenerItem* gardener_item);
    ShopkeeperItemRuntimeAttributes get_slot_attributes(ShopCollection::tuley_shop_t::slot_t& slot);
}

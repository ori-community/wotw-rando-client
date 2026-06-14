#pragma once
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Core/api/uber_states/uber_state.h>
#include <Randomizer/game/shops/shop.h>


namespace randomizer::game::shops::tuley {
    ShopCollection::tuley_shop_t::slot_t& get_slot(const app::SerializedByteUberState* vanilla_state);
}

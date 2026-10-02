#pragma once
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Core/api/uber_states/uber_state.h>
#include <Randomizer/game/shops/shop.h>


namespace randomizer::game::shops::opher {
    ShopSlot::is_purchased_state_id_t get_slot_key_for_ability_types(app::AbilityType__Enum acquired_ability_type, app::AbilityType__Enum required_ability);
    ShopCollection::opher_shop_t::slot_t& get_slot(app::AbilityType__Enum acquired_ability_type, app::AbilityType__Enum required_ability);
}

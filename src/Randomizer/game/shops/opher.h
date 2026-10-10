#pragma once
#include <Core/api/uber_states/uber_state.h>
#include <Modloader/app/structs/BuilderItem.h>
#include <Modloader/app/structs/WeaponmasterItem.h>
#include <Randomizer/game/shops/shared_grom_opher_tuley.h>
#include <Randomizer/game/shops/shop.h>


namespace randomizer::game::shops::opher {
    ShopSlot::is_purchased_state_id_t get_slot_key_for_ability_types(app::AbilityType__Enum acquired_ability_type, app::AbilityType__Enum required_ability);
    ShopCollection::opher_shop_t::slot_t& get_slot(app::AbilityType__Enum acquired_ability_type, app::AbilityType__Enum required_ability);
    ShopCollection::opher_shop_t::slot_t& get_slot(const app::WeaponmasterItem* weaponmaster_item);
    ShopkeeperItemRuntimeAttributes get_slot_attributes(ShopCollection::opher_shop_t::slot_t& slot);
}

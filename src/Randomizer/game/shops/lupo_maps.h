#pragma once
#include <Modloader/app/structs/GameWorldAreaID__Enum.h>
#include <Core/api/uber_states/uber_state.h>
#include <Randomizer/game/shops/shop.h>


namespace randomizer::game::shops::lupo_maps {
    core::api::uber_states::UberState get_slot_key_for_game_world_area(app::GameWorldAreaID__Enum game_world_area);
    ShopCollection::lupo_maps_shop_t::slot_t& get_slot(app::GameWorldAreaID__Enum game_world_area);
}

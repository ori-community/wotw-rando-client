#pragma once

#include <Common/ext.h>

#include <Core/api/uber_states/uber_state.h>

#include <Modloader/app/structs/SpiritShardType__Enum.h>

#include <Randomizer/game/shops/shop_data.h>

namespace randomizer::game::shops {
    enum class ShopType {
        None,
        Lupo,
        Grom,
        Opher,
        Twillen,
        Tuley,
        TOTAL
    };

    using opher_key = std::pair<app::AbilityType__Enum, app::AbilityType__Enum>;
    using twillen_key = app::SpiritShardType__Enum;
    using lupo_key = core::api::uber_states::UberState;
    using grom_key = core::api::uber_states::UberState;
    using tuley_key = core::api::uber_states::UberState;

    ShopData<opher_key, pair_hash>& opher_shop();
    ShopData<twillen_key>& twillen_shop();
    ShopData<lupo_key>& lupo_shop();
    ShopData<grom_key>& grom_shop();
    ShopData<tuley_key>& tuley_shop();

    ShopSlot* shop_slot_from_state(core::api::uber_states::UberState state);
    void reset_shop_data();
    bool is_owned(ShopSlot const& slot);
    void buy_item(ShopSlot const& slot);
    bool is_in_shop(ShopType type);
} // namespace randomizer::game::shops

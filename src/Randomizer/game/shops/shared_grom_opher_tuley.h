#pragma once
#include <Randomizer/game/shops/shop.h>


namespace randomizer::game::shops {
    struct ShopkeeperItemRuntimeAttributes {
        SlotVisibility visibility;
        bool is_affordable;
        bool is_owned;
        int cost;
        std::string name_message;
        std::string description_message;
        ShopType shop_type;

        bool can_purchase() const {
            return visibility == SlotVisibility::Visible && is_affordable && !is_owned;
        }
    };
} // namespace

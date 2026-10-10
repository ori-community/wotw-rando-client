#pragma once
#include <Modloader/app/structs/MessageProvider.h>
#include <Randomizer/game/shops/shop.h>


namespace randomizer::game::shops {
    struct ShopkeeperItemRuntimeAttributes {
        SlotVisibility visibility;
        bool is_affordable;
        bool is_owned;
        int cost;
        app::MessageProvider* name_message_provider;
        app::MessageProvider* description_message_provider;
        ShopType shop_type;

        bool can_purchase() const {
            return visibility == SlotVisibility::Visible && is_affordable && !is_owned;
        }
    };
} // namespace

#include <Randomizer/randomizer.h>
#include <Randomizer/map/map_icons.h>

#include "Randomizer/game/shops/shop.h"


namespace {
    using namespace randomizer::map::icons;
    using namespace randomizer::map::filter;
    using namespace randomizer::game::shops;

    std::array<MapIcon::ptr_t, 7> icons;

    template<int SLOT_COUNT, typename SLOT_T = ShopUIShopSlot>
    MapIcon::visibility_effect_fn_t shop_visibility_effect(Shop<SLOT_COUNT, SLOT_T>& shop) {
        return [&shop](const MapFilter& filter) -> MapIcon::visibility_t {
            if (filter != MapFilter::InLogic && filter != MapFilter::Collectibles) {
                return MapIcon::Visibilities::invisible;
            }

            switch (filter) {
                case MapFilter::InLogic:
                    for (const auto & state: shop.slots() | std::views::keys) {
                        const auto location = randomizer::location_collection().location(
                            core::api::uber_states::UberStateCondition(state, BooleanOperator::Greater, 0)
                        );

                        if (location.has_value()) {
                            // TODO[InLogicFilter]: If location is in logic...
                            // return MapIcon::Visibilities::visible;
                        }
                    }

                    return MapIcon::Visibilities::out_of_logic();
                case MapFilter::Collectibles:
                    return MapIcon::Visibilities::visible;
                default:
                    return MapIcon::Visibilities::invisible;
            }
        };
    }

    [[maybe_unused]]
    auto on_location_collection_loaded = randomizer::event_bus().register_handler(
        randomizer::RandomizerEvent::LocationCollectionLoaded,
        EventTiming::After,
        [](auto, auto) {
            icons = {
                // MarshPastOpher.Opher
                std::make_shared<MapIcon>(MapIcon::Type::Weaponmaster, "Opher", app::Vector2{-597.1f, -4291.3f}, shop_visibility_effect(shops().opher_shop()), MapIcon::ScaleMode::Linear),
                // GladesTown.Opher
                std::make_shared<MapIcon>(MapIcon::Type::Weaponmaster, "Opher", app::Vector2{-203.9f, -4146.4f}, shop_visibility_effect(shops().opher_shop()), MapIcon::ScaleMode::Linear),
                // InnerWellspring.Opher
                std::make_shared<MapIcon>(MapIcon::Type::Weaponmaster, "Opher", app::Vector2{-1259.7f, -3675.5f}, shop_visibility_effect(shops().opher_shop()), MapIcon::ScaleMode::Linear),

                // WestHollow.Twillen
                std::make_shared<MapIcon>(MapIcon::Type::Shardtrader, "Twillen", app::Vector2{-281.3f, -4236.4f}, shop_visibility_effect(shops().twillen_shop()), MapIcon::ScaleMode::Linear),
                // GladesTown.Twillen
                std::make_shared<MapIcon>(MapIcon::Type::Shardtrader, "Twillen", app::Vector2{-410.5f, -4158.9f}, shop_visibility_effect(shops().twillen_shop()), MapIcon::ScaleMode::Linear),

                // GladesTown.Grom
                std::make_shared<MapIcon>(MapIcon::Type::Builder, "Grom", app::Vector2{-319.1f, -4150.1f}, shop_visibility_effect(shops().grom_shop()), MapIcon::ScaleMode::Linear),

                // GladesTown.Lupo
                std::make_shared<MapIcon>(MapIcon::Type::Builder, "Lupo", app::Vector2{-212.3f, -4158.8f}, shop_visibility_effect(shops().lupo_shop()), MapIcon::ScaleMode::Linear),

                // GladesTown.Tuley (not implemented)
                // std::make_shared<MapIcon>(MapIcon::Type::Gardener, "Tuley", app::Vector2{-170.0f, -4137.7f}, shop_visibility_effect(shops().tuley_shop()), MapIcon::ScaleMode::Linear),
            };
        }
    );
}

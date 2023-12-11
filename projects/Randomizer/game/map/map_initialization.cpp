
#include <Core/api/uber_states/uber_state_condition.h>
#include <Core/settings.h>

#include <Randomizer/game/map/map.h>
#include <Randomizer/game/shops/shop.h>
#include <Randomizer/randomizer.h>

namespace randomizer::game::map {
    namespace {
        std::string icon_label(const std::optional<location_data::Location>& location, const core::api::uber_states::UberStateCondition& condition) {
            auto name = location.has_value() && !location->name.empty() ? location->name : " ";
            return std::format("[no_color([if([state_bool(34543|11226)],[pickup_text({0})],{1})])]", condition.serialize(), name);
        }

        MapIcon select_icon(const location_data::Location& location) {
            if (location.name.ends_with("SpiritTrial")) {
                return MapIcon::RaceEnd;
            }

            switch (location.type) {
                case location_data::LocationType::SpiritLight:
                    return MapIcon::Experience;
                case location_data::LocationType::Shard:
                    return MapIcon::SpiritShard;
                case location_data::LocationType::Life:
                    return MapIcon::HealthFragment;
                case location_data::LocationType::Energy:
                    return MapIcon::EnergyFragment;
                case location_data::LocationType::Ore:
                    return MapIcon::Ore;
                case location_data::LocationType::ShardSlot:
                    return MapIcon::ShardSlotUpgrade;
                case location_data::LocationType::Keystone:
                case location_data::LocationType::Eyestone:
                    return MapIcon::Keystone;
                case location_data::LocationType::Quest:
                    return MapIcon::QuestItem;
                case location_data::LocationType::Seed:
                    return MapIcon::Seed;
                case location_data::LocationType::Ability:
                    return MapIcon::AbilityPedestal;
                case location_data::LocationType::Shop:
                    return MapIcon::Mapmaker;
                case location_data::LocationType::Wisp:
                    return MapIcon::QuestItem;
                case location_data::LocationType::Unknown:
                    return MapIcon::Eyestone; // Invisible
                case location_data::LocationType::MapShop:
                    return MapIcon::Mapmaker;
                default:
                    throw std::exception("Unknown location type");
            }
        }

        IconVisibilityResult check_shop(std::vector<shops::ShopSlot*> const& slots) {
            if (active_filter() == Filters::Spoilers) {
                return IconVisibilityResult::Show;
            }

            bool in_logic = false;
            bool all_bought = true;
            for (auto const& slot: slots) {
                if (all_bought && !slot->state.get<bool>()) {
                    all_bought = false;
                }

                if (!in_logic && reach_check().reachable(core::api::uber_states::UberStateCondition(slot->state))) {
                    in_logic = true;
                }

                if (in_logic && !all_bought) {
                    break;
                }
            }

            if (all_bought) {
                return IconVisibilityResult::Hide;
            }

            return in_logic //
                ? IconVisibilityResult::Show
                : eps_equals(core::settings::map_icon_transparency(), 0.f) //
                    ? IconVisibilityResult::Hide
                    : IconVisibilityResult::ShowTransparent;
        }

        std::shared_ptr<Icon> make_icon(
            const MapIcon map_icon,
            std::string const& label,
            std::string const& name,
            const app::Vector2 position,
            const std::optional<core::api::uber_states::UberState> state = std::nullopt
        ) {
            auto icon = add_icon(FilterFlag::InLogic | FilterFlag::Spoilers);
            icon->icon().set(map_icon);
            icon->label().set(label);
            icon->name().set(name);
            icon->position().set(position);
            if (state.has_value()) {
                add_icon_visibility_callback(icon, [state](auto) {
                    return state.value().get<bool>() ? IconVisibilityResult::Hide : IconVisibilityResult::Show;
                });
            }

            return icon;
        }

        void npc_icons() {
            auto icon = make_icon(MapIcon::Weaponmaster, "Opher", "MarshPastOpher.Opher", {-597.1f, -4291.3f});
            add_icon_visibility_callback(icon, [](auto) { return check_shop(shops::opher_shop().slots()); });

            icon = make_icon(MapIcon::Shardtrader, "Twillen", "WestHollow.Twillen", {-281.3f, -4236.4f});
            add_icon_visibility_callback(icon, [](auto) { return check_shop(shops::twillen_shop().slots()); });

            icon = make_icon(MapIcon::Weaponmaster, "Opher", "GladesTown.Opher", {-203.9f, -4146.4f});
            add_icon_visibility_callback(icon, [](auto) { return check_shop(shops::opher_shop().slots()); });

            icon = make_icon(MapIcon::Mapmaker, "Lupo", "GladesTown.Lupo", {-212.3f, -4158.8f});
            add_icon_visibility_callback(icon, [](auto) { return check_shop(shops::lupo_shop().slots()); });

            icon = make_icon(MapIcon::Shardtrader, "Twillen", "GladesTown.Twillen", {-410.5f, -4158.9f});
            add_icon_visibility_callback(icon, [](auto) { return check_shop(shops::twillen_shop().slots()); });

            icon = make_icon(MapIcon::Builder, "Grom", "GladesTown.Grom", {-319.1f, -4150.1f});
            add_icon_visibility_callback(icon, [](auto) { return check_shop(shops::grom_shop().slots()); });

            icon = make_icon(MapIcon::Gardener, "Tuley", "GladesTown.Tuley", {-170.0f, -4137.7f});
            add_icon_visibility_callback(icon, [](auto) { return check_shop(shops::tuley_shop().slots()); });

            icon = make_icon(MapIcon::Weaponmaster, "Opher", "InnerWellspring.Opher", {-1259.7f, -3675.5f});
            add_icon_visibility_callback(icon, [](auto) { return check_shop(shops::opher_shop().slots()); });
        }

        void one_way_walls() {}

        void purple_walls() {
            make_icon(MapIcon::PurpleWall, "Purple Wall", "EastHollow.GladesApproachOrePurpleWall", {-105.57f, -4188.93f});
            make_icon(MapIcon::PurpleWall, "Purple Wall", "Glades.GromsPurpleWall", {-161.21f, -4153.89f});
            make_icon(MapIcon::PurpleFloor, "Purple Wall", "EastHollow.AboveBashPurpleFloor", {-5.76f, -4267.23f});
            make_icon(MapIcon::PurpleFloor, "Purple Wall", "EastPools.LupoAreaPurpleFloor", {-1415.27f, -4165.21f});
            make_icon(MapIcon::PurpleWall, "Purple Wall", "EastPools.PurpleWallHCPurpleWall", {-1285.69f, -4086.48f});
            make_icon(MapIcon::PurpleWall, "Purple Wall", "LowerWastes.PurpleWallEXPurpleWall", {1543.66f, -3996.14f});
            make_icon(MapIcon::PurpleWall, "Purple Wall", "LowerWastes.LastStandShardPurpleWall", {1826.43f, -3934.01f});
            make_icon(MapIcon::PurpleWall, "Purple Wall", "UpperWastes.PurpleWallEXPurpleWall", {1994.33f, -3829.12f});
            make_icon(MapIcon::PurpleWall, "Purple Wall", "UpperWastes.LeverPurpleWall", {2016.79f, -3790.23f});
            make_icon(MapIcon::PurpleWall, "Purple Wall", "UpperWastes.PurpleWallHCPurpleWall", {2038.27f, -3840.74f});
        }

        void yellow_walls() {
            make_icon(MapIcon::YellowWall, "Yellow Wall", "WoodsMain.YellowWallEXYellowWall", {1066.15f, -4098.06f});
            make_icon(MapIcon::YellowWall, "Yellow Wall", "WoodsMain.FourKeystoneRoomYellowWall", {900.41f, -4144.29f});
        }

        auto initialized = false;
        auto on_ready = event_bus().register_handler(RandomizerEvent::LocationCollectionLoaded, EventTiming::After, [](auto, auto) {
            if (initialized) {
                return;
            }

            auto game_finished = core::api::uber_states::UberState(34543, 11226);
            initialized = true;
            for (auto i = 0; i < static_cast<int>(GameArea::TOTAL); ++i) {
                const auto area = static_cast<GameArea>(i);
                if (area == GameArea::Void) {
                    continue;
                }

                for (const auto& location: location_collection().locations(area)) {
                    if (!location.map_position.has_value() || location.type == location_data::LocationType::Shop) {
                        continue;
                    }

                    const auto icon = add_icon(FilterFlag::InLogic | FilterFlag::Spoilers);
                    const auto condition = location.condition;
                    icon->icon().assign([](auto) {}, [condition, game_finished] {
                        const auto new_location = location_collection().location(condition);
                        return !new_location.has_value() || game_finished.get<bool>() ? game_seed().icon(condition) : select_icon(new_location.value());
                    });

                    icon->position().set(location.map_position.value());
                    icon->name().set(location.name);
                    icon->label().set(icon_label(location, location.condition));
                    add_icon_visibility_callback(icon, [location](auto) {
                        if (active_filter() == Filters::Spoilers) {
                            return IconVisibilityResult::Show;
                        }

                        // Don't show icon if it has been picked up.
                        if (location.condition.resolve()) {
                            return IconVisibilityResult::Hide;
                        }

                        // Show icon based on if it is reachable or not.
                        return reach_check().reachable(location.condition) //
                            ? IconVisibilityResult::Show
                            : eps_equals(core::settings::map_icon_transparency(), 0.f) //
                                ? IconVisibilityResult::Hide
                                : IconVisibilityResult::ShowTransparent;
                    });
                }
            }

            npc_icons();
            one_way_walls();
            purple_walls();
        });
    } // namespace
} // namespace randomizer::game::map

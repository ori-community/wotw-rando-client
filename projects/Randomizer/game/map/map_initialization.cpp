#include <game/map/map.h>

#include <Core/api/uber_states/uber_state_condition.h>
#include <Core/settings.h>

#include <Modloader/modloader.h>

#include <Randomizer/randomizer.h>

namespace randomizer::game::map {
    namespace {

        std::string icon_label(const std::optional<location_data::Location>& location, const core::api::uber_states::UberStateCondition& condition) {
            auto name = location.has_value() && !location->name.empty() ? location->name : " ";
            return std::format("[no_color([if([state_bool(34543|11226)],[pickup_text({0})],{1})])]", condition.serialize(), name);
        }

        MapIcon select_icon(const location_data::Location& location) {
            if (location.name.ends_with("SpiritTrial")) {
                return MapIcon::RaceStart;
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
                    return MapIcon::Keystone;
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
                default:
                    throw std::exception("Unknown location type");
            }
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
                if (area == GameArea::Void || area == GameArea::Shop) {
                    continue;
                }

                for (const auto& location: location_collection().locations(area)) {
                    if (!location.map_position.has_value()) {
                        continue;
                    }

                    const auto icon = add_icon(FilterFlag::InLogic | FilterFlag::Spoilers);
                    icon->icon().assign([](auto) {}, [location, game_finished] {
                        return game_finished.get<bool>() ? game_seed().icon(location.condition) : select_icon(location);
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

            auto icon = add_icon(FilterFlag::InLogic | FilterFlag::Spoilers);
            icon->icon().set(MapIcon::Weaponmaster);
            icon->label().set("Opher");
            icon->name().set("MarshPastOpher.Opher");
            icon->position().set({-597.1f, -4291.3f});
            add_icon_visibility_callback(icon, [](auto) {
                if (active_filter() == Filters::Spoilers) {
                    return IconVisibilityResult::Show;
                }

                const auto is_reachable = reach_check().reachable({
                    core::api::uber_states::UberState(UberStateGroup::OpherShop, 23),
                    BooleanOperator::Greater,
                    0,
                });

                return is_reachable ? IconVisibilityResult::Show : IconVisibilityResult::ShowTransparent;
            });

            icon = add_icon(FilterFlag::InLogic | FilterFlag::Spoilers);
            icon->icon().set(MapIcon::Shardtrader);
            icon->label().set("Twillen");
            icon->name().set("WestHollow.Twillen");
            icon->position().set({-281.3f, -4236.4f});
            add_icon_visibility_callback(icon, [](auto) {
                if (active_filter() == Filters::Spoilers) {
                    return IconVisibilityResult::Show;
                }

                const auto is_reachable = reach_check().reachable({
                    core::api::uber_states::UberState(UberStateGroup::TwillenShop, 26),
                    BooleanOperator::Greater,
                    0,
                });

                return is_reachable ? IconVisibilityResult::Show : IconVisibilityResult::ShowTransparent;
            });

            icon = add_icon(FilterFlag::InLogic | FilterFlag::Spoilers);
            icon->icon().set(MapIcon::Weaponmaster);
            icon->label().set("Opher");
            icon->name().set("GladesTown.Opher");
            icon->position().set({-203.9f, -4146.4f});
            add_icon_visibility_callback(icon, [](auto) {
                if (active_filter() == Filters::Spoilers) {
                    return IconVisibilityResult::Show;
                }

                const auto is_reachable = reach_check().reachable({
                    core::api::uber_states::UberState(UberStateGroup::OpherShop, 23),
                    BooleanOperator::Greater,
                    0,
                });

                return is_reachable ? IconVisibilityResult::Show : IconVisibilityResult::ShowTransparent;
            });

            icon = add_icon(FilterFlag::InLogic | FilterFlag::Spoilers);
            icon->icon().set(MapIcon::Mapmaker);
            icon->label().set("Lupo");
            icon->name().set("GladesTown.Lupo");
            icon->position().set({-212.3f, -4158.8f});
            add_icon_visibility_callback(icon, [](auto) {
                if (active_filter() == Filters::Spoilers) {
                    return IconVisibilityResult::Show;
                }

                const auto is_reachable = reach_check().reachable({
                    core::api::uber_states::UberState(UberStateGroup::npcsStateGroup, 19397),
                    BooleanOperator::Greater,
                    0,
                });

                return is_reachable ? IconVisibilityResult::Show : IconVisibilityResult::ShowTransparent;
            });

            // Glades Twillen
            icon = add_icon(FilterFlag::InLogic | FilterFlag::Spoilers);
            icon->icon().set(MapIcon::Shardtrader);
            icon->label().set("Twillen");
            icon->name().set("GladesTown.Twillen");
            icon->position().set({-410.5f, -4158.9f});
            add_icon_visibility_callback(icon, [](auto) {
                if (active_filter() == Filters::Spoilers) {
                    return IconVisibilityResult::Show;
                }

                const auto is_reachable = reach_check().reachable({
                    core::api::uber_states::UberState(UberStateGroup::TwillenShop, 26),
                    BooleanOperator::Greater,
                    0,
                });

                return is_reachable ? IconVisibilityResult::Show : IconVisibilityResult::ShowTransparent;
            });

            // Wellspring Opher
            icon = add_icon(FilterFlag::InLogic | FilterFlag::Spoilers);
            icon->icon().set(MapIcon::Weaponmaster);
            icon->label().set("Opher");
            icon->name().set("InnerWellspring.Opher");
            icon->position().set({-1259.7f, -3675.5f});
            add_icon_visibility_callback(icon, [](auto) {
                if (active_filter() == Filters::Spoilers) {
                    return IconVisibilityResult::Show;
                }

                const auto is_reachable = reach_check().reachable({
                    core::api::uber_states::UberState(UberStateGroup::OpherShop, 23),
                    BooleanOperator::Greater,
                    0,
                });

                return is_reachable ? IconVisibilityResult::Show : IconVisibilityResult::ShowTransparent;
            });
        });
    } // namespace
} // namespace randomizer::game::map

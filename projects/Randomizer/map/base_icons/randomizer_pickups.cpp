#include <Randomizer/randomizer.h>
#include <Randomizer/map/map_icons.h>

namespace {
    using namespace randomizer::map::icons;
    using namespace randomizer::map::filter;

    std::vector<MapIcon::ptr_t> icons;

    MapIcon::Type get_map_icon_type_from_location_type(const randomizer::location_data::LocationType location_type) {
        switch (location_type) {
            case randomizer::location_data::LocationType::SpiritLight:
                return MapIcon::Type::Experience;
            case randomizer::location_data::LocationType::Shard:
                return MapIcon::Type::SpiritShard;
            case randomizer::location_data::LocationType::HealthFragment:
                return MapIcon::Type::HealthFragment;
            case randomizer::location_data::LocationType::EnergyFragment:
                return MapIcon::Type::EnergyFragment;
            case randomizer::location_data::LocationType::GorlekOre:
                return MapIcon::Type::Ore;
            case randomizer::location_data::LocationType::ShardSlot:
                return MapIcon::Type::ShardSlotUpgrade;
            case randomizer::location_data::LocationType::Keystone:
                return MapIcon::Type::Keystone;
            case randomizer::location_data::LocationType::Eyestone:
                return MapIcon::Type::Eyestone;
            case randomizer::location_data::LocationType::QuestItem:
                return MapIcon::Type::QuestItem;
            case randomizer::location_data::LocationType::Skill:
                return MapIcon::Type::AbilityPedestal;
            case randomizer::location_data::LocationType::Shop:
                return MapIcon::Type::NPC;
            case randomizer::location_data::LocationType::Wisp:
                return MapIcon::Type::Wisp;
            case randomizer::location_data::LocationType::Seed:
                return MapIcon::Type::Seed;
            case randomizer::location_data::LocationType::Lupo:
                return MapIcon::Type::Mapmaker;
            case randomizer::location_data::LocationType::Unknown:
                return MapIcon::Type::QuestItem;
            case randomizer::location_data::LocationType::RaceStart:
                return MapIcon::Type::RaceStart;
        }

        throw std::runtime_error("Unknown location type");
    }

    [[maybe_unused]]
    auto on_location_collection_loaded = randomizer::event_bus().register_handler(
        randomizer::RandomizerEvent::LocationCollectionLoaded,
        EventTiming::After,
        [](auto, auto) {
            icons.clear();

            for (const auto& location : randomizer::location_collection().locations()) {
                if (!location.map_position.has_value()) {
                    continue;
                }

                if (location.type == randomizer::location_data::LocationType::Shop) {
                    continue;
                }

                const auto map_icon = std::make_shared<MapIcon>(
                    get_map_icon_type_from_location_type(location.type),
                    location.name,
                    *location.map_position,
                    [location](const MapFilter filter) -> MapIcon::visibility_t {
                        if (location.condition.resolve()) {
                            return MapIcon::Visibilities::invisible;
                        }

                        switch (filter) {
                            case MapFilter::InLogic:
                                // TODO[InLogicFilter]
                                return MapIcon::Visibilities::out_of_logic();
                            case MapFilter::Collectibles:
                                return MapIcon::Visibilities::visible;
                            default:
                                return MapIcon::Visibilities::invisible;
                        }
                    }
                );

                icons.push_back(map_icon);
            }
        }
    );
}

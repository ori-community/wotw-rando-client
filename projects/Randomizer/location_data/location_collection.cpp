#include <Randomizer/location_data/location_collection.h>

#include <utility>

namespace randomizer::location_data {
    std::string unknown_area = "Unknown";
    std::unordered_map<GameArea, std::string> area_to_name_map{
        {GameArea::Inkwater, "Inkwater Marsh"},
        {GameArea::Hollow, "Kwoloks Hollow"},
        {GameArea::Glades, "Wellspring Glades"},
        {GameArea::Wellspring, "The Wellspring"},
        {GameArea::Luma, "Luma Pools"},
        {GameArea::Burrows, "Midnight Burrows"},
        {GameArea::Reach, "Baurs Reach"},
        {GameArea::Woods, "Silent Woods"},
        {GameArea::Depths, "Mouldwood Depths"},
        {GameArea::Wastes, "Windswept Wastes"},
        {GameArea::Ruins, "Windtorn Ruins"},
        {GameArea::Willow, "Willows End"},
        {GameArea::Shop, "Shop"},
        {GameArea::Void, "Void"},
    };

    std::unordered_map<std::string, GameArea> name_to_area_map{
        {"Inkwater Marsh", GameArea::Inkwater},
        {"Kwoloks Hollow", GameArea::Hollow},
        {"Wellspring Glades", GameArea::Glades},
        {"The Wellspring", GameArea::Wellspring},
        {"Luma Pools", GameArea::Luma},
        {"Midnight Burrows", GameArea::Burrows},
        {"Baurs Reach", GameArea::Reach},
        {"Silent Woods", GameArea::Woods},
        {"Mouldwood Depths", GameArea::Depths},
        {"Windswept Wastes", GameArea::Wastes},
        {"Windtorn Ruins", GameArea::Ruins},
        {"Willows End", GameArea::Willow},
        {"Shop", GameArea::Shop},
        {"Void", GameArea::Void},
    };

    std::unordered_map<GameArea, std::string> area_to_short_name_map{
        {GameArea::Inkwater, "Inkwater"},
        {GameArea::Hollow, "Hollow"},
        {GameArea::Glades, "Glades"},
        {GameArea::Wellspring, "Wellspring"},
        {GameArea::Luma, "Luma"},
        {GameArea::Burrows, "Burrows"},
        {GameArea::Reach, "Reach"},
        {GameArea::Woods, "Woods"},
        {GameArea::Depths, "Depths"},
        {GameArea::Wastes, "Wastes"},
        {GameArea::Ruins, "Ruins"},
        {GameArea::Willow, "Willow"},
        {GameArea::Shop, "Shop"},
        {GameArea::Void, "Void"},
    };

    std::string_view area_to_name(const GameArea area) {
        const auto it = area_to_name_map.find(area);
        return it != area_to_name_map.end() ? it->second : unknown_area;
    }

    std::string_view area_to_short_name(const GameArea area) {
        const auto it = area_to_short_name_map.find(area);
        return it != area_to_short_name_map.end() ? it->second : unknown_area;
    }

    GameArea name_to_area(std::string const& name) {
        auto it = name_to_area_map.find(name);
        return it != name_to_area_map.end() ? it->second : GameArea::TOTAL;
    }

    void LocationCollection::read(std::filesystem::path path, location_data_parser parser) {
        const location_data_emitter emitter = [this](const Location& location) {
            m_area_to_locations[location.area].push_back(location);
        };

        for (auto i = 0; i < static_cast<int>(GameArea::TOTAL); ++i) {
            m_area_to_locations[static_cast<GameArea>(i)];
        }

        parser(std::move(path), emitter);

        for (auto& [area, locations]: m_area_to_locations) {
            for (auto i = 0; i < locations.size(); ++i) {
                auto const& location = locations[i];
                m_location_states.emplace(location.condition.state);
                m_id_to_location[location.condition] = std::make_pair(area, i);
                m_name_to_location[location.name] = std::make_pair(area, i);
            }
        }
    }

    GameArea LocationCollection::area(location_id const& id) const {
        const auto loc = location(id);
        return loc.has_value() ? loc.value().area : GameArea::Void;
    }

    GameArea LocationCollection::area(std::string const& name) const {
        const auto loc = location(name);
        return loc.has_value() ? loc.value().area : GameArea::Void;
    }

    bool LocationCollection::should_queue_reach_check(core::api::uber_states::UberState const& state) const {
        return m_location_states.contains(state);
    }

    std::optional<Location> LocationCollection::location(location_id const& id) const {
        const auto location = m_id_to_location.find(id);
        return location != m_id_to_location.end()
            ? std::optional<Location>(m_area_to_locations.find(location->second.first)->second.at(location->second.second))
            : std::nullopt;
    }

    std::optional<Location> LocationCollection::location(std::string const& name) const {
        const auto location = m_name_to_location.find(name);
        return location != m_name_to_location.end()
            ? std::optional<Location>(m_area_to_locations.find(location->second.first)->second.at(location->second.second))
            : std::nullopt;
    }

    std::vector<Location> const& LocationCollection::locations(const GameArea area) const {
        return m_area_to_locations.find(area)->second;
    }
} // namespace randomizer::location_data

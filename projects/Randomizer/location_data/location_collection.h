#pragma once

#include <Core/api/uber_states/uber_state_condition.h>
#include <Core/enums/game_areas.h>

#include <Randomizer/location_data/location.h>

#include <unordered_map>
#include <unordered_set>

namespace randomizer::location_data {
    std::string_view area_to_name(GameArea area);

    std::string_view area_to_short_name(GameArea area);

    GameArea name_to_area(std::string const& name);

    using location_data_emitter = std::function<void(Location location)>;
    using location_data_parser = bool (*)(std::filesystem::path path, location_data_emitter emitter);

    class LocationCollection {
    public:
        void read(std::filesystem::path path, location_data_parser parser);

        GameArea area(const core::api::uber_states::UberStateCondition& id) const;

        GameArea area(std::string const& name) const;

        std::optional<Location> location(const core::api::uber_states::UberStateCondition& condition) const;

        std::optional<Location> location(const std::string& name) const;

        std::vector<Location> locations(GameArea area) const;

        std::vector<Location> locations_on_state(const core::api::uber_states::UberState& state) const;

        std::vector<Location> const& locations() const;

    private:
        std::vector<Location> m_locations;
        std::unordered_map<core::api::uber_states::UberStateCondition, int> m_condition_to_location_index;
        std::unordered_map<core::api::uber_states::UberState, std::vector<int>> m_uber_state_to_location_indices;
        std::unordered_map<std::string, int> m_name_to_location_index;
        std::unordered_map<GameArea, std::vector<int>> m_area_to_location_indexes;
    };
} // namespace randomizer::location_data

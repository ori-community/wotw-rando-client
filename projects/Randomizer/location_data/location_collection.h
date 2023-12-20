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
        using location_id = core::api::uber_states::UberStateCondition;

        void read(std::filesystem::path path, location_data_parser parser);

        GameArea area(location_id const& id) const;

        GameArea area(std::string const& name) const;

        bool should_queue_reach_check(core::api::uber_states::UberState const& state) const;

        std::optional<Location> location(location_id const& id) const;

        std::optional<Location> location(std::string const& name) const;

        std::vector<Location> const& locations(GameArea area) const;

    private:
        std::unordered_set<core::api::uber_states::UberState> m_location_states;
        std::unordered_map<location_id, std::pair<GameArea, int>> m_id_to_location;
        std::unordered_map<std::string, std::pair<GameArea, int>> m_name_to_location;
        std::unordered_map<GameArea, std::vector<Location>> m_area_to_locations;
    };
} // namespace randomizer::location_data

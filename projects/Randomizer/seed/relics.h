#pragma once

#include <Core/api/uber_states/uber_state_condition.h>
#include <Core/enums/game_areas.h>

#include <string>
#include <vector>
#include <unordered_map>

namespace randomizer::seed {
    class Relics {
    public:
        using relic_location = core::api::uber_states::UberStateCondition;

        void add(relic_location const& location, const std::optional<std::string>& flavor_name);
        void clear();

        std::string relic_name(relic_location const& location) const;

        std::vector<relic_location> relics() const;
        std::vector<relic_location> relics_in_area(GameArea area) const;

        int found_relics() const;
        int found_relics_in_area(GameArea area) const;

        int relic_count() const;
        int relic_count_in_area(GameArea area) const;
    private:
        int m_relic_count = 0;
        std::unordered_map<GameArea, std::unordered_map<relic_location, std::string>> m_relics;
    };
}

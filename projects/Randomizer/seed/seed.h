#pragma once

#include <Core/api/uber_states/uber_state_condition.h>
#include <Core/dynamic_value.h>
#include <Core/enums/game_areas.h>

#include <Randomizer/location_data/location_collection.h>
#include <Randomizer/seed/item_data.h>
#include <Randomizer/seed/relics.h>

#include <unordered_map>
#include <unordered_set>

namespace randomizer::seed {
    class Seed {
    public:
        using inner_location_entry = core::api::uber_states::UberStateCondition;
        using inner_location_entries = std::unordered_map<inner_location_entry, ItemData>;
        using location_entry = core::api::uber_states::UberState;

        struct SeedInfo {
            std::vector<std::string> flags;
            app::Vector3 start_position = { -798.797058f, -4310.119141f, 0.f };
            std::string slug;

            int world_index = 0;
            bool race_mode = false;
            bool logic_filter_disabled = false;
            bool net_code_enabled = true; // TODO: Remove this.

            std::string name;
            int total_pickups = 0;
            std::unordered_map<GameArea, int> pickup_count_by_area;

            std::string content;
            std::string areas;
            std::string locations;
            std::string states;
        };

        struct Data {
            SeedInfo info;
            Relics relics;
            std::unordered_map<location_entry, inner_location_entries> locations;
            std::unordered_map<int, ItemData> procedures;
        };

        using seed_parser = bool (*)(std::string_view path, location_data::LocationCollection const& location_data, Data& data);

        Seed(location_data::LocationCollection const& location_data);

        void read(std::string_view path, seed_parser parser, bool show_message = true);
        void reload(bool show_message = true);
        void clear();

        app::WorldMapIconType__Enum icon(inner_location_entry location);
        std::string text(const inner_location_entry& location) const;
        void grant(location_entry location, double previous_value);
        void skip_next(location_entry location) { m_skip.emplace(location); }
        void call_procedure(int id);

        SeedInfo const& info() const { return m_data.info; }
        int total_pickups() const { return m_data.info.total_pickups; }

        std::string path() const { return m_last_path; }

        Relics const& relics() const { return m_data.relics; }

        void prevent_grants(const std::function<bool()>& callback) { m_prevent_grant_callbacks.push_back(callback); }

    private:
        location_data::LocationCollection const& m_location_data;
        seed_parser m_last_parser = nullptr;
        std::string m_last_path;
        Data m_data;
        std::unordered_set<location_entry> m_skip;
        std::vector<std::function<bool()>> m_prevent_grant_callbacks;
    };
} // namespace randomizer::seed

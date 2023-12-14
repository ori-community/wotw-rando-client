#pragma once

#include <Core/api/uber_states/uber_state_condition.h>
#include <Core/enums/game_areas.h>
#include <Core/property.h>

#include <Randomizer/location_data/location_collection.h>
#include <Randomizer/seed/item_data.h>
#include <Randomizer/seed/relics.h>

#include <Core/save_meta/save_meta.h>
#include <neargye/semver.hpp>
#include <nlohmann/json.hpp>
#include <unordered_map>

namespace randomizer::seed {
    class Seed {
    public:
        using inner_location_entry = core::api::uber_states::UberStateCondition;
        using inner_location_entries = std::unordered_map<inner_location_entry, ItemData>;
        using location_entry = core::api::uber_states::UberState;

        struct SeedMetaData {
            std::string name;
            semver::version version = semver::version(0, 0, 0);
            std::vector<std::string> flags;
            app::Vector3 start_position = {-798.797058f, -4310.119141f, 0.f};
            std::string slug;
            int world_index = 0;
            bool race_mode = false;
            bool online = false; // TODO: Remove this.
        };

        struct SeedInfo {
            SeedMetaData meta;

            std::string parser_error;

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

        using seed_parser = bool (*)(const std::filesystem::path& path, location_data::LocationCollection const& location_data, std::shared_ptr<Data> data);

        Seed(location_data::LocationCollection const& location_data);

        void read(const std::filesystem::path& path, seed_parser parser, bool show_message = true);
        void reload(bool show_message = true);
        void clear();

        MapIcon icon(inner_location_entry location);
        std::string text(const inner_location_entry& location) const;
        void grant(location_entry location, double previous_value);
        void procedure_call(int id);
        std::optional<ItemData> procedure_data(int id);

        SeedInfo const& info() const { return m_data->info; }
        int total_pickups() const { return m_data->info.total_pickups; }

        std::filesystem::path path() const { return m_last_path; }

        Relics const& relics() const { return m_data->relics; }
        bool finished_goals() const;

        void prevent_grants(const std::function<bool()>& callback) { m_prevent_grant_callbacks.push_back(callback); }

    private:
        location_data::LocationCollection const& m_location_data;
        seed_parser m_last_parser = nullptr;
        std::filesystem::path m_last_path;
        std::shared_ptr<Data> m_data = std::make_shared<Data>();
        std::vector<std::function<bool()>> m_prevent_grant_callbacks;
    };


    class SaveSlotSeedMetaData final : public core::save_meta::JsonSaveMetaSerializable {
    public:
        std::filesystem::path path;

        NLOHMANN_DEFINE_TYPE_INTRUSIVE_WITH_DEFAULT(SaveSlotSeedMetaData, path);

        nlohmann::json json_serialize() override;
        void json_deserialize(nlohmann::json& j) override;
    };
} // namespace randomizer::seed

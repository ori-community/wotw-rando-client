#pragma once

#include <Core/enums/map_icon.h>
#include <Core/enums/game_areas.h>
#include <Core/property.h>

#include <Randomizer/location_data/location_collection.h>
#include <Randomizer/seed/instructions.h>
#include <Randomizer/seed/seed_event.h>

#include <Core/save_meta/save_meta.h>
#include <neargye/semver.hpp>
#include <nlohmann/json.hpp>
#include <unordered_map>

namespace randomizer::seed {

    struct SeedData {
        using command_t = std::vector<std::unique_ptr<IInstruction>>;
        struct Condition {
            std::variant<int, core::api::uber_states::UberState> condition;
            bool previous_value = false;
            int command = 0;
            std::shared_ptr<core::reactivity::ReactiveEffect> reactive;
        };

        std::vector<Condition> conditions;
        std::unordered_map<SeedEvent, std::vector<int>> events;
        std::vector<command_t> commands;
    };

    struct SeedMetaData {
        std::string name;
        semver::version version = semver::version(0, 0, 0);
        std::vector<std::string> flags;
        app::Vector2 spawn = {-798.797058f, -4310.119141f};
        std::string slug;
        int world_index = 0;

        // TODO: Figure this shit out.
        int total_pickups = 0;
        std::unordered_map<GameArea, int> pickup_count_by_area;
        bool online = false; // TEMP
    };

    struct SeedParseOutput {
        std::string parser_error;
        SeedMetaData meta;
        SeedData data;

        std::string content;
        std::string areas;
        std::string locations;
        std::string states;
    };

    class Seed {
    public:

        using seed_parser =
            bool (*)(const std::filesystem::path& path, location_data::LocationCollection const& location_data, const std::shared_ptr<SeedParseOutput>& data);

        explicit Seed(location_data::LocationCollection const& location_data);

        void read(const std::filesystem::path& path, seed_parser parser, bool show_message = true);
        void reload(bool show_message = true);
        void clear();

        bool should_grant() const;

        SeedParseOutput const& parser_output() const { return *m_data; }
        int total_pickups() const { return m_data->meta.total_pickups; }

        std::filesystem::path path() const { return m_last_path; }

        void trigger(SeedEvent event);
        void prevent_grants(const std::function<bool()>& callback) { m_prevent_grant_callbacks.push_back(callback); }
        void handle_command(std::size_t id);

        const SeedMemory& memory() const { return m_memory; }
    private:
        location_data::LocationCollection const& m_location_data;
        seed_parser m_last_parser = nullptr;
        std::filesystem::path m_last_path;
        std::shared_ptr<SeedParseOutput> m_data = std::make_shared<SeedParseOutput>();
        std::vector<std::function<bool()>> m_prevent_grant_callbacks;

        bool m_should_handle_command = true;
        std::vector<IInstruction*> m_command_stack;
        SeedMemory m_memory;
    };


    class SaveSlotSeedMetaData final : public core::save_meta::JsonSaveMetaSerializable {
    public:
        std::filesystem::path path;

        NLOHMANN_DEFINE_TYPE_INTRUSIVE_WITH_DEFAULT(SaveSlotSeedMetaData, path);

        nlohmann::json json_serialize() override;
        void json_deserialize(nlohmann::json& j) override;
    };
} // namespace randomizer::seed

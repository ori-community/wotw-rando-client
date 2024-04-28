#pragma once

#include "archive.h"


#include <Core/enums/map_icon.h>
#include "seed_source.h"

#include <Core/api/uber_states/uber_state_condition.h>
#include <Core/enums/game_areas.h>
#include <Core/property.h>

#include <Randomizer/location_data/location_collection.h>
#include <Randomizer/seed/instructions.h>
#include <Randomizer/seed/seed_event.h>

#include <Core/save_meta/save_meta.h>
#include <Modloader/app/structs/GameController_GameDifficultyModes__Enum.h>
#include <neargye/semver.hpp>
#include <nlohmann/json.hpp>
#include <unordered_map>

template<typename T>
struct nlohmann::adl_serializer<std::optional<T>> {
    static void from_json(const json& j, std::optional<T>& opt) {
        if (j.is_null()) {
            opt = std::nullopt;
        } else {
            opt = j.get<T>();
        }
    }
    static void to_json(json& json, std::optional<T> t) {
        if (t) {
            json = *t;
        } else {
            json = nullptr;
        }
    }
};

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
        std::unordered_map<SeedClientEvent, std::vector<int>> events;
        std::vector<command_t> commands;
    };

    struct SeedMetaData {
        semver::version version = semver::version(0, 0, 0);
        std::vector<std::string> tags;
        app::Vector2 spawn = {-798.797058f, -4310.119141f};
        std::string slug;
        app::GameController_GameDifficultyModes__Enum intended_difficulty = app::GameController_GameDifficultyModes__Enum::Normal;

        // TODO: Figure this shit out.
        int total_pickups = 0;
        std::unordered_map<GameArea, int> pickup_count_by_area;
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
            bool (*)(const std::shared_ptr<SeedArchive>& seed_archive, location_data::LocationCollection const& location_data, const std::shared_ptr<SeedParseOutput>& data);

        explicit Seed(location_data::LocationCollection const& location_data);

        void read(const std::shared_ptr<SeedArchive>& seed_archive, const seed_parser parser, const bool show_message = true);
        void show_tags_message() const;
        void reload(const bool show_message = true);
        void clear();

        bool should_grant() const;

        SeedParseOutput const& parser_output() const { return *m_parse_output; }
        int total_pickups() const { return m_parse_output->meta.total_pickups; }

        void trigger(SeedClientEvent event);
        void prevent_grants(const std::function<bool()>& callback) { m_prevent_grant_callbacks.push_back(callback); }
        void execute_command(std::size_t id);

        const SeedMemory& memory() const { return m_memory; }
    private:
        location_data::LocationCollection const& m_location_data;
        seed_parser m_last_parser = nullptr;
        std::shared_ptr<SeedArchive> m_seed_archive;
        std::shared_ptr<SeedParseOutput> m_parse_output = std::make_shared<SeedParseOutput>();
        std::vector<std::function<bool()>> m_prevent_grant_callbacks;

        bool m_should_handle_command = true;
        std::vector<IInstruction*> m_command_stack;
        SeedMemory m_memory;
    };


    class SaveSlotSeedMetaData final : public core::save_meta::JsonSaveMetaSerializable {
    public:
        /** The seed source string that was used when this save file was created. (see parse_source_string) */
        std::string seed_source_string;

        NLOHMANN_DEFINE_TYPE_INTRUSIVE_WITH_DEFAULT(
            SaveSlotSeedMetaData,
            seed_source_string
        );

        nlohmann::json json_serialize() override;
        void json_deserialize(nlohmann::json& j) override;

        std::shared_ptr<SeedSource> get_source() const;
    };

    class SeedArchiveSaveMetaData final : public core::save_meta::SaveMetaHandler {
    public:
        std::shared_ptr<SeedArchive> seed_archive;

        std::vector<std::byte> save() override;
        void load(utils::ByteStream& stream) override;
    };
} // namespace randomizer::seed

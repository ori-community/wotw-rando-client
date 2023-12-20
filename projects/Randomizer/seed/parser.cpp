#include <Core/utils/json_serializers.h>
#include <Modloader/modloader.h>
#include <Randomizer/seed/parser.h>
#include <fstream>

namespace randomizer::seed {
    namespace {
        bool is_seed_version_supported(const semver::version version) {
            return semver::range::satisfies(version, ">=1.0.0 <=1.0.0");
        }
    }

    std::variant<SeedMetaData, ParserError> parse_meta_data(const std::filesystem::path& path) {
        std::ifstream seed_file(path);
        if (!seed_file.is_open()) {
            return ParserError::FileNotFound;
        }

        std::string header_line;
        std::getline(seed_file, header_line);

        std::vector<std::string> header_parts;
        split_str(header_line, header_parts, ',');
        if (header_parts[0] != "wotwr") {
            return ParserError::InvalidSeed;
        }

        SeedMetaData data;
        data.version = semver::version(header_parts[1]);
        if (!is_seed_version_supported(data.version)) {
            return ParserError::WrongVersion;
        }

        const auto gzipped = header_parts[2] == "z";
        if (gzipped) {
            // TODO: Do something.
        }

        try {
            auto json(nlohmann::json::parse(seed_file));
            json.at("spawn").at("position").get_to(data.spawn);
        } catch (const std::exception& e) {
            return ParserError::InvalidSeed;
        }

        //std::string name;
        //std::vector<std::string> flags;
        //std::string slug;
        //int world_index = 0;
        //int total_pickups = 0;
        //std::unordered_map<GameArea, int> pickup_count_by_area;
        //bool online = false; // TEMP
        return data;
    }

    bool parse(const std::filesystem::path& path, location_data::LocationCollection const& location_data, const std::shared_ptr<SeedParseOutput>& output) {
        std::ifstream seed_file(path);
        if (!seed_file.is_open()) {
            modloader::warn("legacy_seed_parser", "Failed to open seed file");
            output->parser_error = std::format("Failed to open file '{}'", path.string());
            return false;
        }

        std::string header_line;
        std::getline(seed_file, header_line);

        std::vector<std::string> header_parts;
        split_str(header_line, header_parts, ',');
        if (header_parts[0] != "wotwr") {
            modloader::warn("legacy_seed_parser", "Failed to load seed, invalid header");
            output->parser_error = std::format("Seed file invalid '{}'", path.string());
            return false;
        }

        SeedMetaData data;
        data.version = semver::version(header_parts[1]);
        if (!is_seed_version_supported(data.version)) {
            modloader::warn("legacy_seed_parser", "Failed to load seed due to incompatible version");
            output->parser_error = std::format("Failed to load seed '{}'\ndue to version incompatibility", path.string());
            return false;
        }

        auto gzipped = header_parts[2] == "z";
        if (gzipped) {
            // TODO: Do something.
        }

        try {
            auto json(nlohmann::json::parse(seed_file));
            json.at("spawn").at("position").get_to(output->meta.spawn);
            for (const auto& event: json.at("events")) {
                const auto& trigger = event.at("trigger");
                if (trigger.contains("Condition")) {
                    auto& condition = output->data.conditions.emplace_back();
                    condition.condition = trigger.at("Condition").get<int>();
                    condition.command = event.at("command").get<int>();
                } else if (trigger.contains("Pseudo")) {
                    output->data.events[trigger.at("Pseudo").get<SeedEvent>()].push_back(event.at("command").get<int>());
                } else if (trigger.contains("Binding")) {
                    auto& condition = output->data.conditions.emplace_back();
                    const auto& binding = trigger.at("Binding");
                    const auto state = core::api::uber_states::UberState(binding.at("group").get<int>(), binding.at("member").get<int>());
                    condition.condition = state;
                    condition.command = event.at("command").get<int>();
                } else {
                    throw std::exception("Invalid event type");
                }
            }

            for (const auto& command_entry: json.at("command_lookup")) {
                auto& command = output->data.commands.emplace_back();
                for (const auto& instruction_entry: command_entry) {
                    auto instruction = create_command(instruction_entry);
                    if (instruction != nullptr) {
                        command.push_back(std::move(instruction));
                    }
                }
            }
        } catch (const std::exception& e) {
            output->parser_error = e.what();
            return false;
        }

        return true;
    }
} // namespace randomizer::seed::modern_parser

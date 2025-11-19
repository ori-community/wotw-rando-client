#include <Core/utils/json_serializers.h>
#include <Modloader/modloader.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/seed/parser.h>
#include <magic_enum/magic_enum.hpp>

#include "archive.h"

namespace randomizer::seed {
    namespace {
        bool is_seed_version_supported(const semver::version version) {
            return semver::range::satisfies(version, ">=0.0.0 <=1.0.0");
        }
    }

    std::variant<SeedMetaData, ParserError> parse_meta_data(const std::shared_ptr<SeedArchive>& archive) {
        SeedMetaData data;

        auto version_string = archive->get_format_version();

        data.version = semver::version(version_string);
        if (!is_seed_version_supported(data.version)) {
            return ParserError::WrongVersion;
        }

        auto preload = archive->get_preload();

        try {
            preload.at("spawn").get_to(data.spawn);

            if (preload.contains("tags")) {
                preload.at("tags").get_to(data.tags);
            }

            if (preload.contains("slug")) {
                preload.at("slug").get_to(data.slug);
            }
        } catch (const std::exception& e) {
            return ParserError::InvalidSeed;
        }

        //int total_pickups = 0;
        //std::unordered_map<GameArea, int> pickup_count_by_area;
        return data;
    }

    bool parse(const std::shared_ptr<SeedArchive>& archive, location_data::LocationCollection const& location_data, const std::shared_ptr<SeedParseOutput>& output) {
        auto json = archive->get_assembly();
        std::string current_item;

        try {
            const auto meta_data_result = parse_meta_data(archive);

            if (std::holds_alternative<ParserError>(meta_data_result)) {
                throw std::exception(std::format("Failed to parse seed metadata: {}", magic_enum::enum_name(std::get<ParserError>(meta_data_result))).c_str());
            }

            output->meta = std::get<SeedMetaData>(meta_data_result);

            for (const auto& event: json.at("events")) {
                const auto& trigger = event.at(0);

                if (trigger.contains("Condition")) {
                    current_item = "Condition";
                    auto& condition = output->data.conditions.emplace_back();
                    condition.condition = trigger.at("Condition").get<int>();
                    condition.command_id = event.at(1).get<int>();

                } else if (trigger.contains("ClientEvent")) {
                    current_item = "ClientEvent";
                    auto seed_event = trigger.at("ClientEvent").get<SeedClientEvent>();
                    if (seed_event == SeedClientEvent::INVALID) {
                        current_item = trigger.at("ClientEvent").get<std::string>();
                        throw std::exception("Invalid ClientEvent value");
                    }

                    output->data.events[seed_event].push_back(event.at(1).get<int>());

                } else if (trigger.contains("Binding")) {
                    current_item = "Binding";
                    auto& condition = output->data.conditions.emplace_back();
                    const auto& binding = trigger.at("Binding");
                    const auto state = core::api::uber_states::UberState(binding.at(0).get<int>(), binding.at(1).get<int>());
                    condition.condition = state;
                    condition.command_id = event.at(1).get<int>();

                } else {
                    current_item = trigger.begin()->get<std::string>();
                    throw std::exception("Invalid event type");
                }
            }

            for (const auto& command_entry: json.at("command_lookup")) {
                auto& command = output->data.commands.emplace_back();
                for (const auto& instruction_entry: command_entry) {
                    current_item = instruction_entry.is_string() ? instruction_entry.get<std::string>() : instruction_entry.begin().key();
                    auto instruction = create_instruction(instruction_entry);
                    if (instruction != nullptr) {
                        command.push_back(std::move(instruction));
                    }
                }
            }
        } catch (const std::exception& e) {
            output->parser_error = std::format("{}: {}", current_item, e.what());
            return false;
        }

        return true;
    }
} // namespace randomizer::seed::modern_parser

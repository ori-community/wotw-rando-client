#include <randomizer.h>
#include <seed/legacy_parser/parser.h>
#include <text_processors/helpers.h>
#include <text_processors/legacy.h>

#include <Core/api/uber_states/uber_state_condition.h>

#include <Core/dynamic_value.h>

namespace randomizer::text_processors {
    namespace {
        std::optional<std::string> value(std::string_view content) {
            std::vector<std::string> parts;
            split_str(content, parts, '|');
            int group;
            int state;
            if (!string_convert(parts[0], group) || !string_convert(parts[1], state)) {
                return std::nullopt;
            }

            core::api::uber_states::UberState target(group, state);
            return target.string_value();
        }

        std::optional<std::string> seed_text(std::string_view content) {
            core::api::uber_states::UberStateCondition target;
            if (!core::api::uber_states::parse_condition(content, target)) {
                return std::nullopt;
            }

            return game_seed().text(target);
        }

        std::optional<std::string> action(std::string_view content) {
            std::string text;
            auto item_data = seed::legacy_parser::parse_action(content);
            for (auto const& name : item_data.names) {
                if (!text.empty()) {
                    text += "\n";
                }

                text += name.get();
            }

            return text;
        }
    } // namespace

    void LegacyProcessor::process(std::string& text) const {
        search_and_replace("$(", value, text, "(", ")"); // Interpolate seed.text(location)
        search_and_replace("$[(", seed_text, text, "[(", ")]"); // Interpolate seed.text(location)
        search_and_replace("$[", action, text, "[", "]"); // Interpolate seed action.
    }
} // namespace randomizer::text_processors

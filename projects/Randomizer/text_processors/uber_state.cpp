#include <text_processors/helpers.h>
#include <text_processors/uber_state.h>

#include <Common/ext.h>

#include <Core/api/uber_states/uber_state.h>

#include <fmt/format.h>

namespace randomizer::text_processors {
    namespace {
        std::optional<core::api::uber_states::UberState> parse_state(std::string_view content) {
            std::vector<std::string> parts;
            split_str(content, parts, '|');
            if (parts.size() != 2) {
                return std::nullopt;
            }

            int group;
            int state;
            if (!string_convert(parts[0], group) || !string_convert(parts[1], state)) {
                return std::nullopt;
            }

            return core::api::uber_states::UberState(group, state);
        }

        std::optional<std::string> name(core::text::ITextProcessor const& base_processor, std::string_view content) {
            auto state = parse_state(content);
            if (!state.has_value()) {
                return std::nullopt;
            }

            return state->state_name();
        }

        std::optional<std::string> group(core::text::ITextProcessor const& base_processor, std::string_view content) {
            auto state = parse_state(content);
            if (!state.has_value()) {
                return std::nullopt;
            }

            return state->group_name();
        }

        std::optional<std::string> full_name(core::text::ITextProcessor const& base_processor, std::string_view content) {
            auto state = parse_state(content);
            if (!state.has_value()) {
                return std::nullopt;
            }

            return fmt::format("{}.{}", state->group_name(), state->state_name());
        }

        std::optional<std::string> boolean(core::text::ITextProcessor const& base_processor, std::string_view content) {
            auto state = parse_state(content);
            if (!state.has_value()) {
                return std::nullopt;
            }

            return state->get<bool>() ? "true" : "false";
        }

        std::optional<std::string> integer(core::text::ITextProcessor const& base_processor, std::string_view content) {
            auto state = parse_state(content);
            if (!state.has_value()) {
                return std::nullopt;
            }

            return std::to_string(state->get<int>());
        }

        std::optional<std::string> real(core::text::ITextProcessor const& base_processor, std::string_view content) {
            auto state = parse_state(content);
            if (!state.has_value()) {
                return std::nullopt;
            }

            return std::to_string(state->get<double>());
        }

        std::optional<std::string> value(core::text::ITextProcessor const& base_processor, std::string_view content) {
            auto state = parse_state(content);
            if (!state.has_value()) {
                return std::nullopt;
            }

            return state->string_value();
        }
    } // namespace

    void UberStateProcessor::process(ITextProcessor const& base_processor, std::string& text) const {
        search_and_replace(base_processor, "[state_name(", name, text);
        search_and_replace(base_processor, "[state_group(", group, text);
        search_and_replace(base_processor, "[state_full_name(", full_name, text);
        search_and_replace(base_processor, "[state_bool(", boolean, text);
        search_and_replace(base_processor, "[state_int(", integer, text);
        search_and_replace(base_processor, "[state_real(", real, text);
        search_and_replace(base_processor, "[state_value(", value, text);
    }
} // namespace randomizer::text_processors

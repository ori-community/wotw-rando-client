#include <Randomizer/randomizer.h>
#include <Randomizer/text_processors/helpers.h>
#include <Randomizer/text_processors/legacy.h>

#include <Core/api/uber_states/uber_state_condition.h>

#include <Core/property.h>

namespace randomizer::text_processors {
    namespace {
        std::optional<std::string> value(core::text::ITextProcessor const& base_processor, std::string_view content) {
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

            core::api::uber_states::UberState target(group, state);
            return target.string_value();
        }
        std::optional<std::string> text_database(core::text::ITextProcessor const& base_processor, std::string_view content) {
            int id = 0;
            if (std::from_chars(content.data(), content.data() + content.size(), id).ec != std::errc()) {
                return std::nullopt;
            }

            return core::text::get_concatenated_text(id, "\n");
        }
    } // namespace

    void LegacyProcessor::process(ITextProcessor const& base_processor, std::string& text) const {
        search_and_replace(base_processor, "$(", value, text, "(", ")"); // Interpolate value(location)
        search_and_replace(base_processor, "${", text_database, text, "{", "}"); // Interpolate text from text_database.
    }
} // namespace randomizer::text_processors

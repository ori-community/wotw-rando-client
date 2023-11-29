#include <randomizer.h>
#include <text_processors/control.h>
#include <text_processors/helpers.h>

#include <array>

namespace randomizer::text_processors {
    namespace {
        std::optional<std::string> if_handler(core::text::ITextProcessor const& base_processor, std::string_view content) {
            std::vector<std::string> parts;
            std::array brackets{std::make_pair('[', ']')};
            split_str(content, parts, brackets, ',');
            if (parts.size() != 3) {
                return std::nullopt;
            }

            auto condition = trim(parts[0]);
            auto result = common::parse_operator(condition);
            if (result.has_value()) {
                double value_a;
                double value_b;
                auto first = std::string(result->prefix);
                auto second = std::string(result->suffix);
                base_processor.process(base_processor, first);
                base_processor.process(base_processor, second);
                if (!string_convert(first, value_a) || !string_convert(second, value_b)) {
                    return std::nullopt;
                }

                return common::resolve_operator(value_a, value_b, result->op) ? trim(parts[1]) : trim(parts[2]);
            } else {
                double value;
                base_processor.process(base_processor, condition);
                if (!string_convert(condition, value)) {
                    return std::nullopt;
                }

                return value > 0 ? trim(parts[1]) : trim(parts[2]);
            }
        }

        std::optional<std::string> no_color(core::text::ITextProcessor const& base_processor, const std::string_view content) {
            // Fully process the string before replacing color symbols.
            std::string output(content);
            base_processor.process(output);
            replace_all(output, "*", "");
            replace_all(output, "#", "");
            replace_all(output, "$", "");
            return output;
        }
    } // namespace

    void ControlProcessor::process(ITextProcessor const& base_processor, std::string& text) const {
        search_and_replace(base_processor, "[if(", if_handler, text);
        search_and_replace(base_processor, "[no_color(", no_color, text);
    }
} // namespace randomizer::text_processors

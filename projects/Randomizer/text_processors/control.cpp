#include <randomizer.h>
#include <text_processors/control.h>
#include <text_processors/helpers.h>

namespace randomizer::text_processors {
    namespace {
        std::optional<std::string> if_handler(std::string_view content) {
            std::vector<std::string> parts;
            split_str(content, parts, ',');

            auto condition = trim(parts[0]);
            auto result = common::parse_operator(condition);
            if (result.has_value()) {
                double value_a;
                double value_b;
                if (!string_convert(result->prefix, value_a) || !string_convert(result->suffix, value_b)) {
                    return std::nullopt;
                }

                return common::resolve_operator(value_a, value_b, result->op) ? parts[1] : parts[2];
            } else {
                double value;
                if (!string_convert(condition, value)) {
                    return std::nullopt;
                }

                return value > 0 ? parts[1] : parts[2];
            }
        }
    } // namespace

    void ControlProcessor::process(std::string& text) const {
        search_and_replace("[if(", if_handler, text); // Interpolate seed.text(location)
    }
} // namespace randomizer::text_processors

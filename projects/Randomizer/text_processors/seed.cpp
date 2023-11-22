#include <text_processors/helpers.h>
#include <text_processors/seed.h>

#include <Common/ext.h>

namespace randomizer::text_processors {
    namespace {
        std::optional<std::string> total_pickup_count(core::text::ITextProcessor const& base_processor, std::string_view content) {
            return std::nullopt;
        }

        std::optional<std::string> goal_mode_progress(core::text::ITextProcessor const& base_processor, std::string_view content) {
            return std::nullopt;
        }

        std::optional<std::string> relic_progress(core::text::ITextProcessor const& base_processor, std::string_view content) {
            return std::nullopt;
        }

        std::optional<std::string> map_relic_progress(core::text::ITextProcessor const& base_processor, std::string_view content) {
            return std::nullopt;
        }
    } // namespace

    void SeedProcessor::process(ITextProcessor const& base_processor, std::string& text) const {
        search_and_replace(base_processor, "[total_pickup_count(", total_pickup_count, text);
        search_and_replace(base_processor, "[goal_mode_progress(", goal_mode_progress, text);
        search_and_replace(base_processor, "[relic_progress(", relic_progress, text);
        search_and_replace(base_processor, "[map_relic_progress(", map_relic_progress, text);
    }
} // namespace randomizer::text_processors

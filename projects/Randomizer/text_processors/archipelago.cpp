#include <Randomizer/randomizer.h>
#include <Randomizer/text_processors/helpers.h>
#include <Randomizer/text_processors/archipelago.h>

#include <Common/ext.h>
#include <Core/api/game/player.h>

namespace randomizer::text_processors {
    namespace {
        std::optional<std::string> ap_item_on_location(core::text::ITextProcessor const& base_processor, std::string_view content) {
            const auto location = location_collection().location(std::string(content));

            if (!location.has_value()) {
                return std::nullopt;
            }

            return archipelago_client().get_item_display_text(*location);
        }
    } // namespace

    void ArchipelagoProcessor::process(ITextProcessor const& base_processor, std::string& text) const {
        search_and_replace(base_processor, "[ap_item_on_location(", ap_item_on_location, text);
    }
} // namespace randomizer::text_processors

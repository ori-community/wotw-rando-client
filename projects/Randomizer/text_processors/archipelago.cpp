#include <Randomizer/randomizer.h>
#include <Randomizer/text_processors/helpers.h>
#include <Randomizer/text_processors/archipelago.h>

#include <Common/ext.h>
#include <Core/api/game/player.h>
#include <Modloader/app/methods/Game/Characters.h>

namespace randomizer::text_processors {
    namespace {
        std::optional<std::string> ap_item_on_location(core::text::ITextProcessor const& base_processor, std::string_view content) {
            const auto location = location_collection().location(std::string(content));

            if (!location.has_value()) {
                return std::nullopt;
            }

            return archipelago_client().get_item_display_text(*location);
        }

        std::optional<std::string> ap_shop_description(core::text::ITextProcessor const& base_processor, std::string_view content) {
            const auto location = location_collection().location(std::string(content));

            if (!location.has_value()) {
                return std::nullopt;
            }

            return archipelago_client().get_shop_description(*location);
        }

        std::optional<std::string> ap_shop_icon(core::text::ITextProcessor const& base_processor, std::string_view content) {
            const auto location = location_collection().location(std::string(content));

            if (!location.has_value()) {
                return std::nullopt;
            }

            return archipelago_client().get_shop_icon(*location);
        }

        // Put a dummy item depending on the AP item's classification
        std::optional<std::string> ap_how_many(core::text::ITextProcessor const& base_processor, std::string_view content) {
            int game_area_int;
            if (!string_convert(content, game_area_int)) {
                return std::nullopt;
            }
            auto game_area = static_cast<GameArea>(game_area_int);
            return archipelago_client().parse_how_many(game_area);
        }
    } // namespace

    void ArchipelagoProcessor::process(ITextProcessor const& base_processor, std::string& text) const {
        search_and_replace(base_processor, "[ap_item_on_location(", ap_item_on_location, text);
        search_and_replace(base_processor, "[ap_shop_description(", ap_shop_description, text);
        search_and_replace(base_processor, "[ap_shop_icon(", ap_shop_icon, text);
        search_and_replace(base_processor, "[ap_how_many(", ap_how_many, text);
    }
} // namespace randomizer::text_processors

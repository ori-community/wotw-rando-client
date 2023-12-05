#include <Randomizer/randomizer.h>
#include <Randomizer/text_processors/helpers.h>
#include <Randomizer/text_processors/multiplayer.h>

#include <Common/ext.h>
#include <Core/api/game/player.h>

namespace randomizer::text_processors {
    namespace {
        std::optional<std::string> world(core::text::ITextProcessor const& base_processor, std::string_view content) {
            int id;
            if (!string_convert(content, id)) {
                return std::nullopt;
            }

            const auto world = multiplayer_universe().get_world(id);
            if (world == nullptr) {
                return std::nullopt;
            }

            return world->name();
        }
    } // namespace

    void MultiplayerProcessor::process(ITextProcessor const& base_processor, std::string& text) const {
        search_and_replace(base_processor, "[world(", world, text);
    }
} // namespace randomizer::text_processors

#include <input/rando_bindings.h>
#include <randomizer.h>

#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/messages/message_box.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/api/uber_states/uber_state_condition.h>
#include <Core/enums/static_text_entries.h>
#include <Core/text/text_database.h>

#include <Modloader/app/methods/GameMapUI.h>
#include <Modloader/interception_macros.h>

namespace randomizer::messages {
    using namespace app::classes;

    namespace {
        std::unique_ptr<core::api::messages::MessageBox> info_box;

        auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
            info_box = std::make_unique<core::api::messages::MessageBox>();
        });

        auto on_show_progress_with_hints_before = input::single_input_bus().register_handler(Action::ShowProgressWithHints, EventTiming::Before, [](auto, auto) {
            auto area = core::api::game::player::get_current_area();
            game_seed().grant({ UberStateGroup::PseuodoLocs, static_cast<int>(area) }, 0);
            info_box->text().set(core::text::get_concatenated_text(*static_text_entry::ProgressHint, "\n"));
            // TODO: Handle showing/hiding.
        });
    } // namespace
} // namespace randomizer::messages

/*

#include <Common/ext.h>
#include <Modloader/app/methods/GhostCharacterAbilitiesPlugin.h>
#include <Modloader/app/methods/System/IO/BinaryReader.h>
#include <Modloader/app/methods/TimeUtility.h>
#include <Modloader/windows_api/console.h>

#include "ghosts.h"

#include <Core/api/game/game.h>
#include <Core/enums/game_event.h>
#include <random>

using namespace modloader::win::console;
using namespace app::classes;
using namespace app::classes::System::IO;

namespace {
    std::vector<std::vector<std::byte>> frames;
    long current_frame = -200;
    ghosts::RandoGhost ghost1;

    ///////////////////////////////////////////////////////////
    // IF YOU USE THIS, REMEMBER TO TURN OFF THE GHOST FRAME //
    // DATA CONSUMER IN THE NETWORKING CODE!                 //
    ///////////////////////////////////////////////////////////

    void on_fixed_update(GameEvent game_event, EventTiming timing) {
        if (current_frame == 0) {
            ghost1.initialize();
            ghost1.set_name("zre");
            ghost1.set_color(app::Color{ 21.f / 255.f, 101.f / 255.f, 192.f / 255.f });
        }

        if (current_frame >= 0) {
            const auto& frame_data = frames[current_frame];

            if (!frame_data.empty()) {
                ghost1.play_frame_data(frames[current_frame]);
            }
        }

        if (!ghosts::has_new_frame_data()) {
            frames.emplace_back();
            ++current_frame;
            // console_send("-");
            return;
        }

        auto frame_data = ghosts::get_frame_data();

        std::string hex = "";
        for (const auto& item : frame_data) {
            hex += std::format("{} ", static_cast<unsigned int>(item));
        }
        console_send(hex);
        console_flush();

        frames.push_back(frame_data);
        ++current_frame;
    }

    void on_update(GameEvent game_event, EventTiming timing) {
        if (ghost1.is_initialized()) {
            ghost1.extrapolate(TimeUtility::get_deltaTime());
        }
    }

    auto on_fixed_update_handle = core::api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, &on_fixed_update);
    auto on_update_handle = core::api::game::event_bus().register_handler(GameEvent::Update, EventTiming::After, &on_update);
}

*/

/*
#include <Il2CppModLoader/app/methods/GhostCharacterAbilitiesPlugin.h>
#include <Il2CppModLoader/app/methods/GhostCharacterPlugin.h>
#include <Il2CppModLoader/app/methods/GhostGenericEventsPlugin.h>
#include <Il2CppModLoader/app/methods/GhostManager.h>
#include <Il2CppModLoader/app/methods/GhostPlayer.h>
#include <Il2CppModLoader/app/methods/GhostRecorder.h>
#include <Il2CppModLoader/app/methods/GhostRecorderData.h>
#include <Il2CppModLoader/app/methods/GhostStateMachinePlugin.h>
#include <Il2CppModLoader/app/methods/GhostTimelineEventsPlugin.h>
#include <Il2CppModLoader/app/methods/GhostWorldObjectsLifetimePlugin.h>
#include <Il2CppModLoader/app/methods/GhostFrame.h>
#include <Il2CppModLoader/app/methods/System/IO/BinaryReader.h>
#include <Il2CppModLoader/app/methods/System/IO/BinaryWriter.h>
#include <Il2CppModLoader/app/methods/System/IO/MemoryStream.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/windows_api/console.h>
#include <constants.h>
#include <Common/ext.h>
#include <macros.h>

#include "ghosts.h"

#include <Il2CppModLoader/common.h>
#include <enums/game_event.h>
#include <event_bus.h>
#include <game/game.h>

using namespace modloader::win::console;
using namespace app::methods;
using namespace app::methods::System::IO;

namespace {
    app::GhostRecorder* recorder = nullptr;
    std::vector<std::vector<std::byte>> frames;
    long current_frame = -200;
    ghosts::RandoGhost ghost1;
    ghosts::RandoGhost ghost2;

    void on_fixed_update(GameEvent game_event, EventTiming timing) {
        if (!il2cpp::unity::is_valid(recorder)) {
            return;
        }

        if (!ghosts::has_new_frame_data()) {
            // console_send("-");
            return;
        }

        auto frame_data = ghosts::get_frame_data();

        std::string hex = "";
        for (const auto& item : frame_data) {
            hex += format("%02X ", static_cast<unsigned int>(item));
        }
        // console_send(hex);

        frames.push_back(frame_data);

        // console_flush();
        ++current_frame;

        if (current_frame == 0) {
            ghost1.initialize();
            ghost1.set_name("zre");
            ghost1.set_color(app::Color{ 21.f / 255.f, 101.f / 255.f, 192.f / 255.f });

            // ghost2.initialize();
            // ghost2.set_name("Appol");
            // ghost2.set_color(app::Color{ 56.f / 255.f, 142.f / 255.f, 60.f / 255.f });
        }

        if (current_frame >= 0 && current_frame % 3 > 0) {
            ghost1.play_frame_data(frames[current_frame]);
        }

        if (current_frame >= 200) {
            // ghost2.play_frame_data(frames[current_frame - 200]);
        }
    }

    void on_finished_loading_save(GameEvent game_event, EventTiming timing) {
        recorder = ghosts::create_recorder();
    }

    void initialize() {
        game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::End, &on_fixed_update);
        game::event_bus().register_handler(GameEvent::FinishedLoadingSave, EventTiming::End, &on_finished_loading_save);
    }

    CALL_ON_INIT(initialize);
}
*/
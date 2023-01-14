/*
#include <Common/ext.h>
#include <Modloader/app/methods/GhostCharacterAbilitiesPlugin.h>
#include <Modloader/app/methods/GhostCharacterPlugin.h>
#include <Modloader/app/methods/GhostFrame.h>
#include <Modloader/app/methods/GhostGenericEventsPlugin.h>
#include <Modloader/app/methods/GhostManager.h>
#include <Modloader/app/methods/GhostPlayer.h>
#include <Modloader/app/methods/GhostRecorder.h>
#include <Modloader/app/methods/GhostRecorderData.h>
#include <Modloader/app/methods/GhostStateMachinePlugin.h>
#include <Modloader/app/methods/GhostTimelineEventsPlugin.h>
#include <Modloader/app/methods/GhostWorldObjectsLifetimePlugin.h>
#include <Modloader/app/methods/System/IO/BinaryReader.h>
#include <Modloader/app/methods/System/IO/BinaryWriter.h>
#include <Modloader/app/methods/System/IO/MemoryStream.h>
#include <Modloader/app/methods/TimeUtility.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/windows_api/console.h>
#include <Randomizer/macros.h>
#include <constants.h>

#include "ghosts.h"

#include <Core/api/game/game.h>
#include <Core/enums/game_event.h>
#include <Modloader/common.h>
#include <event_bus.h>
#include <random>

using namespace modloader::win::console;
using namespace app::classes;
using namespace app::classes::System::IO;

namespace {
    app::GhostRecorder* recorder = nullptr;
    std::vector<std::vector<std::byte>> frames;
    long current_frame = -500;
    ghosts::RandoGhost ghost1;
    ghosts::RandoGhost ghost2;
    std::random_device random_device;
    std::mt19937 rng(random_device());

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
            hex += fmt::format("%02X ", static_cast<unsigned int>(item));
        }
        console_send(hex);
        console_flush();

        frames.push_back(frame_data);
        ++current_frame;

        if (current_frame == 0) {
            ghost1.initialize();
            ghost1.set_name("zre");
            ghost1.set_color(app::Color{ 21.f / 255.f, 101.f / 255.f, 192.f / 255.f });

            // ghost2.initialize();
            // ghost2.set_name("Appol");
            // ghost2.set_color(app::Color{ 56.f / 255.f, 142.f / 255.f, 60.f / 255.f });
        }

        if (current_frame >= 0) {
            ghost1.play_frame_data(frames[current_frame]);
        }

        if (current_frame >= 200) {
            // ghost2.play_frame_data(frames[current_frame - 200]);
        }
    }

    void on_update(GameEvent game_event, EventTiming timing) {
        if (ghost1.is_initialized()) {
            ghost1.extrapolate(TimeUtility::get_deltaTime());
        }
    }

    void on_finished_loading_save(GameEvent game_event, EventTiming timing) {
        recorder = ghosts::create_recorder();
    }

    auto on_fixed_update_handle = game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, &on_fixed_update);
    auto on_fixed_update_handle = game::event_bus().register_handler(GameEvent::Update, EventTiming::After, &on_update);
    auto on_fixed_update_handle = game::event_bus().register_handler(GameEvent::FinishedLoadingSave, EventTiming::After, &on_finished_loading_save);
}
*/
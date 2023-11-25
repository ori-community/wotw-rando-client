#include <randomizer.h>

#include <Core/api/game/game.h>
#include <Core/api/uber_states/uber_state_handlers.h>

#include <Modloader/modloader.h>

#include <fstream>

namespace randomizer::uber_states {
    namespace {
        using namespace core::api::uber_states;

        std::unordered_set<UberState> tracked_states;

        auto on_after_respawn = core::api::game::event_bus().register_handler(
            GameEvent::Respawn, EventTiming::After, [](auto, auto) { queue_reach_check(); });
        auto on_after_checkpoint_loaded = core::api::game::event_bus().register_handler(
            GameEvent::RestoreCheckpoint, EventTiming::After, [](auto, auto) { queue_reach_check(); });
        auto on_after_save_loaded = core::api::game::event_bus().register_handler(
            GameEvent::FinishedLoadingSave, EventTiming::After, [](auto, auto) { queue_reach_check(); });

        auto on_uber_state = notification_bus().register_handler([](auto params) {
            if (tracked_states.contains(params.state)) {
                queue_reach_check();
            }
        });

        auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
            std::ifstream state_data(modloader::base_path() / "state_data.csv");
            std::string line;
            std::getline(state_data, line);
            while (std::getline(state_data, line)) {
                std::vector<std::string> parts;
                split_str(line, parts, ',');
                for (auto& str : parts) {
                    trim(str);
                }

                int group, state;
                if (!string_convert(parts[1], group) || !string_convert(parts[2], state)) {
                    continue;
                }

                tracked_states.emplace(UberState(group, state));
            }
        });
    } // namespace
} // namespace randomizer::uber_states

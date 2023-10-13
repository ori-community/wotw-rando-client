#include <randomizer.h>

#include <Core/api/uber_states/uber_state_handlers.h>

#include <Modloader/modloader.h>

#include <fstream>

namespace randomizer::uber_states {
    namespace {
        using namespace core::api::uber_states;

        std::unordered_set<UberState> tracked_states;

        auto on_uber_state = notification_bus().register_handler([](auto params) {
            if (tracked_states.contains(params.state)) {
                queue_reach_check();
            }
        });

        auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
            std::ifstream state_data(modloader::base_path() / "state_data.csv");
            std::string line;
            while (std::getline(state_data, line)) {
                std::vector<std::string> parts;
                split_str(line, parts, ',');
                for (auto& str : parts) {
                    trim(str);
                }

                auto& condition_part = parts[2];
                if (parts.size() >= 4) {
                    condition_part += ">=";
                    condition_part += parts[3].empty() ? "0" : parts[3];
                }

                UberStateCondition condition;
                core::api::uber_states::parse_condition(std::span<std::string>(parts.begin() + 1, parts.begin() + 3), condition);
                tracked_states.emplace(condition.state);
            }
        });
    } // namespace
} // namespace randomizer::uber_states

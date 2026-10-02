#include <Core/api/game/game.h>
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Core/uber_states/core_uber_states.h>


namespace randomizer::uber_states {
    bool& disable_reverts() {
        static auto value = false;
        return value;
    }

    namespace {
        using namespace core::api::uber_states;

        auto& cleanse_wellspring_state = core::uber_states::state<"kwolokGroupDescriptor", "cleanseWellspringQuestUberState">();
        auto& find_ku_quest_state = core::uber_states::state<"questUberStateGroup", "findKuQuest">();

        [[maybe_unused]]
        auto cleanse_wellspring_intercept = before_uber_state_changed().register_handler(
            cleanse_wellspring_state,
            [](auto& params, auto) {
                if (disable_reverts() || !core::api::game::in_game()) {
                    return;
                }

                if (params.new_value > cleanse_wellspring_state.get()) {
                    params.ignore_change = true;
                }
            }
        );

        [[maybe_unused]]
        auto find_ku_quest_intercept = before_uber_state_changed().register_handler(
            find_ku_quest_state,
            [](auto& params, auto) {
                if (disable_reverts() || !core::api::game::in_game()) {
                    return;
                }

                if (params.new_value < 4) {
                    params.ignore_change = true;
                }
            }
        );

        [[maybe_unused]]
        auto on_before_new_game = core::api::game::event_bus().register_handler(GameEvent::NewGame, EventTiming::Before, [](auto, auto) {
            disable_reverts() = true;
        });
    } // namespace
} // namespace randomizer::uber_states

#include <Core/api/game/game.h>
#include <Core/api/uber_states/uber_state_handlers.h>

namespace randomizer::uber_states {
    bool& disable_reverts() {
        static bool value = false;
        return value;
    }

    namespace {
        using namespace core::api::uber_states;

        UberState cleanse_wellspring(937, 34641);
        UberState find_ku_quest(14019, 34504);

        [[maybe_unused]]
        auto on_uber_state_interception = interception_bus().register_handler([](auto params) {
            if (disable_reverts() || !core::api::game::in_game()) {
                return false;
            }

            if ((params.state == cleanse_wellspring && cleanse_wellspring.get() > params.value) ||
                (params.state == find_ku_quest && params.value < 4)) {
                return true;
            }

            return false;
        });

        auto on_before_new_game = core::api::game::event_bus().register_handler(GameEvent::NewGame, EventTiming::Before, [](auto, auto) {
            disable_reverts() = true;
        });
    } // namespace
} // namespace randomizer::uber_states

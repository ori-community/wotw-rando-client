#include <Randomizer/game/map/map.h>
#include <Randomizer/randomizer.h>

#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state_handlers.h>

namespace randomizer::uber_states {
    namespace {
        using namespace core::api::uber_states;

        void give_voice() {
            // this is really questionable!!
            const UberState state(46462, 59806);
            if (!state.get<bool>()) {
                state.set(true);
                core::api::game::player::max_health().add(10);
                core::api::game::player::max_energy().add(1);
                core::api::game::player::refill_health();
                core::api::game::player::refill_energy();
                core::api::game::save();
            }
        }

        auto on_water_dash_arena = single_notification_bus().register_handler(UberState(5377, 53480), [](auto params, auto) {
            if (params.state.template get<int>() == 4) {
                UberState(5377, 1373).set(4);
            }
        });

        auto on_diamond_in_the_rough = single_notification_bus().register_handler(UberState(42178, 2654), [](auto params, auto) {
            const auto value = params.state.template get<int>();
            if (0 < value && value < 3) {
                params.state.set(3);
                // Give diamond in the rough pickup.
                UberState(23987, 14832).set(true);
            }
        });

        auto on_wellspring_escape = single_notification_bus().register_handler(UberState(37858, 12379), [](auto params, auto) {
            if (0 < params.state.template get<int>()) {
                // cleanseWellspringQuestUberState
                UberState(937, 34641).set(3);
            }
        });

        auto on_give_voice = single_notification_bus().register_handler(UberState(14019, 48794), [](auto params, auto) {
            if (0 < params.state.template get<int>()) {
                // kwolok quest.
                if (params.state.template get<int>() == 2) {
                    queue_input_unlocked_callback(give_voice);
                }
            }
        });

        auto on_wellspring_quest = single_notification_bus().register_handler(UberState(937, 34641), [](auto params, auto) {
            if (params.state.template get<int>() >= 3) {
                // Tuley exists.
                UberState(6, 300).set(true);
            }
        });

        auto on_petrified_forest_chase = single_notification_bus().register_handler(UberState(58674, 32810), [](auto params, auto) {
            if (params.state.template get<int>() == 7) {
                // Prevent from getting stuck on shriek killing you.
                UberState(58674, 32810).set(8);
            }
        });

        auto on_willow_stone_heart = single_notification_bus().register_handler(UberState(16155, 28478), [](auto params, auto) {
            if (params.state.template get<bool>()) {
                // Prevent from getting stuck on shriek killing you.
                UberState(16155, 12971).set(4);
            }
        });

        auto on_luma_pools_water_drained = single_notification_bus().register_handler(UberState(5377, 63173), [](auto params, auto) {
            if (params.state.template get<bool>() && game::map::is_visited(app::GameWorldAreaID__Enum::LumaPools, 6073)) {
                // Give Luma Pools TP.
                UberState(945, 26601).set(true);
            }
        });
    } // namespace
} // namespace randomizer::uber_states

#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Modloader/app/methods/Moon/ConditionUberState.h>
#include <Modloader/modloader.h>
#include <Randomizer/conditions/new_setup_state_override.h>

namespace {
    using namespace app::classes;

    /// This fix makes it possible to un-softlock the Family Reunion quest
    /// using header language. The softlock happens when collecting the
    /// teddy before opening the door in Woods, which is possible when
    /// changing door connections.

    const auto FAMILY_REUNION_QUEST = core::api::uber_states::UberState(14019, 27804);
    const auto CAN_OPEN_HUT_STATE = core::api::uber_states::UberState(UberStateGroup::RandoState, 500);

    [[maybe_unused]]
    auto on_uber_state_interception = core::api::uber_states::single_notification_bus().register_handler(FAMILY_REUNION_QUEST, [](auto change, auto state) {
        if (change.value == 2) {
            CAN_OPEN_HUT_STATE.set(true);
        }
    });

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        randomizer::conditions::register_new_setup_intercept({"petrifiedForestNewTransitionOri/interactives/hutSetup"}, {-223185097, -899902710}, [](auto, auto, auto, auto) -> int32_t {
            return CAN_OPEN_HUT_STATE.get<bool>() ? -899902710 : -223185097;
        });
    });
}

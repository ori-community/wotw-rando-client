#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Modloader/app/methods/KwolokBossDryPhaseStartBehaviour.h>
#include <Modloader/app/methods/KwolokBossEscapeBehaviour.h>
#include <Modloader/app/methods/Moon/Timeline/Systems/SceneManagementSystem.h>
#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/windows_api/console.h>
#include <magic_enum/magic_enum.hpp>

using namespace app::classes;


// "Frog from Hell" is a bug that is known to happen when you die at
// a certain point in time between the Kwolok escape and the fight.
// What happens is that the checkpoint inside the arena is not yet made
// but the SceneManagementMode is already set to Static, which causes the
// ScenesManager to not load any new or unload any currently loaded
// scenes.
// We fix this by disallowing the boss state to be set to 3 (fight) when
// Ori is dead or we are currently restoring a checkpoint.

namespace {
    using namespace app::classes;

    bool is_restoring_checkpoint = false;

    [[maybe_unused]]
    auto on_before_restoring_checkpoint = core::api::game::event_bus().register_handler(GameEvent::RestoreCheckpoint, EventTiming::Before, [](auto, auto) {
        is_restoring_checkpoint = true;
    });

    [[maybe_unused]]
    auto on_after_restoring_checkpoint = core::api::game::event_bus().register_handler(GameEvent::RestoreCheckpoint, EventTiming::After, [](auto, auto) {
        is_restoring_checkpoint = false;
    });

    IL2CPP_INTERCEPT(void, KwolokBossEscapeBehaviour, OnEscapeTimelineEnded, app::KwolokBossEscapeBehaviour* this_ptr) {
        if (!core::api::game::player::is_alive() || is_restoring_checkpoint) {
            return;
        }

        next::KwolokBossEscapeBehaviour::OnEscapeTimelineEnded(this_ptr);
    }
}

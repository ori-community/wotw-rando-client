#include <Common/ext.h>
#include <Core/api/uber_states/uber_state.h>
#include <Modloader/app/methods/EnemyArenaController.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>

using namespace modloader;
using namespace app::classes;

namespace {
    IL2CPP_INTERCEPT(void, EnemyArenaController, OnEnable, app::EnemyArenaController * this_ptr) {
        next::EnemyArenaController::OnEnable(this_ptr);

        auto completed_state_id = this_ptr->fields.CompletedState->fields._.m_id->fields.m_id;
        auto completed_state_group = this_ptr->fields.CompletedState->fields.Group->fields._.m_id->fields.m_id;

        if (completed_state_group == 44310 && completed_state_id == 58796) {
            this_ptr->fields.OptionalWaveState = randomizer::uber_states::state<"shrines", "gladesWave">().get_native_ptr();
        } else if (completed_state_group == 21786 && completed_state_id == 2869) {
            this_ptr->fields.OptionalWaveState = randomizer::uber_states::state<"shrines", "marshWave">().get_native_ptr();
        } else if (completed_state_group == 24922 && completed_state_id == 45011) {
            this_ptr->fields.OptionalWaveState = randomizer::uber_states::state<"shrines", "howlsDenWave">().get_native_ptr();
        } else if (completed_state_group == 18793 && completed_state_id == 12512) {
            this_ptr->fields.OptionalWaveState = randomizer::uber_states::state<"shrines", "depthsWave">().get_native_ptr();
        } else if (completed_state_group == 58674 && completed_state_id == 56043) {
            this_ptr->fields.OptionalWaveState = randomizer::uber_states::state<"shrines", "woodsWave">().get_native_ptr();
        } else if (completed_state_group == 9593 && completed_state_id == 59418) {
            // Noop: inkwaterMarshStateGroup.enemyRoom
        } else if (completed_state_group == 21786 && completed_state_id == 35598) {
            // Noop: swampStateGroup.enemyArenaComplete
        } else {
            error("shrine_states", std::format("Could not set up wave state. Unknown shrine state: {}|{}", completed_state_group, completed_state_id));
        }
    }
} // namespace

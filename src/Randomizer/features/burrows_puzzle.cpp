#include <Core/api/scenes/scene_load.h>
#include <Core/property/reactivity.h>
#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/modloader.h>
#include "Modloader/app/methods/SwitchSeriesPuzzle.h"
#include "Modloader/app/methods/SwitchSeriesPuzzleSwitchSetupHolder.h"
#include <queue>

#include "Core/api/audio.h"
#include "Core/events/task.h"

enum class Bell {
    Left,
    Mid,
    Right,
};

namespace {
    using namespace app::classes;

    std::vector bell_states{1919, 24796, 7459};
    std::vector<Bell> desired_sequence_A = {Bell::Left, Bell::Mid, Bell::Right, Bell::Right, Bell::Left, Bell::Mid, Bell::Left};
    std::vector<Bell> desired_sequence_B = {Bell::Left, Bell::Mid, Bell::Left, Bell::Right, Bell::Right, Bell::Mid, Bell::Left};
    std::deque<Bell> bell_queue_A;
    std::deque<Bell> bell_queue_B;

    void check_switch_puzzle(
        app::SwitchSeriesPuzzle* switch_series_puzzle,
        const app::SwitchSeriesPuzzleSetupData* activated_state,
        const core::api::uber_states::UberState event_uberstate,
        const std::vector<Bell>& desired_sequence,
        std::deque<Bell>& bell_queue
    ) {

        // do nothing if puzzle already completed
        if (event_uberstate.get<bool>()) {
            return;
        }

        // get rung bell
        const auto changed_state = SwitchSeriesPuzzle::GetChangedState(switch_series_puzzle);
        if (changed_state == nullptr) {
            return;
        }
        const auto changed_uber_state = core::api::uber_states::UberState(reinterpret_cast<app::IUberState*>(changed_state));

        // get index and enum of bell
        const auto it = std::ranges::find(bell_states.begin(), bell_states.end(), changed_uber_state.state());
        if (it == bell_states.end()) {
            return;
        }
        int bell_index = it - bell_states.begin();
        Bell bell = static_cast<Bell>(bell_index);

        // add new bell to queue and pop first
        bell_queue.push_back(bell);
        while (bell_queue.size() > desired_sequence.size()) {
            bell_queue.pop_front();
        }

        if (std::ranges::equal(bell_queue, desired_sequence)) {
            // mark puzzle as solved and play timeline
            event_uberstate.set(true);
            SwitchSeriesPuzzleSwitchSetupHolder::StopTimelines(switch_series_puzzle->fields.SetupStates);
            Moon::Timeline::TimelineEntity::StartPlayback_1(reinterpret_cast<app::TimelineEntity*>(activated_state->fields.m_transition));

            // play the music
            core::api::audio::play_event(SoundEventID::baseMusicStates);
            core::events::schedule_task_for_next_update([] {
                core::api::audio::play_event(SoundEventID::howlsOriginState);
                core::api::audio::set_state(SoundStateGroupID::howlsOriginMusic, SoundStateID::howlsOriginPuzzleSolve);
            });
        }
    }

    IL2CPP_INTERCEPT_WITH_ORDER(10, void, SwitchSeriesPuzzle, Apply, app::SwitchSeriesPuzzle* this_ptr, app::UberStateApplyContext__Enum context) {

        if (context != app::UberStateApplyContext__Enum::ValueChanged) {
            return;
        }

        const auto activated_state = SwitchSeriesPuzzleSwitchSetupHolder::get_ActivatedState(this_ptr->fields.SetupStates);
        if (activated_state == nullptr) {
            return;
        }
        auto path = il2cpp::unity::get_path(this_ptr);
        if (path == "howlsOriginEntrance/interactives/switchSequencePuzzleA") {
            check_switch_puzzle(this_ptr, activated_state, core::api::uber_states::UberState(24922, 13349), desired_sequence_A, bell_queue_A);
        } else if (path == "howlsOriginEntrance/interactives/switchSequencePuzzleB") {
            check_switch_puzzle(this_ptr, activated_state, core::api::uber_states::UberState(24922, 59146), desired_sequence_B, bell_queue_B);
        }
    }

} // namespace

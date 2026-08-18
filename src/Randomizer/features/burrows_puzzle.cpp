#include <Core/api/audio.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/events/task.h>
#include <Core/property/reactivity.h>
#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/app/methods/SwitchSeriesPuzzle.h>
#include <Modloader/app/methods/SwitchSeriesPuzzleSwitchSetupHolder.h>
#include <Modloader/il2cpp_helpers.h>
#include <queue>

namespace {
    using namespace app::classes;

    enum class Bell {
        Left,
        Mid,
        Right,
    };

    std::vector desired_sequence_burrows = {Bell::Left, Bell::Mid, Bell::Right, Bell::Right, Bell::Left, Bell::Mid, Bell::Left};
    std::vector desired_sequence_tree = {Bell::Left, Bell::Mid, Bell::Left, Bell::Right, Bell::Right, Bell::Mid, Bell::Left};
    std::deque<Bell> bell_queue_burrows;
    std::deque<Bell> bell_queue_tree;

    void check_switch_puzzle(
        app::SwitchSeriesPuzzle* switch_series_puzzle,
        const app::SwitchSeriesPuzzleSetupData* activated_state,
        const core::api::uber_states::UberState& event_uber_state,
        const std::vector<Bell>& desired_sequence,
        std::deque<Bell>& bell_queue
    ) {
        // do nothing if puzzle already completed
        if (event_uber_state.get<bool>()) {
            return;
        }

        // get rung bell
        const auto changed_state = SwitchSeriesPuzzle::GetChangedState(switch_series_puzzle);
        if (changed_state == nullptr) {
            return;
        }
        const auto changed_uber_state = core::api::uber_states::UberState(reinterpret_cast<app::IUberState*>(changed_state));

        Bell bell;
        switch (changed_uber_state.state()) {
            case 1919: {
                bell = Bell::Left;
            } break;
            case 24796: {
                bell = Bell::Mid;
            } break;
            case 7459: {
                bell = Bell::Right;
            } break;
            default:
                return;
        }

        // add new bell to queue and pop first
        bell_queue.push_back(bell);
        while (bell_queue.size() > desired_sequence.size()) {
            bell_queue.pop_front();
        }

        if (std::ranges::equal(bell_queue, desired_sequence)) {
            // mark puzzle as solved and play timeline
            event_uber_state.set(true);
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
            check_switch_puzzle(this_ptr, activated_state, core::api::uber_states::UberState(24922, 13349), desired_sequence_burrows, bell_queue_burrows);
        } else if (path == "howlsOriginEntrance/interactives/switchSequencePuzzleB") {
            check_switch_puzzle(this_ptr, activated_state, core::api::uber_states::UberState(24922, 59146), desired_sequence_tree, bell_queue_tree);
        }
    }

} // namespace

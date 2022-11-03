#include <Common/ext.h>
#include <Modloader/app/methods/EnemyArenaController.h>
#include <Modloader/common.h>
#include <Modloader/constants.h>
#include <Modloader/interception_macros.h>
#include <Core/enums/uber_state.h>
#include <Randomizer/macros.h>
#include <Core/uber_states/uber_state_interface.h>

using namespace modloader;
using namespace app::classes;

namespace {
    IL2CPP_INTERCEPT(EnemyArenaController, void, OnEnable, (app::EnemyArenaController* this_ptr)) {
        next::EnemyArenaController::OnEnable(this_ptr);

        auto completed_state_id = this_ptr->fields.CompletedState->fields._.m_id->fields.m_id;
        auto completed_state_group = this_ptr->fields.CompletedState->fields.Group->fields._.m_id->fields.m_id;

        if (completed_state_group == 44310 && completed_state_id == 58796) {
            this_ptr->fields.OptionalWaveState = uber_states::UberState(UberStateGroup::ShrineStates, 0).ptr<app::IntUberState>();
        } else if (completed_state_group == 21786 && completed_state_id == 2869) {
            this_ptr->fields.OptionalWaveState = uber_states::UberState(UberStateGroup::ShrineStates, 1).ptr<app::IntUberState>();
        } else if (completed_state_group == 24922 && completed_state_id == 45011) {
            this_ptr->fields.OptionalWaveState = uber_states::UberState(UberStateGroup::ShrineStates, 2).ptr<app::IntUberState>();
        } else if (completed_state_group == 18793 && completed_state_id == 12512) {
            this_ptr->fields.OptionalWaveState = uber_states::UberState(UberStateGroup::ShrineStates, 3).ptr<app::IntUberState>();
        } else if (completed_state_group == 58674 && completed_state_id == 56043) {
            this_ptr->fields.OptionalWaveState = uber_states::UberState(UberStateGroup::ShrineStates, 4).ptr<app::IntUberState>();
        } else if (completed_state_group == 9593 && completed_state_id == 59418) {
            // Noop: inkwaterMarshStateGroup.enemyRoom
        } else if (completed_state_group == 21786 && completed_state_id == 35598) {
            // Noop: swampStateGroup.enemyArenaComplete
        } else {
            trace(MessageType::Error, 3, "shrine_states", fmt::format("Could not set up wave state. Unknown shrine state: {}|{}", completed_state_group, completed_state_id));
        }
    }
} // namespace
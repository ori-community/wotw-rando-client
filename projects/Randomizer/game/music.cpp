#include <Core/api/audio.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/dev/object_visualizer.h>
#include <Core/events/action.h>
#include <Core/events/task.h>
#include <Modloader/app/methods/AK/Wwise/State.h>
#include <Modloader/app/methods/AkSoundEngine.h>
#include <Modloader/app/methods/DesiredUberStateBool.h>
#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/methods/NightCrawlerFightController.h>
#include <Modloader/app/methods/TimeUtility.h>
#include <Modloader/app/methods/WotwUberStateWwiseStateManager.h>
#include <Modloader/app/types/DesiredUberStateBool.h>
#include <Modloader/app/types/State.h>
#include <Modloader/app/types/WotwUberStateToWwiseData_AbilityRequirementCondition.h>
#include <Modloader/interception_macros.h>
#include <Modloader/windows_api/console.h>
#include <format>
#include <fstream>

using namespace app::classes;

namespace {
    unsigned int get_state(unsigned int group) {
        uint32_t out;
        AkSoundEngine::GetState_1(group, &out);
        return out;
    }

    // float next_update = 0.3f;
    // IL2CPP_INTERCEPT(GameController, void, FixedUpdate, (app::GameController* this_ptr)) {
    //     next_update -= TimeUtility::get_fixedDeltaTime();
    //
    //     if (next_update < 0.f) {
    //         next_update = 0.3f;
    //         modloader::win::console::console_send("---");
    //
    //         modloader::win::console::console_send(std::format("swampHowlsDenMusic  = {}", get_state(2313411230)));
    //         modloader::win::console::console_send(std::format("swampNightcrawlerC  = {}", get_state(2613557261)));
    //         modloader::win::console::console_send(std::format("nightCrawlerDefeat  = {}", get_state(1568262700)));
    //         modloader::win::console::console_send(std::format("risingPedistals_ub  = {}", get_state(1461097943)));
    //         modloader::win::console::console_send(std::format("playerHasSword_uber = {}", get_state(1817474664)));
    //         modloader::win::console::console_send(std::format("sceneStateGroup     = {}", get_state(3828193963)));
    //
    //     }
    //
    //     next::GameController::FixedUpdate(this_ptr);
    // }

    /**
     * This emulates the sounds of the Howl fight. It's needed because we nuke the original
     * behavior below.
     */
    IL2CPP_INTERCEPT(NightCrawlerFightController, void, FinishFight, (app::NightCrawlerFightController * this_ptr)) {
        next::NightCrawlerFightController::FinishFight(this_ptr);

        core::api::audio::set_state(SoundStateGroupID::nightCrawlerDefeated_uber, SoundStateID::nightCrawlerDefeated);
        core::events::schedule_task(2.f, [] {
            core::api::audio::set_state(SoundStateGroupID::nightCrawlerDefeated_uber, SoundStateID::None);
            core::api::audio::set_state(SoundStateGroupID::swampHowlsDenMusic, SoundStateID::None);
        });
    }

    IL2CPP_INTERCEPT(WotwUberStateWwiseStateManager, void, PopulateAffectedStates, (app::WotwUberStateWwiseStateManager * this_ptr )) {
        // Modify this_ptr->fields.WotwUberStateToWwiseData->fields.InheritedMap here
        auto entries = this_ptr->fields.WotwUberStateToWwiseData->fields.InheritedMap->vector;

        // Removes the music change caused by rising pedestals
        entries[23]->fields._.WwiseStatesToSet = types::State::create_array(0);

        // Links the "Now use the light we want to see" with getting sword tree rather than the ability
        entries[30]->fields.WotwUberStateConditions->fields.PlayerAbilityRequirements = types::WotwUberStateToWwiseData_AbilityRequirementCondition::create_array(0);
        auto sword_tree_condition = types::DesiredUberStateBool::create();
        DesiredUberStateBool::ctor(sword_tree_condition);
        sword_tree_condition->fields.DesiredValue = false;
        sword_tree_condition->fields._.Descriptor = reinterpret_cast<app::SerializedBooleanUberState*>(core::api::uber_states::UberState(0, 100).ptr());
        entries[30]->fields._.UberStateConditions->fields.BoolRequirements = types::DesiredUberStateBool::create_array({sword_tree_condition});

        // for both states true and false
        entries[31]->fields.WotwUberStateConditions->fields.PlayerAbilityRequirements = types::WotwUberStateToWwiseData_AbilityRequirementCondition::create_array(0);
        sword_tree_condition = types::DesiredUberStateBool::create();
        DesiredUberStateBool::ctor(sword_tree_condition);
        sword_tree_condition->fields.DesiredValue = true;
        sword_tree_condition->fields._.Descriptor = reinterpret_cast<app::SerializedBooleanUberState*>(core::api::uber_states::UberState(0, 100).ptr());
        entries[31]->fields._.UberStateConditions->fields.BoolRequirements = types::DesiredUberStateBool::create_array({sword_tree_condition});

        // removing howl states changing the music
        // howls chase started false
        entries[16]->fields._.WwiseStatesToSet = types::State::create_array(0);
        // howls chase started true
        entries[17]->fields._.WwiseStatesToSet = types::State::create_array(0);
        // howls defeated false
        entries[18]->fields._.WwiseStatesToSet = types::State::create_array(0);
        // howls defeated true
        entries[19]->fields._.WwiseStatesToSet = types::State::create_array(0);

        // Links the bow music with bow tree rather than the ability
        entries[36]->fields.WotwUberStateConditions->fields.PlayerAbilityRequirements = types::WotwUberStateToWwiseData_AbilityRequirementCondition::create_array(0);
        auto bow_tree_condition = types::DesiredUberStateBool::create();
        DesiredUberStateBool::ctor(bow_tree_condition);
        bow_tree_condition->fields.DesiredValue = false;
        bow_tree_condition->fields._.Descriptor = reinterpret_cast<app::SerializedBooleanUberState*>(core::api::uber_states::UberState(0, 97).ptr());
        entries[36]->fields._.UberStateConditions->fields.BoolRequirements = types::DesiredUberStateBool::create_array({bow_tree_condition});

        // for both states true and false
        entries[37]->fields.WotwUberStateConditions->fields.PlayerAbilityRequirements = types::WotwUberStateToWwiseData_AbilityRequirementCondition::create_array(0);
        bow_tree_condition = types::DesiredUberStateBool::create();
        DesiredUberStateBool::ctor(bow_tree_condition);
        bow_tree_condition->fields.DesiredValue = true;
        bow_tree_condition->fields._.Descriptor = reinterpret_cast<app::SerializedBooleanUberState*>(core::api::uber_states::UberState(0, 97).ptr());
        entries[37]->fields._.UberStateConditions->fields.BoolRequirements = types::DesiredUberStateBool::create_array({bow_tree_condition});

        // linking the rainy/sunny marsh music change with rainy/sunny uberstate
        // entries[127]->fields.WotwUberStateConditions->fields.PlayerAbilityRequirements = types::WotwUberStateToWwiseData_AbilityRequirementCondition::create_array(0);
        // auto sunny_marsh_condition = types::DesiredUberStateBool::create();
        // DesiredUberStateBool::ctor(sunny_marsh_condition);
        // sunny_marsh_condition->fields.DesiredValue = true;
        // sunny_marsh_condition->fields._.Descriptor = reinterpret_cast<app::SerializedBooleanUberState*>(core::api::uber_states::UberState(6, 401).ptr());
        // entries[127]->fields._.UberStateConditions->fields.BoolRequirements = types::DesiredUberStateBool::create_array({sunny_marsh_condition});
        //
        // // for both states true and false
        // entries[128]->fields.WotwUberStateConditions->fields.PlayerAbilityRequirements = types::WotwUberStateToWwiseData_AbilityRequirementCondition::create_array(0);
        // sunny_marsh_condition = types::DesiredUberStateBool::create();
        // DesiredUberStateBool::ctor(sunny_marsh_condition);
        // sunny_marsh_condition->fields.DesiredValue = false;
        // sunny_marsh_condition->fields._.Descriptor = reinterpret_cast<app::SerializedBooleanUberState*>(core::api::uber_states::UberState(6, 401).ptr());
        // entries[128]->fields._.UberStateConditions->fields.BoolRequirements = types::DesiredUberStateBool::create_array({sunny_marsh_condition});


        next::WotwUberStateWwiseStateManager::PopulateAffectedStates(this_ptr);
    }
}

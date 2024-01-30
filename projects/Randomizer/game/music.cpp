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

    void link_music_from_ability_to_state(app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry* entry, bool desired_value, short uber_state_group, short uber_state_state) {
        entry->fields.WotwUberStateConditions->fields.PlayerAbilityRequirements = types::WotwUberStateToWwiseData_AbilityRequirementCondition::create_array(0);
        auto condition = types::DesiredUberStateBool::create();
        DesiredUberStateBool::ctor(condition);
        condition->fields.DesiredValue = desired_value;
        condition->fields._.Descriptor = reinterpret_cast<app::SerializedBooleanUberState*>(core::api::uber_states::UberState(uber_state_group, uber_state_state).ptr());
        entry->fields._.UberStateConditions->fields.BoolRequirements = types::DesiredUberStateBool::create_array({condition});
    }

    IL2CPP_INTERCEPT(WotwUberStateWwiseStateManager, void, PopulateAffectedStates, (app::WotwUberStateWwiseStateManager * this_ptr )) {
        // Modify this_ptr->fields.WotwUberStateToWwiseData->fields.InheritedMap here
        auto entries = this_ptr->fields.WotwUberStateToWwiseData->fields.InheritedMap->vector;

        // Removes the music change caused by rising pedestals
        entries[23]->fields._.WwiseStatesToSet = types::State::create_array(0);

        // removing howl states changing the music
        // howls chase started false
        entries[16]->fields._.WwiseStatesToSet = types::State::create_array(0);
        // howls chase started true
        entries[17]->fields._.WwiseStatesToSet = types::State::create_array(0);
        // howls defeated false
        entries[18]->fields._.WwiseStatesToSet = types::State::create_array(0);
        // howls defeated true
        entries[19]->fields._.WwiseStatesToSet = types::State::create_array(0);

        // Links the "Now use the light we want to see" with getting sword tree rather than the ability
        link_music_from_ability_to_state(entries[30], false, 6, 401);
        link_music_from_ability_to_state(entries[31], true, 6, 401);

        // Links the afterBow bowroom music with bow tree rather than the ability
        link_music_from_ability_to_state(entries[36], false, 0, 97);
        link_music_from_ability_to_state(entries[37], true, 0, 97);

        // Links the burrowing music with burrow tree rather than the ability
        link_music_from_ability_to_state(entries[78], false, 0, 101);
        link_music_from_ability_to_state(entries[79], true, 0, 101);

        // Links the dashing and bashing music with dash tree rather than the ability
        link_music_from_ability_to_state(entries[32], false, 0, 102);
        link_music_from_ability_to_state(entries[33], true, 0, 102);

        // Links the in wonderment of winter music with grenade tree rather than the ability
        link_music_from_ability_to_state(entries[76], false, 0, 51);
        link_music_from_ability_to_state(entries[77], true, 0, 51);


        next::WotwUberStateWwiseStateManager::PopulateAffectedStates(this_ptr);
    }
}

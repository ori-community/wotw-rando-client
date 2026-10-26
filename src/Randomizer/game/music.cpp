#include <Core/api/audio.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/dev/object_visualizer.h>
#include <Core/events/action.h>
#include <Core/events/task.h>
#include <Modloader/app/methods/DesiredUberStateBool.h>
#include <Modloader/app/methods/NightCrawlerFightController.h>
#include <Modloader/app/methods/WotwUberStateToWwiseData_AbilityRequirementCondition.h>
#include <Modloader/app/methods/WotwUberStateWwiseStateManager.h>
#include <Modloader/app/types/DesiredUberStateBool.h>
#include <Modloader/app/types/State.h>
#include <Modloader/app/types/WotwUberStateToWwiseData_AbilityRequirementCondition.h>
#include <Modloader/interception_macros.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>


using namespace app::classes;

namespace {
    // unsigned int get_state(unsigned int group) {
    //     uint32_t out;
    //     AkSoundEngine::GetState_1(group, &out);
    //     return out;
    // }
    //
    // float next_update = 0.3f;
    // IL2CPP_INTERCEPT(void, GameController, FixedUpdate, app::GameController* this_ptr) {
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
    IL2CPP_INTERCEPT_WITH_ORDER(10, void, NightCrawlerFightController, FinishFight, app::NightCrawlerFightController * this_ptr) {
        next::NightCrawlerFightController::FinishFight(this_ptr);

        core::api::audio::set_state(SoundStateGroupID::nightCrawlerDefeated_uber, SoundStateID::nightCrawlerDefeated);
        core::events::schedule_task(2.f, [] {
            core::api::audio::set_state(SoundStateGroupID::nightCrawlerDefeated_uber, SoundStateID::None);
            core::api::audio::set_state(SoundStateGroupID::swampHowlsDenMusic, SoundStateID::None);
        });
    }

    template<typename SERIALIZED_BOOLEAN_UBER_STATE_T> requires core::api::uber_states::UberStateOfType<core::api::uber_states::UberStateType::SerializedBooleanUberState, SERIALIZED_BOOLEAN_UBER_STATE_T>
    void link_music_from_ability_to_state(
        const app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry* entry,
        const bool desired_value,
        SERIALIZED_BOOLEAN_UBER_STATE_T& uber_state
    ) {
        entry->fields.WotwUberStateConditions->fields.PlayerAbilityRequirements = types::WotwUberStateToWwiseData_AbilityRequirementCondition::create_array(0);
        auto condition = types::DesiredUberStateBool::create();
        DesiredUberStateBool::ctor(condition);
        condition->fields.DesiredValue = desired_value;
        condition->fields._.Descriptor = uber_state.get_native_ptr();
        entry->fields._.UberStateConditions->fields.BoolRequirements = types::DesiredUberStateBool::create_array({condition});
    }

    IL2CPP_INTERCEPT(void, WotwUberStateWwiseStateManager, PopulateAffectedStates, app::WotwUberStateWwiseStateManager * this_ptr ) {
        // Modify this_ptr->fields.WotwUberStateToWwiseData->fields.InheritedMap here
        const auto entries = this_ptr->fields.WotwUberStateToWwiseData->fields.InheritedMap->vector;

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

        // Links the "Now use the light we want to see" with lifting the storm rather than the ability
        link_music_from_ability_to_state(entries[30], false, randomizer::uber_states::state<"modifications", "stormLiftedInMarsh">());
        link_music_from_ability_to_state(entries[31], true, randomizer::uber_states::state<"modifications", "stormLiftedInMarsh">());

        // Links the after-bow bowroom music with bow tree rather than the ability
        link_music_from_ability_to_state(entries[36], false, randomizer::uber_states::state<"trees", "bow">());
        link_music_from_ability_to_state(entries[37], true, randomizer::uber_states::state<"trees", "bow">());

        // Links the burrowing music with burrow tree rather than the ability
        link_music_from_ability_to_state(entries[78], false, randomizer::uber_states::state<"trees", "burrow">());
        link_music_from_ability_to_state(entries[79], true, randomizer::uber_states::state<"trees", "burrow">());

        // Links the dashing and bashing music with dash tree rather than the ability
        link_music_from_ability_to_state(entries[32], false, randomizer::uber_states::state<"trees", "dash">());
        link_music_from_ability_to_state(entries[33], true, randomizer::uber_states::state<"trees", "dash">());

        // Links the in wonderment of winter music with grenade tree rather than the ability
        link_music_from_ability_to_state(entries[76], false, randomizer::uber_states::state<"trees", "grenade">());
        link_music_from_ability_to_state(entries[77], true, randomizer::uber_states::state<"trees", "grenade">());

        next::WotwUberStateWwiseStateManager::PopulateAffectedStates(this_ptr);
    }
}

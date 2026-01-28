#include <Core/events/task.h>
#include <Modloader/app/methods/Moon/Timeline/FaderAnimatorEntity.h>
#include <Modloader/app/methods/Moon/Timeline/MoonTimeline.h>
#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/app/methods/Moon/Timeline/LockInputEntity.h>
#include <Modloader/app/methods/PhysicalSystemManager.h>
#include <Modloader/app/methods/Moon/Setups/ChangeStateSetupHolder.h>
#include <Modloader/app/methods/SwitchSeriesPuzzle.h>
#include <Modloader/app/methods/DashableSwitchLogic.h>
#include <Modloader/app/methods/RaceHandler.h>
#include <Modloader/app/methods/LegacyTrigger.h>
#include <Modloader/app/methods/GameplayCamera.h>
#include <Modloader/app/methods/DoorLogic.h>
#include <Modloader/app/types/FaderAnimatorEntity.h>
#include <Modloader/app/types/UI_Cameras.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>
#include <frozen/unordered_map.h>
#include <google/protobuf/message.h>

#include <Core/api/audio.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Randomizer/features/cutscene_skips/custom_cutscene_skips.h>


namespace {
    using namespace app::classes;

    struct TransitionConfig {
        enum class AutomaticCutsceneSkipFadeMode {
            Fade,
            NoFade,
            // For the Luma puzzle skip...
            FadeWhenNearPosition,
        };

        AutomaticCutsceneSkipFadeMode automatic_cutscene_skip_fade_mode = AutomaticCutsceneSkipFadeMode::Fade;
        app::Vector2 fade_when_near_position = app::Vector2{};
    };

    bool should_track_starting_timelines = false;
    bool is_stopping_timeline = false;

    std::optional<app::Vector2> restore_velocity_after_skip = std::nullopt;
    std::optional<il2cpp::WeakGCRef<app::MoonTimeline>> active_transition_timeline = std::nullopt;
    std::optional<TransitionConfig> active_transition_config = std::nullopt;

    constexpr frozen::unordered_map<frozen::string, TransitionConfig, 21> TRANSITION_CONFIGS = {
        // Wellspring Blobs
        {"waterMillEntrance/interactives/doorStateController/doorTimeline", TransitionConfig{.automatic_cutscene_skip_fade_mode = TransitionConfig::AutomaticCutsceneSkipFadeMode::NoFade}},
        {"wotwSaveRoomC__clone0__clone1/interactives/fastWheelActivationSetup/wheelActivationTimeline", TransitionConfig{.automatic_cutscene_skip_fade_mode = TransitionConfig::AutomaticCutsceneSkipFadeMode::NoFade}},
        {"waterMillAExit/interactives/fastWheelsSetup/wheelsStartTimeline", TransitionConfig{.automatic_cutscene_skip_fade_mode = TransitionConfig::AutomaticCutsceneSkipFadeMode::NoFade}},
        {"waterMillBEntranceCreepSetup/creepSetupTimeline", TransitionConfig{.automatic_cutscene_skip_fade_mode = TransitionConfig::AutomaticCutsceneSkipFadeMode::NoFade}},
        {"waterMillPool__clone0/interactives/wheelASetup/wheelsActivateTimeline", TransitionConfig{.automatic_cutscene_skip_fade_mode = TransitionConfig::AutomaticCutsceneSkipFadeMode::NoFade}},

        // Misc
        {"mouldwoodDepthsE/artSetups/*enemyDoorSetup/puzzleCompleteSetup/puzzleCompleteTimeline", TransitionConfig{.automatic_cutscene_skip_fade_mode = TransitionConfig::AutomaticCutsceneSkipFadeMode::NoFade}},
        {"windtornRuinsC/interactives/artPillarFallSetup/timeline", TransitionConfig{}},
        {"howlsOriginEntrance/interactives/switchSequencePuzzleA/openGateTimeline", TransitionConfig{.automatic_cutscene_skip_fade_mode = TransitionConfig::AutomaticCutsceneSkipFadeMode::NoFade}},
        {"howlsOriginEntrance/interactives/switchSequencePuzzleB/openGateTimeline", TransitionConfig{.automatic_cutscene_skip_fade_mode = TransitionConfig::AutomaticCutsceneSkipFadeMode::NoFade}},
        {"lumaPoolsGetWaterDash/interactives/dashableSwitchTest/lagoonDoor/doorAnimator/timelines/openDoorSequence", TransitionConfig{.automatic_cutscene_skip_fade_mode = TransitionConfig::AutomaticCutsceneSkipFadeMode::NoFade}},
        {"lumaPoolsSaveRoom/artSetups/waterSetup/puzzleCompletedTimeline", TransitionConfig{.automatic_cutscene_skip_fade_mode = TransitionConfig::AutomaticCutsceneSkipFadeMode::FadeWhenNearPosition, .fade_when_near_position = app::Vector2{ /* at the anemone */ -1311, -4167}}},
        {"baursReachA/interactives/bridgeSetup/rockFallTimeline", TransitionConfig{.automatic_cutscene_skip_fade_mode = TransitionConfig::AutomaticCutsceneSkipFadeMode::NoFade}},
        {"lagoonEntrance/interactives/tentacleAndWheelSetup/tentacleKillTimeline", TransitionConfig{}},
        {"kwoloksCavernB/interactives/doors/kwoloksCavernDoor/doorAnimator/timelines/openDoorSequence", TransitionConfig{}},

        // Trials
        {"lumaPoolsRaceSetups/raceData/timelines/activateTimeline", TransitionConfig{.automatic_cutscene_skip_fade_mode = TransitionConfig::AutomaticCutsceneSkipFadeMode::FadeWhenNearPosition, .fade_when_near_position = app::Vector2{ /* at the anemone */ -1311, -4167}}},
        {"wellspringRaceSetups/raceData/timelines/activateTimeline", TransitionConfig{.automatic_cutscene_skip_fade_mode = TransitionConfig::AutomaticCutsceneSkipFadeMode::FadeWhenNearPosition, .fade_when_near_position = app::Vector2{ /* at the anemone */ -1311, -4167}}},
        {"baursReachWindTunnel/shared/raceData/timelines/activateTimeline", TransitionConfig{.automatic_cutscene_skip_fade_mode = TransitionConfig::AutomaticCutsceneSkipFadeMode::FadeWhenNearPosition, .fade_when_near_position = app::Vector2{ /* at the anemone */ -1311, -4167}}},
        {"kwolokDropRace/raceData/timelines/activateTimeline", TransitionConfig{.automatic_cutscene_skip_fade_mode = TransitionConfig::AutomaticCutsceneSkipFadeMode::FadeWhenNearPosition, .fade_when_near_position = app::Vector2{ /* at the anemone */ -1311, -4167}}},
        {"mouldwoodDepthsRaceSetups/raceData/timelines/activateTimeline", TransitionConfig{.automatic_cutscene_skip_fade_mode = TransitionConfig::AutomaticCutsceneSkipFadeMode::FadeWhenNearPosition, .fade_when_near_position = app::Vector2{ /* at the anemone */ -1311, -4167}}},
        {"silentWoodlandRaceSetups/raceData/timelines/activateTimeline", TransitionConfig{.automatic_cutscene_skip_fade_mode = TransitionConfig::AutomaticCutsceneSkipFadeMode::FadeWhenNearPosition, .fade_when_near_position = app::Vector2{ /* at the anemone */ -1311, -4167}}},
        {"desertRaceBGScene__clone0/raceData/timelines/activateTimeline", TransitionConfig{.automatic_cutscene_skip_fade_mode = TransitionConfig::AutomaticCutsceneSkipFadeMode::FadeWhenNearPosition, .fade_when_near_position = app::Vector2{ /* at the anemone */ -1311, -4167}}},
    };

    // Generic NewSetupStateController setups
    IL2CPP_INTERCEPT(bool, Moon::Setups::ChangeStateSetupHolder, Perform, app::ChangeStateSetupHolder* this_ptr, app::ChangeStateSetupData* state) {
        modloader::ScopedSetter _(should_track_starting_timelines, true);
        return next::Moon::Setups::ChangeStateSetupHolder::Perform(this_ptr, state);
    }

    // Burrows Entrance
    IL2CPP_INTERCEPT(void, SwitchSeriesPuzzle, Apply, app::SwitchSeriesPuzzle* this_ptr, app::UberStateApplyContext__Enum context) {
        modloader::ScopedSetter _(should_track_starting_timelines, true);
        return next::SwitchSeriesPuzzle::Apply(this_ptr, context);
    }

    // Luma dashable button
    IL2CPP_INTERCEPT(void, DashableSwitchLogic, OnDashHit, app::DashableSwitchLogic* this_ptr, app::Vector3 impact_velocity) {
        modloader::ScopedSetter _(should_track_starting_timelines, true);
        return next::DashableSwitchLogic::OnDashHit(this_ptr, impact_velocity);
    }

    // Spirit Trial activations
    IL2CPP_INTERCEPT(void, RaceHandler, ActivateRace, app::RaceHandler* this_ptr, bool in_game_activation) {
        modloader::ScopedSetter _(should_track_starting_timelines, true);
        return next::RaceHandler::ActivateRace(this_ptr, in_game_activation);
    }

    // Reach rock drop
    IL2CPP_INTERCEPT(void, LegacyTrigger, DoTrigger, app::LegacyTrigger* this_ptr, bool should_check_condition) {
        modloader::ScopedSetter _(should_track_starting_timelines, true);
        return next::LegacyTrigger::DoTrigger(this_ptr, should_check_condition);
    }

    // Purple door
    IL2CPP_INTERCEPT(void, DoorLogic, PerformStateTransition, app::DoorLogic* this_ptr) {
        modloader::ScopedSetter _(should_track_starting_timelines, true);
        return next::DoorLogic::PerformStateTransition(this_ptr);
    }

    IL2CPP_INTERCEPT(void, Moon::Timeline::LockInputEntity, OnStartPlayback, app::LockInputEntity* this_ptr, app::IContext* context) {
        if (is_stopping_timeline) {
            return;
        }

        if (active_transition_config.has_value()) {
            restore_velocity_after_skip = core::api::game::player::get_velocity();
        }

        next::Moon::Timeline::LockInputEntity::OnStartPlayback(this_ptr, context);
    }

    IL2CPP_INTERCEPT_WITH_ORDER(10, void, Moon::Timeline::FaderAnimatorEntity, OnStartPlayback, app::FaderAnimatorEntity* this_ptr, app::IContext* context) {
        if (is_stopping_timeline) {
            return;
        }

        next::Moon::Timeline::FaderAnimatorEntity::OnStartPlayback(this_ptr, context);
    }

    IL2CPP_INTERCEPT_WITH_ORDER(10, void, Moon::Timeline::FaderAnimatorEntity, OnStopPlayback, app::FaderAnimatorEntity* this_ptr) {
        if (is_stopping_timeline) {
            return;
        }

        next::Moon::Timeline::FaderAnimatorEntity::OnStopPlayback(this_ptr);
    }

    IL2CPP_INTERCEPT_WITH_ORDER(10, void, Moon::Timeline::MoonTimeline, OnStartPlayback, app::MoonTimeline* this_ptr, app::IContext* context) {
        if (should_track_starting_timelines) {
            const auto path = il2cpp::unity::get_path(this_ptr);

            const auto it = TRANSITION_CONFIGS.find(frozen::string(path));
            if (it != TRANSITION_CONFIGS.end()) {
                active_transition_timeline = il2cpp::WeakGCRef(this_ptr);
                active_transition_config = it->second;
            }
        }

        next::Moon::Timeline::MoonTimeline::OnStartPlayback(this_ptr, context);
    }

    bool skip_available() {
        return active_transition_timeline.has_value() &&
            active_transition_timeline->is_valid() &&
            Moon::Timeline::TimelineEntity::IsPlaying(reinterpret_cast<app::TimelineEntity*>(**active_transition_timeline));
    }

    std::optional<custom_cutscene_skips::CustomCutsceneSkip::Metadata> skip_get_metadata() {
        if (active_transition_config.has_value()) {
            switch (active_transition_config->automatic_cutscene_skip_fade_mode) {
                case TransitionConfig::AutomaticCutsceneSkipFadeMode::Fade:
                    return std::make_optional<custom_cutscene_skips::CustomCutsceneSkip::Metadata>({
                        .fade_on_automatic_skip = true,
                    });
                case TransitionConfig::AutomaticCutsceneSkipFadeMode::NoFade:
                    return std::make_optional<custom_cutscene_skips::CustomCutsceneSkip::Metadata>({
                        .fade_on_automatic_skip = false,
                    });
                case TransitionConfig::AutomaticCutsceneSkipFadeMode::FadeWhenNearPosition:
                    return std::make_optional<custom_cutscene_skips::CustomCutsceneSkip::Metadata>({
                        .fade_on_automatic_skip = modloader::math::distance2(active_transition_config->fade_when_near_position, modloader::math::to_vec2(core::api::game::player::get_position())) < 100.f,
                    });
            }
        }

        return std::nullopt;
    }

    void skip_invoke(const custom_cutscene_skips::CustomCutsceneSkip::InvokeParameters& parameters) {
        modloader::ScopedSetter _(is_stopping_timeline, true);
        Moon::Timeline::TimelineEntity::StopPlayback(reinterpret_cast<app::TimelineEntity*>(**active_transition_timeline));
        active_transition_config = std::nullopt;

        if (parameters.is_automatic_skip && restore_velocity_after_skip.has_value()) {
            core::api::game::player::set_velocity(restore_velocity_after_skip->x, restore_velocity_after_skip->y);
        }

        const auto gameplay_camera = types::UI_Cameras::get_class()->static_fields->Current;
        if (gameplay_camera->fields.Motion != app::GameplayCamera_MotionType__Enum::Chase) {
            GameplayCamera::MoveToTargetCharacter(gameplay_camera, 1.5f);
        }
    }

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        custom_cutscene_skips::register_cutscene_skip(custom_cutscene_skips::CustomCutsceneSkip{
            .is_available = &skip_available,
            .invoke = &skip_invoke,
            .get_metadata = &skip_get_metadata
        });
    });
}

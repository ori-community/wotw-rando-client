#include <Core/events/task.h>
#include <Modloader/app/methods/Lever.h>
#include <Modloader/app/methods/Moon/Timeline/FaderAnimatorEntity.h>
#include <Modloader/app/methods/Moon/Timeline/MoonTimeline.h>
#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/app/methods/PhysicalSystemManager.h>
#include <Modloader/app/types/FaderAnimatorEntity.h>
#include <Modloader/app/types/PhysicalSystemManager.h>
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

    bool is_pushing_lever = false;
    bool is_stopping_timeline = false;
    std::optional<il2cpp::WeakGCRef<app::MoonTimeline>> active_lever_timeline = std::nullopt;
    std::optional<il2cpp::WeakGCRef<app::Lever>> active_lever = std::nullopt;

    struct LeverConfig {
        bool unskippable = false;
        bool disable_fade_on_automatic_cutscene_skip = false;
        std::optional<app::Vector2> spawn_position = std::nullopt;
        std::optional<SoundEventID> sound_event = std::nullopt;
        std::optional<float> sound_event_delay = std::nullopt;
        bool reset_physical_system_managers_in_scene = false;
    };

    constexpr frozen::unordered_map<frozen::string, LeverConfig, 18> LEVER_CONFIGS = {
        {"waterMillBRotatingRoom/artTimelines/rotatingRoomBase/newLeverSetupA/lever", LeverConfig{.spawn_position = app::Vector2{-1172.3, -3817.325}, .sound_event = SoundEventID::roomStop, .sound_event_delay = 5.f}},
        {"waterMillBRotatingRoom/artTimelines/rotatingRoomBase/newLeverSetupB/lever", LeverConfig{.spawn_position = app::Vector2{-1177.328, -3810.59}, .sound_event = SoundEventID::roomStop, .sound_event_delay = 5.f}},
        {"waterMillBRotatingRoom/artTimelines/rotatingRoomBase/newLeverSetupC/lever", LeverConfig{.spawn_position = app::Vector2{-1169.494, -3784.787}, .sound_event = SoundEventID::roomStop, .sound_event_delay = 5.f}},
        {"nightcrawlerCavernDoubleJumpEscalation/*leverGatePuzzleSetup (1)/platformBranchSetup/levers/lever", LeverConfig{.reset_physical_system_managers_in_scene = true}},
        {"weepingRidgeElevatorFight/elevatorSetup/elevator/elevatorRotPivot/lever", LeverConfig{.unskippable = true}},
        {"waterMillPool__clone0/interactives/*leverGateLowerWater (1)/platformBranchSetup/levers/*waterSetupLeverA/lever", LeverConfig{.disable_fade_on_automatic_cutscene_skip = true}},
        {"wellspringEntranceSecretRoom/interactives/doors/lever", LeverConfig{.disable_fade_on_automatic_cutscene_skip = true}},
        {"lumaPoolsBubbleJumping/interactives/leverPuzzleSetup/lever", LeverConfig{.disable_fade_on_automatic_cutscene_skip = true}},
        {"lumaPoolsA/interactives/leverSetup/lever", LeverConfig{.disable_fade_on_automatic_cutscene_skip = true}},
        {"baursReachA/interactives/leverSetup/lever", LeverConfig{.disable_fade_on_automatic_cutscene_skip = true}},
        {"swampTorchIntroductionA/interactives/swampDoor/lever", LeverConfig{.disable_fade_on_automatic_cutscene_skip = true}},
        {"howlsOriginC/interactives/risingPortalsSetup/lever", LeverConfig{.disable_fade_on_automatic_cutscene_skip = true}},
        {"kwoloksCavernB/interactives/*waterSetupLeverA/kwolokCavernsLever", LeverConfig{.disable_fade_on_automatic_cutscene_skip = true}},
        {"kwoloksCavernTimedTongueEscalation/artSetups/doors/lever", LeverConfig{.disable_fade_on_automatic_cutscene_skip = true}},
        {"bashIntroductionA__clone0/interactives/lever", LeverConfig{.disable_fade_on_automatic_cutscene_skip = true}},
        {"e3DesertF/artSetups/*leverSetup/lever", LeverConfig{.disable_fade_on_automatic_cutscene_skip = true}},
        {"windtornRuinsA/interactives/doors/lever", LeverConfig{.disable_fade_on_automatic_cutscene_skip = true}},
        {"kwoloksHollowEntrance/interactives/waterLeverSetup/kwolokCavernsLever", LeverConfig{.disable_fade_on_automatic_cutscene_skip = true}},
    };

    void on_lever_push(void(*next_fn)(app::Lever*), app::Lever* lever) {
        if (lever->fields.LeverKind == app::LeverMode__Enum::LeftMiddleRightSpring) {
            next_fn(lever);
            return;
        }

        active_lever_timeline = std::nullopt;

        const auto path = il2cpp::unity::get_path(lever);
        const auto config_it = LEVER_CONFIGS.find(frozen::string(path));
        if (config_it != LEVER_CONFIGS.end() && config_it->second.unskippable) {
            next_fn(lever);
            return;
        }

        modloader::ScopedSetter _(is_pushing_lever, true);
        active_lever = il2cpp::WeakGCRef(lever);
        next_fn(lever);
    }

    IL2CPP_INTERCEPT(void, Lever, OnPushLeverRight, app::Lever* this_ptr) {
        on_lever_push(next::Lever::OnPushLeverRight, this_ptr);
    }

    IL2CPP_INTERCEPT(void, Lever, OnPushLeverLeft, app::Lever* this_ptr) {
        on_lever_push(next::Lever::OnPushLeverLeft, this_ptr);
    }

    IL2CPP_INTERCEPT(void, Moon::Timeline::FaderAnimatorEntity, OnStartPlayback, app::FaderAnimatorEntity* this_ptr, app::IContext* context) {
        if (is_stopping_timeline) {
            return;
        }

        next::Moon::Timeline::FaderAnimatorEntity::OnStartPlayback(this_ptr, context);
    }

    IL2CPP_INTERCEPT(void, Moon::Timeline::FaderAnimatorEntity, OnStopPlayback, app::FaderAnimatorEntity* this_ptr) {
        if (is_stopping_timeline) {
            return;
        }

        next::Moon::Timeline::FaderAnimatorEntity::OnStopPlayback(this_ptr);
    }

    IL2CPP_INTERCEPT(void, Moon::Timeline::MoonTimeline, OnStartPlayback, app::MoonTimeline* this_ptr, app::IContext* context) {
        if (is_pushing_lever) {
            modloader::win::console::console_send(il2cpp::unity::get_path(this_ptr));
            active_lever_timeline = il2cpp::WeakGCRef(this_ptr);
            is_pushing_lever = false;
        }

        next::Moon::Timeline::MoonTimeline::OnStartPlayback(this_ptr, context);
    }

    IL2CPP_INTERCEPT(void, PhysicalSystemManager, OnEnable, app::PhysicalSystemManager* this_ptr) {
        next::PhysicalSystemManager::OnEnable(this_ptr);
    }

    bool skip_available() {
        return active_lever_timeline.has_value() &&
            active_lever_timeline->is_valid() &&
            Moon::Timeline::TimelineEntity::IsPlaying(reinterpret_cast<app::TimelineEntity*>(**active_lever_timeline));
    }

    std::optional<custom_cutscene_skips::CustomCutsceneSkip::Metadata> skip_get_metadata() {
        if (active_lever.has_value() && active_lever->is_valid()) {
            const auto path = il2cpp::unity::get_path(**active_lever);
            const auto config_it = LEVER_CONFIGS.find(frozen::string(path));
            if (config_it != LEVER_CONFIGS.end()) {
                return std::make_optional<custom_cutscene_skips::CustomCutsceneSkip::Metadata>({
                    .fade_on_automatic_skip = !config_it->second.disable_fade_on_automatic_cutscene_skip,
                });
            }
        }

        return std::nullopt;
    }

    void skip_invoke() {
        modloader::ScopedSetter _(is_stopping_timeline, true);
        Moon::Timeline::TimelineEntity::StopPlayback(reinterpret_cast<app::TimelineEntity*>(**active_lever_timeline));

        if (active_lever.has_value() && active_lever->is_valid()) {
            const auto path = il2cpp::unity::get_path(**active_lever);
            const auto config_it = LEVER_CONFIGS.find(frozen::string(path));
            if (config_it != LEVER_CONFIGS.end()) {
                if (config_it->second.sound_event.has_value()) {
                    if (config_it->second.sound_event_delay.has_value()) {
                        const auto sound_event = *config_it->second.sound_event;
                        core::events::schedule_task(*config_it->second.sound_event_delay, [sound_event] {
                            core::api::audio::fire_and_forget(sound_event);
                        });
                    } else {
                        core::api::audio::fire_and_forget(*config_it->second.sound_event);
                    }
                }

                if (config_it->second.spawn_position.has_value()) {
                    core::api::game::player::set_position(config_it->second.spawn_position->x, config_it->second.spawn_position->y, false);
                    core::api::game::save();
                    core::events::schedule_task_for_next_update([] {
                        core::api::game::player::snap_camera();
                    });
                }

                if (config_it->second.reset_physical_system_managers_in_scene) {
                    const auto lever_scene = il2cpp::unity::get_scene(il2cpp::unity::get_game_object(**active_lever));
                    const auto root_objects = il2cpp::unity::get_root_game_objects(lever_scene);

                    for (const auto& root_object: root_objects) {
                        for (const auto & physical_system_manager: il2cpp::unity::get_components_in_children<app::PhysicalSystemManager>(root_object, types::PhysicalSystemManager::get_class())) {
                            PhysicalSystemManager::ResetPhysicalSystemToTheLastState(physical_system_manager, true);
                        }
                    }
                }
            }
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

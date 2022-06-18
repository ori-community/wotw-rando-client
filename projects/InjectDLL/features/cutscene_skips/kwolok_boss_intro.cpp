#include <Il2CppModLoader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Il2CppModLoader/app/methods/Moon/Timeline/MoonTimeline.h>
#include <Il2CppModLoader/il2cpp_helpers.h>

#include "custom_cutscene_skips.h"
#include <Il2CppModLoader/app/methods/GameController.h>
#include <Il2CppModLoader/common.h>
#include <event_bus.h>
#include <features/faderb.h>
#include <features/scenes/scene_load.h>
#include <game/game.h>
#include <game/player.h>
#include <uber_states/uber_state_interface.h>

using namespace app::methods;

namespace {
    app::MoonTimeline* kwolok_boss_intro_timeline = nullptr;

    void on_scene_load(scenes::SceneLoadEventMetadata* metadata, EventTiming timing) {
        if (metadata->state != app::SceneState__Enum::Loaded) {
            return;
        }

        if (metadata->scene_name == "kwolokBossWispIntro") {
            auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

            auto timeline_go = il2cpp::unity::find_child(
                    scene_root_go,
                    std::vector<std::string>{
                            "kwolokBoss",
                            "kwolokBossIntro" }
            );

            if (il2cpp::unity::is_valid(timeline_go)) {
                kwolok_boss_intro_timeline = il2cpp::unity::get_component<app::MoonTimeline>(timeline_go, "Moon.Timeline", "MoonTimeline");
            }

        }
    }

    bool skip_available() {
        return
                il2cpp::unity::is_valid(kwolok_boss_intro_timeline) &&
                Moon::Timeline::TimelineEntity::IsPlaying(reinterpret_cast<app::TimelineEntity*>(kwolok_boss_intro_timeline));
    }

    void skip_invoke() {
        Moon::Timeline::TimelineEntity::StopPlayback(reinterpret_cast<app::TimelineEntity*>(kwolok_boss_intro_timeline));

        game::player::set_position(-1634.946f, -4128.809f);

        uber_states::UberState kwolok_boss_state(static_cast<UberStateGroup>(945), 58403);
        kwolok_boss_state.set(2.0);

        GameController::CreateCheckpoint(game::controller(), true, false);
        GameController::RestoreCheckpointImmediate_1(game::controller());
    }

    void initialize() {
        scenes::event_bus().register_handler(&on_scene_load);

        auto cutscene_skip = custom_cutscene_skips::CustomCutsceneSkip{
            .is_available = &skip_available,
            .invoke = &skip_invoke,
        };
        custom_cutscene_skips::register_cutscene_skip(cutscene_skip);
    }

    CALL_ON_INIT(initialize);
} // namespace
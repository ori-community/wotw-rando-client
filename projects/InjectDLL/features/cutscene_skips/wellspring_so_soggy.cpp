#include <Il2CppModLoader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Il2CppModLoader/il2cpp_helpers.h>

#include "custom_cutscene_skips.h"
#include <Il2CppModLoader/app/methods/GameController.h>
#include <Il2CppModLoader/common.h>
#include <event_bus.h>
#include <features/faderb.h>
#include <features/scenes/scene_load.h>
#include <game/game.h>
#include <game/player.h>

using namespace app::methods;

namespace {
    app::MoonTimeline* wellspring_so_soggy_timeline = nullptr;

    void on_scene_load(scenes::SceneLoadEventMetadata* metadata, EventTiming timing) {
        if (metadata->state != app::SceneState__Enum::Loaded) {
            return;
        }

        if (metadata->scene_name == "waterMillEntrance") {
            auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

            auto timeline_go = il2cpp::unity::find_child(
                    scene_root_go,
                    std::vector<std::string>{
                            "timelines",
                            "timelineMillEnding" }
            );

            if (il2cpp::unity::is_valid(timeline_go)) {
                wellspring_so_soggy_timeline = il2cpp::unity::get_component<app::MoonTimeline>(timeline_go, "Moon.Timeline", "MoonTimeline");
            }
        }
    }

    bool skip_available() {
        return
                il2cpp::unity::is_valid(wellspring_so_soggy_timeline) &&
                Moon::Timeline::TimelineEntity::IsPlaying(reinterpret_cast<app::TimelineEntity*>(wellspring_so_soggy_timeline));
    }

    void skip_invoke() {
        Moon::Timeline::TimelineEntity::StopPlayback(reinterpret_cast<app::TimelineEntity*>(wellspring_so_soggy_timeline));
        game::player::set_position(-763.04f, -4071.325f, true);
        game::player::snap_camera();
        GameController::CreateCheckpoint(game::controller(), true, false);
        faderb::fade_out(0.6f);
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

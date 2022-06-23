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
#include <utils/misc.h>

using namespace utils;
using namespace app::methods;

namespace {
    enum DeferredSkipAction {
        Idle,
        TeleportOri,
        SnapCamera,
    };

    ObjectReference<app::MoonTimeline> get_wisp_cutscene;
    DeferredSkipAction next_frame_action = Idle;

    void on_scene_load(scenes::SceneLoadEventMetadata* metadata, EventTiming timing) {
        if (metadata->state != app::SceneState__Enum::Loaded) {
            return;
        }

        if (metadata->scene_name == "desertRuinsGetWisp") {
            auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

            auto timeline_go = il2cpp::unity::find_child(
                    scene_root_go,
                    std::vector<std::string>{
                            "setup",
                            "timelines",
                            "desertWispTmeline" }
            );

            if (il2cpp::unity::is_valid(timeline_go)) {
                get_wisp_cutscene.set_reference(il2cpp::unity::get_component<app::MoonTimeline>(timeline_go, "Moon.Timeline", "MoonTimeline"));
            }
        }
    }

    bool skip_available() {
        return
                get_wisp_cutscene.is_valid() &&
                Moon::Timeline::TimelineEntity::IsPlaying(reinterpret_cast<app::TimelineEntity*>(get_wisp_cutscene.ptr));
    }

    void skip_invoke() {
        Moon::Timeline::TimelineEntity::StopPlayback(reinterpret_cast<app::TimelineEntity*>(get_wisp_cutscene.ptr));
        next_frame_action = TeleportOri;
    }

    void on_fixed_update(GameEvent game_event, EventTiming timing) {
        switch (next_frame_action) {
            case Idle:
                break;
            case TeleportOri:
                game::player::set_position(2020.209f, -4027.096);
                game::checkpoint(true, false);
                next_frame_action = SnapCamera;
                break;
            case SnapCamera:
                game::player::snap_camera();
                next_frame_action = Idle;
                break;
        }
    }

    void initialize() {
        scenes::event_bus().register_handler(&on_scene_load);
        game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::End, &on_fixed_update);

        auto cutscene_skip = custom_cutscene_skips::CustomCutsceneSkip{
                .is_available = &skip_available,
                .invoke = &skip_invoke,
        };
        custom_cutscene_skips::register_cutscene_skip(cutscene_skip);
    }

    CALL_ON_INIT(initialize);
} // namespace

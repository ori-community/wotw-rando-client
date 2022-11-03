#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/il2cpp_helpers.h>

#include "custom_cutscene_skips.h"
#include <Modloader/app/methods/GameController.h>
#include <Modloader/common.h>
#include <Core/utils/event_bus.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/utils/misc.h>

using namespace utils;
using namespace app::classes;

namespace {
    enum DeferredSkipAction {
        Idle,
        TeleportOri,
    };

    ObjectReference<app::MoonTimeline> reach_escape_intro;
    DeferredSkipAction next_frame_action = Idle;

    void on_scene_load(scenes::SceneLoadEventMetadata* metadata, EventTiming timing) {
        if (metadata->state != app::SceneState__Enum::Loaded) {
            return;
        }

        if (metadata->scene_name == "baursReachPeak") {
            auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

            auto timeline_go = il2cpp::unity::find_child(
                    scene_root_go,
                    std::vector<std::string>{
                            "collectWispSetup",
                            "springBlossomTimeline" }
            );

            if (il2cpp::unity::is_valid(timeline_go)) {
                reach_escape_intro.set_reference(il2cpp::unity::get_component<app::MoonTimeline>(timeline_go, "Moon.Timeline", "MoonTimeline"));
            }
        }
    }

    bool skip_available() {
        return
                scenes::scene_is_loaded("baursReachPeak") &&
                reach_escape_intro.is_valid() &&
                Moon::Timeline::TimelineEntity::IsPlaying(reinterpret_cast<app::TimelineEntity*>(reach_escape_intro.ptr));
    }

    void skip_invoke() {
        Moon::Timeline::TimelineEntity::StopPlayback(reinterpret_cast<app::TimelineEntity*>(reach_escape_intro.ptr));
        next_frame_action = TeleportOri;
    }

    void on_fixed_update(GameEvent game_event, EventTiming timing) {
        switch (next_frame_action) {
            case Idle:
                break;
            case TeleportOri:
                game::player::set_position(-55.90539f, -3754.317, true);
                game::player::snap_camera();
                game::checkpoint(true, false, true);
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

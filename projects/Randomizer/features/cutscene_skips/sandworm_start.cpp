#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/app/types/MoonTimeline.h>
#include <Modloader/il2cpp_helpers.h>

#include "custom_cutscene_skips.h"
#include <Common/event_bus.h>
#include <Core/api/faderb.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/utils/misc.h>
#include <Modloader/app/methods/GameController.h>
#include <Modloader/modloader.h>

using namespace utils;
using namespace app::classes;

namespace {
    enum DeferredSkipAction {
        Idle,
        TeleportOri,
        SnapCamera,
    };

    ObjectReference<app::MoonTimeline> get_wisp_cutscene;
    DeferredSkipAction next_frame_action = Idle;

    void on_scene_load(core::api::scenes::SceneLoadEventMetadata* metadata) {
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
                get_wisp_cutscene.set_reference(il2cpp::unity::get_component<app::MoonTimeline>(timeline_go, types::MoonTimeline::get_class()));
            }
        }
    }

    bool skip_available() {
        return core::api::scenes::scene_is_loaded("desertRuinsGetWisp") &&
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
                core::api::game::player::set_position(2020.209f, -4027.096);
                core::api::game::temporary_save(true, false);
                next_frame_action = SnapCamera;
                break;
            case SnapCamera:
                core::api::game::player::snap_camera();
                next_frame_action = Idle;
                break;
        }
    }

    auto on_scene_load_handle = core::api::scenes::event_bus().register_handler(&on_scene_load);
    auto on_fixed_update_handle = core::api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, &on_fixed_update);
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        auto cutscene_skip = custom_cutscene_skips::CustomCutsceneSkip{
            .is_available = &skip_available,
            .invoke = &skip_invoke,
        };
        custom_cutscene_skips::register_cutscene_skip(cutscene_skip);
    });
} // namespace

#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/app/types/TimelineEntity.h>
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
    ObjectReference<app::MoonTimeline> wellspring_so_soggy_timeline;

    void on_scene_load(core::api::scenes::SceneLoadEventMetadata* metadata) {
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
                wellspring_so_soggy_timeline.set_reference(il2cpp::unity::get_component<app::MoonTimeline>(timeline_go, types::TimelineEntity::get_class()));
            }
        }
    }

    bool skip_available() {
        return core::api::scenes::scene_is_loaded("waterMillEntrance") &&
            wellspring_so_soggy_timeline.is_valid() &&
            Moon::Timeline::TimelineEntity::IsPlaying(reinterpret_cast<app::TimelineEntity*>(wellspring_so_soggy_timeline.ptr));
    }

    void skip_invoke(const custom_cutscene_skips::CustomCutsceneSkip::InvokeParameters&) {
        Moon::Timeline::TimelineEntity::StopPlayback(reinterpret_cast<app::TimelineEntity*>(wellspring_so_soggy_timeline.ptr));
        core::api::game::player::set_position(-763.04f, -4071.325f, true);
        core::api::game::player::snap_camera();
        GameController::CreateCheckpoint(core::api::game::game_controller(), true, false);
        core::api::faderb::fade_to_game_visible(0.6f);
    }

    auto on_scene_load_handle = core::api::scenes::event_bus().register_handler(&on_scene_load);
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        auto cutscene_skip = custom_cutscene_skips::CustomCutsceneSkip{
            .is_available = &skip_available,
            .invoke = &skip_invoke,
        };
        custom_cutscene_skips::register_cutscene_skip(cutscene_skip);
    });
} // namespace

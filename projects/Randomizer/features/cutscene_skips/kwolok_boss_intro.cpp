#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/il2cpp_helpers.h>

#include "custom_cutscene_skips.h"
#include <Common/event_bus.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/utils/misc.h>
#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/types/MoonTimeline.h>
#include <Modloader/modloader.h>

using namespace utils;
using namespace app::classes;

namespace {
    ObjectReference<app::MoonTimeline> kwolok_boss_intro_timeline;

    void on_scene_load(core::api::scenes::SceneLoadEventMetadata* metadata) {
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
                kwolok_boss_intro_timeline.set_reference(il2cpp::unity::get_component<app::MoonTimeline>(timeline_go, types::MoonTimeline::get_class()));
            }
        }
    }

    bool skip_available() {
        return core::api::scenes::scene_is_loaded("kwolokBossWispIntro") &&
            kwolok_boss_intro_timeline.is_valid() &&
            Moon::Timeline::TimelineEntity::IsPlaying(reinterpret_cast<app::TimelineEntity*>(kwolok_boss_intro_timeline.ptr));
    }

    void skip_invoke() {
        Moon::Timeline::TimelineEntity::StopPlayback(reinterpret_cast<app::TimelineEntity*>(kwolok_boss_intro_timeline.ptr));

        core::api::game::player::set_position(-1634.946f, -4128.809f);

        core::api::uber_states::UberState kwolok_boss_state(static_cast<UberStateGroup>(945), 58403);
        kwolok_boss_state.set(2.0);

        core::api::game::checkpoint(true, true, true);
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
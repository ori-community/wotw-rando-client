#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/il2cpp_helpers.h>

#include "custom_cutscene_skips.h"
#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/types/MoonTimeline.h>
#include <Modloader/common.h>
#include <Core/utils/event_bus.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/uber_states/uber_state_interface.h>
#include <Core/utils/misc.h>

using namespace utils;
using namespace app::classes;

namespace {
    ObjectReference<app::MoonTimeline> kwolok_boss_intro_timeline;

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
                kwolok_boss_intro_timeline.set_reference(il2cpp::unity::get_component<app::MoonTimeline>(timeline_go, types::MoonTimeline::get_class()));
            }

        }
    }

    bool skip_available() {
        return
                scenes::scene_is_loaded("kwolokBossWispIntro") &&
                kwolok_boss_intro_timeline.is_valid() &&
                Moon::Timeline::TimelineEntity::IsPlaying(reinterpret_cast<app::TimelineEntity*>(kwolok_boss_intro_timeline.ptr));
    }

    void skip_invoke() {
        Moon::Timeline::TimelineEntity::StopPlayback(reinterpret_cast<app::TimelineEntity*>(kwolok_boss_intro_timeline.ptr));

        game::player::set_position(-1634.946f, -4128.809f);

        uber_states::UberState kwolok_boss_state(static_cast<UberStateGroup>(945), 58403);
        kwolok_boss_state.set(2.0);

        game::checkpoint(true, true, true);
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
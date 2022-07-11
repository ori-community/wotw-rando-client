#include <Il2CppModLoader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Il2CppModLoader/il2cpp_helpers.h>

#include "custom_cutscene_skips.h"
#include <Il2CppModLoader/common.h>
#include <event_bus.h>
#include <features/scenes/scene_load.h>
#include <uber_states/uber_state_interface.h>
#include <utils/misc.h>

using namespace utils;
using namespace app::methods;

namespace {
    ObjectReference<app::MoonTimeline> kwolok_boss_farewell_timeline;

    void on_scene_load(scenes::SceneLoadEventMetadata* metadata, EventTiming timing) {
        if (metadata->state != app::SceneState__Enum::Loaded) {
            return;
        }

        if (metadata->scene_name == "kwolokBossGetWisp") {
            auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

            auto timeline_go = il2cpp::unity::find_child(
                    scene_root_go,
                    std::vector<std::string>{
                            "kwolokBossSetup",
                            "kwolokDeathTimeline" }
            );

            if (il2cpp::unity::is_valid(timeline_go)) {
                kwolok_boss_farewell_timeline.set_reference(il2cpp::unity::get_component<app::MoonTimeline>(timeline_go, "Moon.Timeline", "MoonTimeline"));
            }
        }
    }

    bool skip_available() {
        return
                scenes::scene_is_loaded("kwolokBossGetWisp") &&
                kwolok_boss_farewell_timeline.is_valid() &&
                Moon::Timeline::TimelineEntity::IsPlaying(reinterpret_cast<app::TimelineEntity*>(kwolok_boss_farewell_timeline.ptr));
    }

    void skip_invoke() {
        Moon::Timeline::TimelineEntity::StopPlayback(reinterpret_cast<app::TimelineEntity*>(kwolok_boss_farewell_timeline.ptr));

        uber_states::UberState pools_wisp_state(static_cast<UberStateGroup>(945), 49747);
        pools_wisp_state.set(1.0);
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
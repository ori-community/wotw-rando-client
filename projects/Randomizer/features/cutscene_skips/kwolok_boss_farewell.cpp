#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/app/types/MoonTimeline.h>
#include <Modloader/il2cpp_helpers.h>

#include <Common/event_bus.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/utils/misc.h>
#include <Modloader/app/methods/Moon/Timeline/MoonTimeline.h>
#include <Modloader/modloader.h>
#include <Randomizer/features/cutscene_skips/custom_cutscene_skips.h>

#include <Core/api/game/player.h>

using namespace utils;
using namespace app::classes;

namespace {
    ObjectReference<app::MoonTimeline> kwolok_boss_farewell_timeline;
    core::api::uber_states::UberState pools_wisp_state(945, 49747);

    void on_scene_load(core::api::scenes::SceneLoadEventMetadata* metadata) {
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
                kwolok_boss_farewell_timeline.set_reference(il2cpp::unity::get_component<app::MoonTimeline>(timeline_go, types::MoonTimeline::get_class()));
            }
        }
    }

    /**
     * This function replicates the behavior of
     * kwolokBossSetup/getPickupOnCondition.
     */
    void give_strength_if_not_given() {
        if (pools_wisp_state.get<bool>()) {
            return;
        }

        core::api::game::player::max_energy().add(1.f);
        core::api::game::player::max_health().add(10.f);
        core::api::game::player::refill_energy();
        core::api::game::player::refill_health();
        pools_wisp_state.set(true);
    }

    bool skip_available() {
        return core::api::scenes::scene_is_loaded("kwolokBossGetWisp") &&
            kwolok_boss_farewell_timeline.is_valid() &&
            Moon::Timeline::TimelineEntity::IsPlaying(reinterpret_cast<app::TimelineEntity*>(kwolok_boss_farewell_timeline.ptr));
    }

    void skip_invoke() {
        Moon::Timeline::TimelineEntity::StopPlayback(reinterpret_cast<app::TimelineEntity*>(kwolok_boss_farewell_timeline.ptr));
        give_strength_if_not_given();
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

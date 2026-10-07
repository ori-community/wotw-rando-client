#include <Common/event_bus.h>
#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/uber_states/core_uber_states.h>
#include <Core/utils/misc.h>
#include <Modloader/app/methods/Moon/Timeline/MoonTimeline.h>
#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/app/types/MoonTimeline.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/modloader.h>
#include <Randomizer/features/cutscene_skips/custom_cutscene_skips.h>


using namespace utils;
using namespace app::classes;

namespace {
    ObjectReference<app::MoonTimeline> kwolok_boss_farewell_timeline;
    auto& pools_wisp_state = core::uber_states::state<"lagoonStateGroup", "bossReward">();

    /**
     * This function replicates the behavior of
     * kwolokBossSetup/getPickupOnCondition.
     */
    void give_strength_if_not_given() {
        if (pools_wisp_state.get()) {
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

    void skip_invoke(const custom_cutscene_skips::CustomCutsceneSkip::InvokeParameters&) {
        Moon::Timeline::TimelineEntity::StopPlayback(reinterpret_cast<app::TimelineEntity*>(kwolok_boss_farewell_timeline.ptr));
        give_strength_if_not_given();
    }

    [[maybe_unused]]
    auto on_scene_load_handle = core::api::scenes::event_bus().on<core::api::scenes::events::SceneStateChanged>(
        "kwolokBossGetWisp",
        [](const auto& event) {
            if (event.state != app::SceneState__Enum::Loaded) {
                return;
            }

            const auto scene_root_go = il2cpp::unity::get_game_object(event.scene->fields.SceneRoot);
            const auto timeline_go = il2cpp::unity::find_child(
                scene_root_go,
                std::vector<std::string>{
                    "kwolokBossSetup",
                    "kwolokDeathTimeline" }
            );

            if (il2cpp::unity::is_valid(timeline_go)) {
                kwolok_boss_farewell_timeline.set_reference(il2cpp::unity::get_component<app::MoonTimeline>(timeline_go, types::MoonTimeline::get_class()));
            }
        }
    );

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().on<modloader::events::GameReady>([](auto) {
        auto cutscene_skip = custom_cutscene_skips::CustomCutsceneSkip{
            .is_available = &skip_available,
            .invoke = &skip_invoke,
        };

        custom_cutscene_skips::register_cutscene_skip(cutscene_skip);
    });
} // namespace

#include <Common/event_bus.h>
#include <Core/api/faderb.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/utils/misc.h>
#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/app/methods/Quest.h>
#include <Modloader/app/types/ShowQuestEntity.h>
#include <Modloader/app/types/TimelineEntity.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/modloader.h>
#include <Randomizer/features/cutscene_skips/custom_cutscene_skips.h>


using namespace utils;
using namespace app::classes;

namespace {
    ObjectReference<app::MoonTimeline> wellspring_so_soggy_timeline;
    ObjectReference<app::ShowQuestEntity> show_quest_entity;

    bool skip_available() {
        return core::api::scenes::scene_is_loaded("waterMillEntrance") &&
            wellspring_so_soggy_timeline.is_valid() &&
            Moon::Timeline::TimelineEntity::IsPlaying(reinterpret_cast<app::TimelineEntity*>(wellspring_so_soggy_timeline.ptr));
    }

    void skip_invoke(const custom_cutscene_skips::CustomCutsceneSkip::InvokeParameters&) {
        Moon::Timeline::TimelineEntity::StopPlayback(reinterpret_cast<app::TimelineEntity*>(wellspring_so_soggy_timeline.ptr));

        if (show_quest_entity.is_valid() && show_quest_entity.ptr->fields.CurrentState < app::ShowQuestEntity_State__Enum::Started) {
            auto uber_state = core::api::uber_states::UntypedUberState::from_native_ptr(Quest::get_UberState(show_quest_entity.ptr->fields.Quest));
            if (show_quest_entity.ptr->fields.IncrementAlreadyActiveQuest) {
                uber_state.set(uber_state.get<double>() + 1.0);
            } else {
                uber_state.set(1.0);
            }
        }

        core::api::game::player::set_position(-763.04f, -4071.325f, true);
        core::api::game::player::snap_camera();
        GameController::CreateCheckpoint(core::api::game::game_controller(), true, false);
        core::api::faderb::fade_to_game_visible(0.6f);
    }

    [[maybe_unused]]
    auto on_scene_load_handle = core::api::scenes::event_bus().on<core::api::scenes::events::SceneStateChanged>(
        "waterMillEntrance",
        [](const auto& event) {
            if (event.state != app::SceneState__Enum::Loaded) {
                return;
            }

            const auto scene_root_go = il2cpp::unity::get_game_object(event.scene->fields.SceneRoot);
            const auto timeline_go = il2cpp::unity::find_child(
                scene_root_go,
                std::vector<std::string>{
                    "timelines",
                    "timelineMillEnding" }
            );

            if (il2cpp::unity::is_valid(timeline_go)) {
                wellspring_so_soggy_timeline.set_reference(il2cpp::unity::get_component<app::MoonTimeline>(timeline_go, types::TimelineEntity::get_class()));
            }

            const auto show_quest_entity_go = il2cpp::unity::find_child(
                timeline_go,
                std::vector<std::string>{
                    "showQuest",
                }
            );

            if (il2cpp::unity::is_valid(show_quest_entity_go)) {
                show_quest_entity.set_reference(il2cpp::unity::get_component<app::ShowQuestEntity>(show_quest_entity_go, types::ShowQuestEntity::get_class()));
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

#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/app/types/MoonTimeline.h>
#include <Modloader/il2cpp_helpers.h>

#include "custom_cutscene_skips.h"
#include <Common/event_bus.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/utils/misc.h>
#include <Modloader/modloader.h>

using namespace utils;
using namespace app::classes;

namespace {
    enum DeferredSkipAction {
        Idle,
        TeleportAndSave,
    };

    DeferredSkipAction next_frame_action = Idle;
    ObjectReference<app::MoonTimeline> escape_end_timeline;
    ObjectReference<app::GameObject> escape_end_timeline_go;

    void on_scene_load(core::api::scenes::SceneLoadEventMetadata* metadata) {
        if (metadata->state != app::SceneState__Enum::Loaded) {
            return;
        }

        if (metadata->scene_name == "desertRuinsTowerEntranceA") {
            auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

            escape_end_timeline_go.set_reference(
                il2cpp::unity::find_child(
                    scene_root_go,
                    std::vector<std::string>{
                        "transitionSetup",
                        "escapeEndTrigger",
                        "escapeEndTimeline" }
                )
            );

            if (il2cpp::unity::is_valid(escape_end_timeline_go.ptr)) {
                escape_end_timeline.set_reference(il2cpp::unity::get_component<app::MoonTimeline>(escape_end_timeline_go.ptr, types::MoonTimeline::get_class()));
            }
        }
    }

    bool skip_available() {
        return core::api::scenes::scene_is_loaded("desertRuinsTowerEntranceA") &&
            escape_end_timeline.is_valid() &&
            Moon::Timeline::TimelineEntity::IsPlaying(reinterpret_cast<app::TimelineEntity*>(escape_end_timeline.ptr)) &&
            escape_end_timeline_go.is_valid();
    }

    void skip_invoke() {
        // Just nuke the damn thing, what could go wrong
        il2cpp::unity::destroy_object(escape_end_timeline_go.ptr);

        core::api::game::player::set_position(2055.673f, -3568.293);
        core::api::game::save(true, core::api::game::SaveOptions(false, false, true, true));

        next_frame_action = TeleportAndSave;
    }

    void on_fixed_update(GameEvent game_event, EventTiming timing) {
        switch (next_frame_action) {
            case Idle:
                break;
            case TeleportAndSave:
                il2cpp::unity::destroy_object(escape_end_timeline_go.ptr);

                core::api::uber_states::UberState ruins_wisp_state(static_cast<UberStateGroup>(10289), 22102);
                ruins_wisp_state.set(1.0);

                core::api::uber_states::UberState ruins_wisp_quest_state(static_cast<UberStateGroup>(14019), 35399);
                ruins_wisp_quest_state.set(3.0);

                core::api::game::player::set_position(2055.673f, -3568.293);
                core::api::game::save(true, core::api::game::SaveOptions(false, false, true, true));

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

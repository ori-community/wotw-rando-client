#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/il2cpp_helpers.h>

#include "custom_cutscene_skips.h"
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
    enum DeferredSkipAction {
        Idle,
        TeleportAndSave,
    };

    DeferredSkipAction next_frame_action = Idle;
    ObjectReference<app::MoonTimeline> escape_end_timeline;
    ObjectReference<app::GameObject> escape_end_timeline_go;

    void on_scene_load(scenes::SceneLoadEventMetadata* metadata, EventTiming timing) {
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
                escape_end_timeline.set_reference(il2cpp::unity::get_component<app::MoonTimeline>(escape_end_timeline_go.ptr, "Moon.Timeline", "MoonTimeline"));
            }
        }
    }

    bool skip_available() {
        return scenes::scene_is_loaded("desertRuinsTowerEntranceA") &&
                escape_end_timeline.is_valid() &&
                Moon::Timeline::TimelineEntity::IsPlaying(reinterpret_cast<app::TimelineEntity*>(escape_end_timeline.ptr)) &&
                escape_end_timeline_go.is_valid();
    }

    void skip_invoke() {
        // Just nuke the damn thing, what could go wrong
        il2cpp::unity::destroy_object(escape_end_timeline_go.ptr);

        game::player::set_position(2055.673f, -3568.293);
        game::save(true, game::SaveOptions(false, false, true, true));

        next_frame_action = TeleportAndSave;
    }

    void on_fixed_update(GameEvent game_event, EventTiming timing) {
        switch (next_frame_action) {
            case Idle:
                break;
            case TeleportAndSave:
                il2cpp::unity::destroy_object(escape_end_timeline_go.ptr);

                uber_states::UberState ruins_wisp_state(static_cast<UberStateGroup>(10289), 22102);
                ruins_wisp_state.set(1.0);

                uber_states::UberState ruins_wisp_quest_state(static_cast<UberStateGroup>(14019), 35399);
                ruins_wisp_quest_state.set(3.0);

                game::player::set_position(2055.673f, -3568.293);
                game::save(true, game::SaveOptions(false, false, true, true));

                next_frame_action = Idle;
                break;
        }
    }

    void initialize() {
        scenes::event_bus().register_handler(&on_scene_load);
        game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, &on_fixed_update);

        auto cutscene_skip = custom_cutscene_skips::CustomCutsceneSkip{
            .is_available = &skip_available,
            .invoke = &skip_invoke,
        };
        custom_cutscene_skips::register_cutscene_skip(cutscene_skip);
    }

    CALL_ON_INIT(initialize);
} // namespace

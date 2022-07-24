#include <Il2CppModLoader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Il2CppModLoader/app/methods/PerformBackOutAction.h>
#include <Il2CppModLoader/il2cpp_helpers.h>

#include "custom_cutscene_skips.h"
#include <Il2CppModLoader/common.h>
#include <enums/sound.h>
#include <event_bus.h>
#include <features/scenes/scene_load.h>
#include <game/game.h>
#include <game/player.h>
#include <sound.h>
#include <uber_states/uber_state_interface.h>
#include <utils/misc.h>

using namespace utils;
using namespace app::methods;

namespace {
    enum DeferredSkipAction {
        Idle,
        TeleportAndSave,
    };

    DeferredSkipAction next_frame_action = Idle;
    ObjectReference<app::MoonTimeline> escape_end_timeline;
    ObjectReference<app::GameObject> scene_root_go;

    void on_scene_load(scenes::SceneLoadEventMetadata* metadata, EventTiming timing) {
        if (metadata->state != app::SceneState__Enum::Loaded) {
            return;
        }

        if (metadata->scene_name == "matkasChamberBossPlaceholder__clone1") {
            scene_root_go.set_reference(il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot));

            auto timeline_go = il2cpp::unity::find_child(
                    scene_root_go.ptr,
                    std::vector<std::string>{
                            "timelines",
                            "spiderIntroTimeline" }
            );

            if (il2cpp::unity::is_valid(timeline_go)) {
                escape_end_timeline.set_reference(il2cpp::unity::get_component<app::MoonTimeline>(timeline_go, "Moon.Timeline", "MoonTimeline"));
            }
        }
    }

    bool skip_available() {
        return scenes::scene_is_loaded("matkasChamberBossPlaceholder__clone1") &&
                escape_end_timeline.is_valid() &&
                scene_root_go.is_valid() &&
                Moon::Timeline::TimelineEntity::IsPlaying(reinterpret_cast<app::TimelineEntity*>(escape_end_timeline.ptr));
    }

    void skip_invoke() {
        Moon::Timeline::TimelineEntity::StopPlayback(reinterpret_cast<app::TimelineEntity*>(escape_end_timeline.ptr));

        randomizer::sound::set_state(SoundStateGroupID::cordycepsMusic, SoundStateID::spiderBossPhase1);

        uber_states::UberState mora_boss_state(static_cast<UberStateGroup>(18793), 26713);
        mora_boss_state.set(2.0);

        next_frame_action = TeleportAndSave;
    }

    void on_fixed_update(GameEvent game_event, EventTiming timing) {
        switch (next_frame_action) {
            case Idle:
                break;
            case TeleportAndSave:
                PerformBackOutAction::ActivateAbandonChallange(nullptr);

                game::player::set_position(701.912f, -4481.552f);
                game::save(true, game::SaveOptions(false, false, false, true));

                next_frame_action = Idle;
                break;
        }
    }

    void initialize() {
        scenes::event_bus().register_handler(&on_scene_load);
        game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::End, &on_fixed_update);

        auto cutscene_skip = custom_cutscene_skips::CustomCutsceneSkip{
            .is_available = &skip_available,
            .invoke = &skip_invoke,
        };
        custom_cutscene_skips::register_cutscene_skip(cutscene_skip);
    }

    CALL_ON_INIT(initialize);
} // namespace

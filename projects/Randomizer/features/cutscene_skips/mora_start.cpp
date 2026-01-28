#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/app/methods/PerformBackOutAction.h>
#include <Modloader/app/types/MoonTimeline.h>
#include <Modloader/il2cpp_helpers.h>

#include "custom_cutscene_skips.h"
#include <Common/event_bus.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/api/audio.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/enums/audio.h>
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
    ObjectReference<app::GameObject> scene_root_go;

    void on_scene_load(core::api::scenes::SceneLoadEventMetadata* metadata) {
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
                escape_end_timeline.set_reference(il2cpp::unity::get_component<app::MoonTimeline>(timeline_go, types::MoonTimeline::get_class()));
            }
        }
    }

    bool skip_available() {
        return core::api::scenes::scene_is_loaded("matkasChamberBossPlaceholder__clone1") &&
            escape_end_timeline.is_valid() &&
            scene_root_go.is_valid() &&
            Moon::Timeline::TimelineEntity::IsPlaying(reinterpret_cast<app::TimelineEntity*>(escape_end_timeline.ptr));
    }

    void skip_invoke(const custom_cutscene_skips::CustomCutsceneSkip::InvokeParameters&) {
        Moon::Timeline::TimelineEntity::StopPlayback(reinterpret_cast<app::TimelineEntity*>(escape_end_timeline.ptr));

        core::api::uber_states::UberState mora_boss_state(static_cast<UberStateGroup>(18793), 26713);
        mora_boss_state.set(2.0);

        next_frame_action = TeleportAndSave;
    }

    void on_fixed_update(GameEvent game_event, EventTiming timing) {
        switch (next_frame_action) {
            case Idle:
                break;
            case TeleportAndSave:
                PerformBackOutAction::ActivateAbandonChallange(nullptr);

                core::api::game::player::set_position(701.912f, -4481.552f);
                core::api::game::save(true, core::api::game::SaveOptions{
                    .refill = true,
                    .refill_instantly = true,
                    .to_disk = false,
                    .restore_instantly = true
                });

                core::api::audio::set_state(SoundStateGroupID::cordycepsMusic, SoundStateID::None);
                core::api::audio::set_state(SoundStateGroupID::spiderBossState, SoundStateID::C_arena1Reached);

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

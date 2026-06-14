#include <Modloader/app/methods/CharacterSpriteMirror.h>
#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/app/methods/Moon/Timeline/MoonTimeline.h>
#include <Modloader/app/types/TimelineEntity.h>
#include <Modloader/il2cpp_helpers.h>

#include "custom_cutscene_skips.h"
#include <Common/event_bus.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/utils/misc.h>
#include <Modloader/modloader.h>

using namespace utils;
using namespace app::classes;

namespace {
    std::optional<il2cpp::WeakGCRef<app::MoonTimeline>> outro_timeline_ref;
    bool is_stopping_timeline = false;

    void on_scene_load(const core::api::scenes::SceneLoadEventMetadata* metadata, const std::string&) {
        if (metadata->state != app::SceneState__Enum::Loaded) {
            return;
        }

        auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

        auto timeline_go = il2cpp::unity::find_child(
            scene_root_go,
            std::vector<std::string>{
                "hornbugBossEncounter",
                "bossOutro",
                "bossOutroTimeline",
            }
        );

        if (il2cpp::unity::is_valid(timeline_go)) {
            outro_timeline_ref = il2cpp::WeakGCRef(il2cpp::unity::get_component<app::MoonTimeline>(timeline_go, types::TimelineEntity::get_class()));
        }
    }

    bool skip_available() {
        return outro_timeline_ref.and_then([](auto& ref) { return *ref;}).has_value() &&
            Moon::Timeline::TimelineEntity::IsPlaying(reinterpret_cast<app::TimelineEntity*>(***outro_timeline_ref));
    }

    void skip_invoke(const custom_cutscene_skips::CustomCutsceneSkip::InvokeParameters&) {
        modloader::ScopedSetter _(is_stopping_timeline, true);
        Moon::Timeline::MoonTimeline::set_CurrentTime(***outro_timeline_ref, Moon::Timeline::MoonTimeline::get_Duration(***outro_timeline_ref));
        Moon::Timeline::TimelineEntity::StopPlayback(reinterpret_cast<app::TimelineEntity*>(***outro_timeline_ref));
    }

    [[maybe_unused]]
    auto on_scene_load_handle = core::api::scenes::single_event_bus().register_handler("kwoloksCavernBossRoom", &on_scene_load);

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        auto cutscene_skip = custom_cutscene_skips::CustomCutsceneSkip{
            .is_available = &skip_available,
            .invoke = &skip_invoke,
        };
        custom_cutscene_skips::register_cutscene_skip(cutscene_skip);
    });
} // namespace

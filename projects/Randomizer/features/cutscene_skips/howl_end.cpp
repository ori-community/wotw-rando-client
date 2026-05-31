#include <Modloader/app/methods/CharacterSpriteMirror.h>
#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/app/methods/NightCrawlerFightController.h>
#include <Modloader/app/types/TimelineEntity.h>
#include <Modloader/app/types/NightCrawlerFightController.h>
#include <Modloader/il2cpp_helpers.h>

#include "custom_cutscene_skips.h"
#include <Common/event_bus.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/utils/misc.h>
#include <Modloader/modloader.h>

using namespace utils;
using namespace app::classes;

namespace {
    std::optional<il2cpp::WeakGCRef<app::MoonTimeline>> escape_timeline_ref;
    std::optional<il2cpp::WeakGCRef<app::NightCrawlerFightController>> fight_controller_ref;
    bool is_stopping_timeline = false;

    void on_scene_load(const core::api::scenes::SceneLoadEventMetadata* metadata, const std::string&) {
        if (metadata->state != app::SceneState__Enum::Loaded) {
            return;
        }

        auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

        auto fight_controller_go = il2cpp::unity::find_child(
            scene_root_go,
            std::vector<std::string>{
                "artSetups",
                "#night",
                "nightcrawlerChase",
                "fightController",
            }
        );

        auto timeline_go = il2cpp::unity::find_child(
            fight_controller_go,
            std::vector<std::string>{
                "timelines",
                "escape",
            }
        );

        if (il2cpp::unity::is_valid(fight_controller_go)) {
            fight_controller_ref = il2cpp::WeakGCRef(il2cpp::unity::get_component<app::NightCrawlerFightController>(fight_controller_go, types::NightCrawlerFightController::get_class()));
        }

        if (il2cpp::unity::is_valid(timeline_go)) {
            escape_timeline_ref = il2cpp::WeakGCRef(il2cpp::unity::get_component<app::MoonTimeline>(timeline_go, types::TimelineEntity::get_class()));
        }
    }

    bool skip_available() {
        return escape_timeline_ref.and_then([](auto& ref) { return *ref;}).has_value() &&
            fight_controller_ref.and_then([](auto& ref) { return *ref;}).has_value() &&
            Moon::Timeline::TimelineEntity::IsPlaying(reinterpret_cast<app::TimelineEntity*>(***escape_timeline_ref));
    }

    void skip_invoke(const custom_cutscene_skips::CustomCutsceneSkip::InvokeParameters&) {
        modloader::ScopedSetter _(is_stopping_timeline, true);
        Moon::Timeline::TimelineEntity::StopPlayback(reinterpret_cast<app::TimelineEntity*>(***escape_timeline_ref));

        if (!(***fight_controller_ref)->fields.m_escaped) {
            NightCrawlerFightController::EscapeFinished(***fight_controller_ref);
        }
    }

    [[maybe_unused]]
    auto on_scene_load_handle = core::api::scenes::single_event_bus().register_handler("swampNightcrawlerA", &on_scene_load);

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        auto cutscene_skip = custom_cutscene_skips::CustomCutsceneSkip{
            .is_available = &skip_available,
            .invoke = &skip_invoke,
        };
        custom_cutscene_skips::register_cutscene_skip(cutscene_skip);
    });
} // namespace

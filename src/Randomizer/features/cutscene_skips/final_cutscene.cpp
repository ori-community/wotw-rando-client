#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/app/types/MoonTimeline.h>
#include <Modloader/il2cpp_helpers.h>

#include <Common/event_bus.h>
#include <Core/api/faderb.h>
#include <Core/api/game/game.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/utils/misc.h>
#include <Modloader/modloader.h>
#include <Randomizer/features/credits.h>
#include <Randomizer/features/cutscene_skips/custom_cutscene_skips.h>

using namespace utils;
using namespace app::classes;

namespace {
    enum DeferredSkipAction {
        Idle,
        StartCredits,
    };

    ObjectReference<app::MoonTimeline> shriek_death_reaction_timeline;
    ObjectReference<app::MoonTimeline> epilogue_master_timeline;
    DeferredSkipAction next_frame_action = Idle;

    bool is_timeline_valid_and_playing(const std::string& scene_name, ObjectReference<app::MoonTimeline> timeline) {
        return core::api::scenes::scene_is_loaded(scene_name) &&
            timeline.is_valid() &&
            Moon::Timeline::TimelineEntity::IsPlaying(reinterpret_cast<app::TimelineEntity*>(timeline.ptr));
    }

    bool skip_available() {
        const auto epilogue_master_timeline_playing = is_timeline_valid_and_playing("epilogueMaster", epilogue_master_timeline);

        return epilogue_master_timeline_playing &&
            core::api::scenes::scene_state("creditsScreen") != app::SceneState__Enum::Enabled;
    }

    void skip_invoke(const custom_cutscene_skips::CustomCutsceneSkip::InvokeParameters&) {
        if (is_timeline_valid_and_playing("epilogueMaster", epilogue_master_timeline)) {
            Moon::Timeline::TimelineEntity::StopPlayback(reinterpret_cast<app::TimelineEntity*>(epilogue_master_timeline.ptr));
        }

        core::api::faderb::fade_to_game_visible(0.6f);

        next_frame_action = StartCredits;
    }

    [[maybe_unused]]
    auto on_willow_background_loaded = core::api::scenes::event_bus().on<core::api::scenes::events::SceneStateChanged>("willowPowlBackground", [](auto event) {
        if (event.state != app::SceneState__Enum::Loaded) {
            return;
        }

        const auto scene_root_go = il2cpp::unity::get_game_object(event.scene->fields.SceneRoot);

        const auto death_reaction_timeline_go = il2cpp::unity::find_child(
            scene_root_go,
            std::vector<std::string>{
                "petrifiedOwlBossSetup",
                "petrifiedOwlBossEntity",
                "timelines",
                "reactions",
                "deathReaction" }
        );

        if (il2cpp::unity::is_valid(death_reaction_timeline_go)) {
            shriek_death_reaction_timeline.set_reference(il2cpp::unity::get_component<app::MoonTimeline>(death_reaction_timeline_go, types::MoonTimeline::get_class()));
        }
    });


    [[maybe_unused]]
    auto on_epilogue_loaded = core::api::scenes::event_bus().on<core::api::scenes::events::SceneStateChanged>("epilogueMaster", [](auto event) {
        if (event.state != app::SceneState__Enum::Loaded) {
            return;
        }

        const auto scene_root_go = il2cpp::unity::get_game_object(event.scene->fields.SceneRoot);

        const auto epilogue_master_timeline_go = il2cpp::unity::find_child(
            scene_root_go,
            std::vector<std::string>{
                "masterTimeline" }
        );

        if (il2cpp::unity::is_valid(epilogue_master_timeline_go)) {
            epilogue_master_timeline.set_reference(il2cpp::unity::get_component<app::MoonTimeline>(epilogue_master_timeline_go, types::MoonTimeline::get_class()));
        }
    });

    [[maybe_unused]]
    auto on_fixed_update = core::api::game::event_bus().on<core::api::game::events::FixedUpdate>([](auto) {
        switch (next_frame_action) {
            case Idle:
                break;
            case StartCredits:
                randomizer::features::credits::start();
                next_frame_action = Idle;
                break;
        }
    });

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().on<modloader::events::GameReady>([](auto) {
        const auto cutscene_skip = custom_cutscene_skips::CustomCutsceneSkip{
            .is_available = &skip_available,
            .invoke = &skip_invoke,
            .get_metadata = [] -> std::optional<custom_cutscene_skips::CustomCutsceneSkip::Metadata> {
                return custom_cutscene_skips::CustomCutsceneSkip::Metadata{.never_skip_automatically = true};
            }
        };
        custom_cutscene_skips::register_cutscene_skip(cutscene_skip);
    });
} // namespace

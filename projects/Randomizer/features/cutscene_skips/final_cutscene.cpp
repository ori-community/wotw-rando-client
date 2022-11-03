#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/il2cpp_helpers.h>

#include "custom_cutscene_skips.h"
#include <Modloader/common.h>
#include <Core/enums/game_event.h>
#include <Core/utils/event_bus.h>
#include <features/credits.h>
#include <Core/api/faderb.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/api/game/game.h>
#include <Core/utils/misc.h>

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

    void on_scene_load(scenes::SceneLoadEventMetadata* metadata, EventTiming timing) {
        if (metadata->state != app::SceneState__Enum::Loaded) {
            return;
        }

        if (metadata->scene_name == "willowPowlBackground") {
            auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

            auto death_reaction_timeline_go = il2cpp::unity::find_child(
                    scene_root_go,
                    std::vector<std::string>{
                            "petrifiedOwlBossSetup",
                            "petrifiedOwlBossEntity",
                            "timelines",
                            "reactions",
                            "deathReaction" }
            );

            if (il2cpp::unity::is_valid(death_reaction_timeline_go)) {
                shriek_death_reaction_timeline.set_reference(il2cpp::unity::get_component<app::MoonTimeline>(death_reaction_timeline_go, "Moon.Timeline", "MoonTimeline"));
            }

        } else if (metadata->scene_name == "epilogueMaster") {
            auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

            auto epilogue_master_timeline_go = il2cpp::unity::find_child(
                    scene_root_go,
                    std::vector<std::string>{
                            "masterTimeline" }
            );

            if (il2cpp::unity::is_valid(epilogue_master_timeline_go)) {
                epilogue_master_timeline.set_reference(il2cpp::unity::get_component<app::MoonTimeline>(epilogue_master_timeline_go, "Moon.Timeline", "MoonTimeline"));
            }
        }
    }

    bool is_timeline_valid_and_playing(const std::string& scene_name, ObjectReference<app::MoonTimeline> timeline) {
        return
                scenes::scene_is_loaded(scene_name) &&
                timeline.is_valid() &&
                Moon::Timeline::TimelineEntity::IsPlaying(reinterpret_cast<app::TimelineEntity*>(timeline.ptr));
    }

    bool skip_available() {
        // auto shriek_death_reaction_timeline_playing = is_timeline_valid_and_playing("willowPowlBackground", shriek_death_reaction_timeline);
        auto epilogue_master_timeline_playing = is_timeline_valid_and_playing("epilogueMaster", epilogue_master_timeline);

        return epilogue_master_timeline_playing &&
                scenes::scene_state("creditsScreen") != app::SceneState__Enum::Enabled;
    }

    void skip_invoke() {
        // if (is_timeline_valid_and_playing("willowPowlBackground", shriek_death_reaction_timeline)) {
        //     Moon::Timeline::TimelineEntity::PausePlayback(reinterpret_cast<app::TimelineEntity*>(shriek_death_reaction_timeline.ptr));
        // }

        if (is_timeline_valid_and_playing("epilogueMaster", epilogue_master_timeline)) {
            Moon::Timeline::TimelineEntity::StopPlayback(reinterpret_cast<app::TimelineEntity*>(epilogue_master_timeline.ptr));
        }

        faderb::fade_out(0.6f);

        next_frame_action = StartCredits;
    }

    void on_fixed_update(GameEvent game_event, EventTiming timing) {
        switch (next_frame_action) {
            case Idle:
                break;
            case StartCredits:
                credits::start();
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

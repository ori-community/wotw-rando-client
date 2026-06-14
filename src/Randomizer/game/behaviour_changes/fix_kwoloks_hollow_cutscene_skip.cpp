#include <optional>

#include <Core/api/scenes/scene_load.h>
#include <Modloader/app/methods/QuestsController.h>
#include <Modloader/app/methods/SkipCutscene.h>
#include <Modloader/app/methods/Moon/Timeline/MoonTimeline.h>
#include <Modloader/app/types/QuestsController.h>
#include <Modloader/app/types/SkipCutscene.h>
#include <Modloader/app/types/MoonTimeline.h>
#include <Modloader/modloader.h>

#include "Core/api/game/player.h"

using namespace app::classes;

namespace {
    std::optional<il2cpp::WeakGCRef<app::SkipCutscene>> skip_cutscene;
    std::optional<il2cpp::WeakGCRef<app::MoonTimeline>> emerge_cutscene_b_timeline;

    void on_meeting_kwolok_scene_load(const core::api::scenes::SceneLoadEventMetadata* metadata, const std::string&) {
        if (metadata->state != app::SceneState__Enum::Loaded) {
            return;
        }

        auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

        auto skip_cutscene_go = il2cpp::unity::find_child(
            scene_root_go,
            std::vector<std::string>{
                "skipCutscene",
            }
        );

        if (il2cpp::unity::is_valid(skip_cutscene_go)) {
            skip_cutscene = il2cpp::WeakGCRef(il2cpp::unity::get_component<app::SkipCutscene>(skip_cutscene_go, types::SkipCutscene::get_class()));
        }
    }

    void on_kwoloks_cavern_throne_room_scene_load(const core::api::scenes::SceneLoadEventMetadata* metadata, const std::string&) {
        if (metadata->state != app::SceneState__Enum::Loaded) {
            return;
        }

        auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

        auto get_pickup_on_condition_go = il2cpp::unity::find_child(
            scene_root_go,
            std::vector<std::string>{
                "kwolokSetup",
                "getPickupOnCondition",
            }
        );

        if (il2cpp::unity::is_valid(get_pickup_on_condition_go)) {
            il2cpp::unity::destroy_object(get_pickup_on_condition_go);
        }

        auto emerge_cutscene_b_timeline_go = il2cpp::unity::find_child(
            scene_root_go,
            std::vector<std::string>{
                "timelineSequences",
                "emergeCutsceneB",
            }
        );

        if (il2cpp::unity::is_valid(emerge_cutscene_b_timeline_go)) {
            emerge_cutscene_b_timeline = il2cpp::WeakGCRef(il2cpp::unity::get_component<app::MoonTimeline>(emerge_cutscene_b_timeline_go, types::MoonTimeline::get_class()));
        }
    }

    /**
     * This function replicates the behavior of
     * kwoloksCavernThroneRoom/kwolokSetup/getPickupOnCondition without
     * the condition that kwolokGroupDescriptor.cleanseWellspringQuestUberState needs to be 1
     * to give the pickup.
     */
    void give_voice_if_not_given() {
        core::api::uber_states::UberState forests_voice_state(46462, 59806);

        if (forests_voice_state.get<bool>()) {
            return;
        }

        core::api::game::player::max_energy().add(1.f);
        core::api::game::player::max_health().add(10.f);
        core::api::game::player::refill_energy();
        core::api::game::player::refill_health();
        forests_voice_state.set(true);
    }

    // Give Voice of the Forest when skipping the cutscene.
    // Also make sure the quests are being advanced.
    IL2CPP_INTERCEPT(void, SkipCutscene, OnSkip, app::SkipCutscene* this_ptr) {
        next::SkipCutscene::OnSkip(this_ptr);

        if (skip_cutscene.has_value()) {
            if (!skip_cutscene->is_valid()) {
                skip_cutscene = std::nullopt;
                return;
            }

            if (this_ptr != **skip_cutscene) {
                return;
            }

            const auto quests_controller = types::QuestsController::get_class()->static_fields->Instance;
            const auto kwolok_quest = QuestsController::GetQuestByName(quests_controller, il2cpp::string_new("findToadQuest"));
            const auto wellspring_quest = QuestsController::GetQuestByName(quests_controller, il2cpp::string_new("aInvestigateWellspring"));

            QuestsController::CompleteQuest(quests_controller, kwolok_quest);
            QuestsController::AssignQuest(quests_controller, wellspring_quest, true, false, true);
            give_voice_if_not_given();
        }
    }

    // Give Voice of the Forest when watching the full cutscene
    IL2CPP_INTERCEPT(void, Moon::Timeline::MoonTimeline, OnStopPlayback, app::MoonTimeline* this_ptr) {
        next::Moon::Timeline::MoonTimeline::OnStopPlayback(this_ptr);

        if (emerge_cutscene_b_timeline.has_value() && emerge_cutscene_b_timeline->is_valid() && **emerge_cutscene_b_timeline == this_ptr) {
            give_voice_if_not_given();
        }
    }

    [[maybe_unused]]
    auto on_meeting_kwolok_scene_load_handle = core::api::scenes::single_event_bus().register_handler("meetingKwolokMaster", on_meeting_kwolok_scene_load);

    [[maybe_unused]]
    auto on_kwoloks_cavern_throne_room_scene_load_handle = core::api::scenes::single_event_bus().register_handler("kwoloksCavernThroneRoom", on_kwoloks_cavern_throne_room_scene_load);
} // namespace

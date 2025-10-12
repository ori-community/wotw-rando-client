#include <iostream>
#include <optional>

#include <Core/api/scenes/scene_load.h>
#include <Modloader/app/methods/QuestsController.h>
#include <Modloader/app/methods/SkipCutscene.h>
#include <Modloader/app/types/QuestsController.h>
#include <Modloader/app/types/SkipCutscene.h>
#include <Modloader/modloader.h>

using namespace app::classes;

namespace {
    std::optional<il2cpp::WeakGCRef<app::SkipCutscene>> skip_cutscene;

    void on_scene_load(const core::api::scenes::SceneLoadEventMetadata* metadata, const std::string&) {
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
        }
    }

    [[maybe_unused]]
    auto on_meeting_kwolok_scene_load = core::api::scenes::single_event_bus().register_handler("meetingKwolokMaster", on_scene_load);
} // namespace

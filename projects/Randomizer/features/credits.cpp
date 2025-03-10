#include <Randomizer/messages/credits_controller.h>

#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>

#include <Modloader/app/methods/CreditsController.h>
#include <Modloader/app/methods/Game/UI.h>
#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/methods/GoToSceneController.h>
#include <Modloader/app/methods/ScenesManager.h>
#include <Modloader/app/methods/Moon/Timeline/MoonTimeline.h>
#include <Modloader/app/types/CreditsController.h>
#include <Modloader/app/types/TimelineEntity.h>
#include <Modloader/app/types/GoToSceneController.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

#include <format>
#include <string>
#include <Core/mood_guid.h>
#include <Core/events/task.h>

using namespace app::classes;

namespace randomizer::features::credits {
    namespace {
        constexpr float MOVE_DOWN_DISTANCE = 3.6f;
        constexpr char CREDITS_PATH_FMT[] = "{}\\credits";
        randomizer::messages::CreditsController credits;
        auto requested_credits_immediately = false;

        void on_scene_load(core::api::scenes::SceneLoadEventMetadata* metadata) {
            if (metadata->state != app::SceneState__Enum::Loaded || metadata->scene_name != "creditsScreen") {
                return;
            }

            credits.load(std::format(CREDITS_PATH_FMT, modloader::base_path().string()));
            credits.reset();

            const auto credits_go = il2cpp::unity::find_child(metadata->scene->fields.SceneRoot, "credits");
            const auto credits_text_go = il2cpp::unity::find_child(credits_go, std::vector<std::string>{ "defaultCredits", "credits", "creditsTexts" });
            const auto children = il2cpp::unity::get_children(credits_text_go);

            bool found_first_icon = false;

            for (const auto& child_go : children | std::ranges::views::reverse) {
                auto child_name = il2cpp::unity::get_object_name(child_go);
                if (child_name == "Logo" || child_name == "LogoChineese" || child_name == "creditsThanks") {
                    continue;
                } else if (child_name == "creditsIcon" && !found_first_icon) {
                    found_first_icon = true;
                    continue;
                }
                auto child_position = il2cpp::unity::get_local_position(child_go);
                child_position.y -= 3.f;
                il2cpp::unity::set_local_position(child_go, child_position);
            }

            if (!requested_credits_immediately) {
                return;
            }

            requested_credits_immediately = false;
            auto cred_cont = il2cpp::unity::get_component<app::CreditsController>(credits_go, types::CreditsController::get_class());
            auto timeline = cred_cont->fields.CreditsTimeline;
            il2cpp::invoke_virtual(timeline, reinterpret_cast<Il2CppClass*>(types::TimelineEntity::get_class()), "StartPlayback");
        }

        float time = 0.0f;
        IL2CPP_INTERCEPT(GameController, void, FixedUpdate, (app::GameController * this_ptr)) {
            next::GameController::FixedUpdate(this_ptr);
            const auto credits_controller = types::CreditsController::get_class()
                                 ->static_fields->Instance;
            if (credits_controller != nullptr && CreditsController::IsCreditsTimelinePlaying(credits_controller)) {
                if (!Game::UI::get_MainMenuVisible()) {
                    time = Moon::Timeline::MoonTimeline::get_CurrentTime(credits_controller->fields.CreditsTimeline);
                    credits.update(time);
                }
            } else if (time > 0.01f) {
                time = 0.0f;
                credits.reset();
                credits.unload();
            }
        }

        [[maybe_unused]]
        auto on_scene_load_handle = core::api::scenes::event_bus().register_handler(&on_scene_load);
    } // namespace

    void start() {
        requested_credits_immediately = true;
        GoToSceneController::GoToSceneImmediately_3(
            types::GoToSceneController::get_class()->static_fields->Instance,
            ScenesManager::GetSceneInformation(core::api::scenes::get_scenes_manager(), il2cpp::string_new("creditsScreen")),
            nullptr
        );
    }
} // namespace credits

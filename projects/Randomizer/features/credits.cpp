#include <Core/api/scenes/scene_load.h>
#include <interop/csharp_bridge.h>

#include <Modloader/app/methods/CreditsController.h>
#include <Modloader/app/methods/Game/UI.h>
#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/methods/Moon/Timeline/MoonTimeline.h>
#include <Modloader/app/types/CreditsController.h>
#include <Modloader/app/types/TimelineEntity.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/windows_api/console.h>

#include <Core/api/game/player.h>
#include <string>

using namespace app::classes;

namespace credits {
    namespace {
        void credits_scene_loaded_callback(std::string_view scene_name, app::SceneState__Enum state, app::GameObject* scene_root) {
            if (state == app::SceneState__Enum::Loaded && scene_root != nullptr) {
                auto credits_go = il2cpp::unity::find_child(scene_root, "credits");
                auto cred_cont = il2cpp::unity::get_component<app::CreditsController>(credits_go, types::CreditsController::get_class());
                auto timeline = cred_cont->fields.CreditsTimeline;
                il2cpp::invoke_virtual(timeline, reinterpret_cast<Il2CppClass*>(types::TimelineEntity::get_class()), "StartPlayback");

                auto credits_text_go = il2cpp::unity::find_child(credits_go, std::vector<std::string>{ "defaultCredits", "credits", "creditsTexts" });
                auto children = il2cpp::unity::get_children(credits_text_go);

                // reverse to get the last creditsIcon
                std::reverse(children.begin(), children.end());
                bool post_first_icon = false;

                for (auto child_go : children) {
                    auto child_name = il2cpp::unity::get_object_name(child_go);
                    if (child_name == "Logo" || child_name == "LogoChineese" || child_name == "creditsThanks") {
                        continue;
                    } else if (child_name == "creditsIcon" && !post_first_icon) {
                        post_first_icon = true;
                        continue;
                    }
                    auto child_position = il2cpp::unity::get_local_position(child_go);
                    child_position.y -= 1.0f;
                    il2cpp::unity::set_local_position(child_go, child_position);
                }
            }
        }

        void ending_scene_loaded_callback(std::string_view scene_name, app::SceneState__Enum state, app::GameObject* scene_root) {
            if (state == app::SceneState__Enum::Loaded && scene_root != nullptr) {
                auto master_timeline_go = il2cpp::unity::find_child(scene_root, "master2.0");
                il2cpp::unity::destroy_object(master_timeline_go);

                game::player::set_position(0.f, 0.f);
                scenes::force_load_scene("creditsScreen", &credits_scene_loaded_callback, false, false);
            }
        }

        RANDOMIZER_C_DLLEXPORT void start_credits() {
            scenes::force_load_scene("actOneEndingMaster", &ending_scene_loaded_callback, false, false);
        }

        float time = 0.0f;
        IL2CPP_INTERCEPT(GameController, void, FixedUpdate, (app::GameController * this_ptr)) {
            next::GameController::FixedUpdate(this_ptr);
            auto cred_cont = types::CreditsController::get_class()
                                     ->static_fields->Instance;
            if (cred_cont != nullptr && CreditsController::IsCreditsTimelinePlaying(cred_cont)) {
                if (!Game::UI::get_MainMenuVisible()) {
                    time = Moon::Timeline::MoonTimeline::get_CurrentTime(cred_cont->fields.CreditsTimeline);
                    csharp_bridge::credits_progress(time);
                }
            } else if (time > 0.01f) {
                time = 0.0f;
                csharp_bridge::credits_progress(-1.0f);
            }
        }
    } // namespace

    void start() {
        start_credits();
    }
} // namespace credits

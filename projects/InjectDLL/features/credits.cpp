#include <features/scenes/scene_load.h>
#include <interop/csharp_bridge.h>

#include <Il2CppModLoader/app/methods/CreditsController.h>
#include <Il2CppModLoader/app/methods/Game/UI.h>
#include <Il2CppModLoader/app/methods/GameController.h>
#include <Il2CppModLoader/app/methods/Moon/Timeline/MoonTimeline.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/windows_api/console.h>

#include <game/player.h>
#include <string>

using namespace app::methods;

namespace credits {
    namespace {
        void credits_scene_loaded_callback(std::string_view scene_name, app::SceneState__Enum state, app::GameObject* scene_root) {
            if (state == app::SceneState__Enum::Loaded && scene_root != nullptr) {
                auto credits_go = il2cpp::unity::find_child(scene_root, "credits");
                auto cred_cont = il2cpp::unity::get_component<app::CreditsController>(credits_go, "", "CreditsController");
                auto timeline = cred_cont->fields.CreditsTimeline;
                il2cpp::invoke_virtual(timeline, il2cpp::get_class("Moon.Timeline", "TimelineEntity"), "StartPlayback");
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

        INJECT_C_DLLEXPORT void start_credits() {
            scenes::force_load_scene("actOneEndingMaster", &ending_scene_loaded_callback, false, false);
        }

        float time = 0.0f;
        IL2CPP_INTERCEPT(GameController, void, FixedUpdate, (app::GameController * this_ptr)) {
            next::GameController::FixedUpdate(this_ptr);
            auto cred_cont = il2cpp::get_class<app::CreditsController__Class>("", "CreditsController")
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

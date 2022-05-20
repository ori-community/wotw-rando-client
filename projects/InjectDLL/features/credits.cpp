#include <features/scenes/scene_load.h>
#include <interop/csharp_bridge.h>

#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/il2cpp_helpers.h>

#include <string>

namespace {
    void credits_scene_loaded_callback(std::string_view scene_name, app::GameObject* scene_root)
    {
        auto credits_go = il2cpp::unity::find_child(scene_root, "credits");
        auto cred_cont = il2cpp::unity::get_component<app::CreditsController>(credits_go, "", "CreditsController");
        auto timeline = cred_cont->fields.CreditsTimeline;
        il2cpp::invoke_virtual(timeline, il2cpp::get_class("Moon.Timeline", "TimelineEntity"), "StartPlayback");
        teleport(-3537, -5881, true);
    }

    INJECT_C_DLLEXPORT void start_credits() {
        scenes::force_load_scene("creditsScreen", &credits_scene_loaded_callback);
    }

    float time = 0.0f;
    STATIC_IL2CPP_BINDING(Game, UI, bool, get_MainMenuVisible, ());
    STATIC_IL2CPP_BINDING(, TimeUtility, float, get_fixedDeltaTime, ());
    IL2CPP_BINDING(, CreditsController, bool, IsCreditsTimelinePlaying, (app::CreditsController* this_ptr));
    IL2CPP_INTERCEPT(, GameController, void, FixedUpdate, (app::GameController* this_ptr)) {
        GameController::FixedUpdate(this_ptr);
        auto cred_cont = il2cpp::get_class<app::CreditsController__Class>("", "CreditsController")->static_fields->Instance;
        if (cred_cont != nullptr && CreditsController::IsCreditsTimelinePlaying(cred_cont))
        {
            if (!UI::get_MainMenuVisible())
            {
                time += TimeUtility::get_fixedDeltaTime();
                csharp_bridge::credits_progress(time);
            }
        }
        else if (time > 0.01f)
        {
            time = 0.0f;
            csharp_bridge::credits_progress(-1.0f);
        }
    }
}

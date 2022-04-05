#include <features/scenes/scene_load.h>
#include <csharp_bridge.h>

#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/il2cpp_helpers.h>

#include <string>

namespace {
    void credits_callback(std::string_view scene_name, int id, app::GameObject* scene_root)
    {
        auto cred_cont = il2cpp::get_class<app::CreditsController__Class>("", "CreditsController")->static_fields->Instance;
        auto timeline = cred_cont->fields.CreditsTimeline;
        il2cpp::invoke_virtual(timeline, il2cpp::get_class("Moon.Timeline", "TimelineEntity"), "StartPlayback");
    }

    INJECT_C_DLLEXPORT void start_credits() {
        teleport(-3537, -5881, true); // actual magic coordinates found by cosmic
        scenes::force_load_area("creditsScreen", 0, &credits_callback);
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

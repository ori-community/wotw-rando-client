#include <Core/api/faderb.h>
#include <Core/api/game/game.h>
#include <Core/enums/game_event.h>

#include <Modloader/app/methods/FaderB.h>
#include <Modloader/app/types/UI.h>
#include <Modloader/app/types/UI_Cameras.h>
#include <Modloader/interception_macros.h>
#include <Modloader/windows_api/console.h>

using namespace app::classes;

namespace core::api::faderb {
    constexpr auto DEBUG_DISABLE_FADERB = false;
    auto skip_black_screen_cleanup = false;

    app::FaderB* get() {
        static auto cache = types::UI::get_class()->static_fields->Fader;
        return cache;
    }

    void fade_to_game_invisible(const float duration) {
        FaderB::FadeIn_2(get(), duration);
    }

    void fade_to_game_visible(const float duration) {
        FaderB::FadeOut_2(get(), duration);
    }

    void set_black_screen_instantly() {
        FaderB::DoFade(get(), app::FaderB_State__Enum::FadeStay, 0.f, INFINITY, 0.f);
    }

    void set_skip_black_screen_cleanup(bool skip) {
        skip_black_screen_cleanup = skip;
    }

    IL2CPP_INTERCEPT(void, FaderB, DoBlackScreenCleanup, app::FaderB * this_ptr) {
        if (skip_black_screen_cleanup) {
            return;
        }

        next::FaderB::DoBlackScreenCleanup(this_ptr);
    }

    IL2CPP_INTERCEPT(void, FaderB, OnFadeInFinished, app::FaderB * this_ptr) {
        game::event_bus().trigger_event(GameEvent::FaderBFadeInFinished, EventTiming::Before);
        next::FaderB::OnFadeInFinished(this_ptr);
        game::event_bus().trigger_event(GameEvent::FaderBFadeInFinished, EventTiming::After);
    }

    IL2CPP_INTERCEPT(void, FaderB, OnFadeOutFinished, app::FaderB * this_ptr) {
        game::event_bus().trigger_event(GameEvent::FaderBFadeOutFinished, EventTiming::Before);
        next::FaderB::OnFadeOutFinished(this_ptr);
        game::event_bus().trigger_event(GameEvent::FaderBFadeOutFinished, EventTiming::After);
    }

    IL2CPP_INTERCEPT(void, FaderB, SetOpacity, app::FaderB * this_ptr, float opacity) {
        next::FaderB::SetOpacity(this_ptr, opacity);

        if (DEBUG_DISABLE_FADERB) {
            types::UI_Cameras::get_class()->static_fields->Current->fields.Controller->fields.CameraPostProcessing->fields.UberPostProcess->fields.FaderBrightnessContrastSettings->fields.Weight = 0.f;
        }
    }
} // namespace core::api::faderb

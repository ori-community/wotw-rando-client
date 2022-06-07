#include <game/game.h>

#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/app/methods/AreaMapUI.h>

namespace {
    IL2CPP_INTERCEPT(AreaMapUI, void, Show, (app::AreaMapUI * this_ptr, bool set_menu_audio_state)) {
        next::AreaMapUI::Show(this_ptr, set_menu_audio_state);
        game::event_bus().trigger_event(GameEvent::AreaMap, EventTiming::Start);
    }

    IL2CPP_INTERCEPT(AreaMapUI, void, Hide, (app::AreaMapUI * this_ptr)) {
        next::AreaMapUI::Hide(this_ptr);
        game::event_bus().trigger_event(GameEvent::AreaMap, EventTiming::End);
    }
} // namespace
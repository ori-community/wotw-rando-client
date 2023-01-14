#include <Core/api/game/game.h>

#include <Modloader/app/methods/AreaMapUI.h>
#include <Modloader/interception_macros.h>

namespace {
    IL2CPP_INTERCEPT(AreaMapUI, void, Show, (app::AreaMapUI * this_ptr, bool set_menu_audio_state)) {
        next::AreaMapUI::Show(this_ptr, set_menu_audio_state);
        core::api::game::event_bus().trigger_event(GameEvent::OpenAreaMap, EventTiming::After);
    }

    IL2CPP_INTERCEPT(AreaMapUI, void, Hide, (app::AreaMapUI * this_ptr)) {
        next::AreaMapUI::Hide(this_ptr);
        core::api::game::event_bus().trigger_event(GameEvent::CloseAreaMap, EventTiming::After);
    }
} // namespace
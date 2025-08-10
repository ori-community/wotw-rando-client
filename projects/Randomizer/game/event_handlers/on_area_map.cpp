#include <Core/api/game/game.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/enums/game_areas.h>

#include <Modloader/app/methods/AreaMapNavigation.h>
#include <Modloader/app/methods/AreaMapUI.h>
#include <Modloader/app/methods/GameMapUI.h>
#include <Modloader/interception_macros.h>

namespace {
    core::api::uber_states::UberState current_map_area(UberStateGroup::Player, 51);

    IL2CPP_INTERCEPT_WITH_ORDER(100, void, AreaMapUI, Show, app::AreaMapUI * this_ptr, bool set_menu_audio_state) {
        core::api::game::event_bus().trigger_event(GameEvent::OpenAreaMap, EventTiming::Before);
        next::AreaMapUI::Show(this_ptr, set_menu_audio_state);
        // Maybe we need this?
        // auto area = GameMapUI::get_CurrentHighlightedArea(this_ptr);
        core::api::game::event_bus().trigger_event(GameEvent::OpenAreaMap, EventTiming::After);
    }

    IL2CPP_INTERCEPT(void, AreaMapUI, Hide, app::AreaMapUI * this_ptr) {
        core::api::game::event_bus().trigger_event(GameEvent::CloseAreaMap, EventTiming::Before);
        next::AreaMapUI::Hide(this_ptr);
        current_map_area.set(static_cast<int>(GameArea::TOTAL));
        core::api::game::event_bus().trigger_event(GameEvent::CloseAreaMap, EventTiming::After);
    }

    IL2CPP_INTERCEPT(void, GameMapUI, SetCurrentHighlightedArea, app::GameMapUI * this_ptr, app::RuntimeGameWorldArea* area) {
        next::GameMapUI::SetCurrentHighlightedArea(this_ptr, area);
        const auto highlighted_area = this_ptr->fields.m_currentHighlightedArea;
        if (highlighted_area != nullptr) {
            const auto world_map_area_id = highlighted_area->fields.Area->fields.WorldMapAreaUniqueID;
            current_map_area.set(static_cast<int>(convert_to_game_area(world_map_area_id)));
        } else if (this_ptr->fields.m_isVisible) {
            current_map_area.set(static_cast<int>(GameArea::Void));
        } else {
            current_map_area.set(static_cast<int>(GameArea::TOTAL));
        }
    }
} // namespace

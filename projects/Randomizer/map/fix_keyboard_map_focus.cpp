#include <Core/api/game/game.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/settings.h>
#include <Core/text/text_database.h>
#include <Modloader/app/methods/GameMapUI.h>
#include <Modloader/app/methods/AreaMapNavigation.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/il2cpp_math.h>
#include <Randomizer/randomizer.h>
#include <Core/api/input.h>


namespace {
    using namespace app::classes;

    auto force_focus_location_to_center_once = false;

    IL2CPP_INTERCEPT(app::Vector2, GameMapUI, get_FocusLocation, app::GameMapUI* this_ptr) {
        if (force_focus_location_to_center_once || core::api::input::get_current_control_scheme() == app::ControlScheme__Enum::Keyboard) {
            force_focus_location_to_center_once = false;
            return modloader::math::to_vec2(
                AreaMapNavigation::WorldToMapPosition(
                    this_ptr->fields.m_areaMap->fields._Navigation_k__BackingField,
                    this_ptr->fields.m_areaMap->fields._Navigation_k__BackingField->fields.m_scrollPosition
                )
            );
        }

        return next::GameMapUI::get_FocusLocation(this_ptr);
    }

    IL2CPP_INTERCEPT(void, GameMapUI, FixedUpdate, app::GameMapUI* this_ptr) {
        force_focus_location_to_center_once = true;
        next::GameMapUI::FixedUpdate(this_ptr);
    }
}

#include <Core/api/game/game.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/settings.h>
#include <Core/text/text_database.h>
#include <Modloader/app/methods/AreaMapNavigation.h>
#include <Modloader/app/methods/AreaMapUI.h>
#include <Modloader/app/types/GameMapTransitionManager.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Randomizer/randomizer.h>

namespace {
    using namespace app::classes;

    /**
     * In the randomizer we want players to be able to zoom out more on the map
     * than is possible in the vanilla game
     */
    constexpr float map_zoom_out_factor = 2.0f;
    float original_zoom = -1.0f;
    float original_scale = -1.0f;
    IL2CPP_INTERCEPT(void, AreaMapUI, Awake, app::AreaMapUI* this_ptr) {
        next::AreaMapUI::Awake(this_ptr);

        const auto transition = types::GameMapTransitionManager::get_class();
        transition->static_fields->WorldMapEnabled = core::settings::enable_world_map();

        if (original_zoom < 0.0f) {
            original_zoom = this_ptr->fields._Navigation_k__BackingField->fields.AreaMapZoomLevel;
        }

        if (original_scale < 0.0f) {
            original_scale = this_ptr->fields._IconScaler_k__BackingField->fields.MaxScaleFactor;
        }

        this_ptr->fields._Navigation_k__BackingField->fields.AreaMapZoomLevel = original_zoom / map_zoom_out_factor;
        this_ptr->fields._Navigation_k__BackingField->fields.WorldMapZoomLevel = original_zoom / map_zoom_out_factor;
        this_ptr->fields._IconScaler_k__BackingField->fields.MaxScaleFactor = original_scale / map_zoom_out_factor;
    }
}

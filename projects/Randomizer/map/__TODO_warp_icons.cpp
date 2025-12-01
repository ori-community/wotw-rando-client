#include <Core/api/game/game.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/settings.h>
#include <Core/text/text_database.h>
#include <Modloader/app/methods/GameMapUI.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/methods/QuestsUI.h>
#include <Modloader/app/types/Input_Cmd.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Randomizer/randomizer.h>

namespace {
    using namespace app::classes;

    IL2CPP_INTERCEPT(bool, GameMapUI, IsCursorOverTeleporter, app::GameMapUI * this_ptr, app::Vector2* target) {
        const auto cursor = GameMapUI::get_FocusLocation(this_ptr);

        // TODO: We might want to use a separate map for icons that can be teleported to.
        //       Needs to handle icons changing that property.
        auto& collection = icon_collection[active_filter()];
        auto min_distance = 1.02 * 1.02;
        std::shared_ptr<Icon> closest_icon;
        for (auto const& icon: resolve_collection(collection)) {
            if (icon->can_teleport().get()) {
                const auto position = AreaMapNavigation::WorldToMapPosition(
                    this_ptr->fields.m_areaMap->fields._Navigation_k__BackingField, icon->position().get()
                );

                const auto difference = cursor - app::Vector2{position.x, position.y};
                const auto magnitude_squared = difference.x * difference.x + difference.y * difference.y;
                if (magnitude_squared < min_distance) {
                    closest_icon = icon;
                    *target = icon->position().get();
                    min_distance = magnitude_squared;
                }
            }
        }

        app::Vector2 original_target{};
        if (next::GameMapUI::IsCursorOverTeleporter(this_ptr, &original_target)) {
            const auto position = AreaMapNavigation::WorldToMapPosition(this_ptr->fields.m_areaMap->fields._Navigation_k__BackingField, original_target);
            const auto difference = cursor - app::Vector2{position.x, position.y};
            const auto magnitude_squared = difference.x * difference.x + difference.y * difference.y;
            if (magnitude_squared < min_distance) {
                *target = original_target;
                return true;
            }
        }

        return closest_icon != nullptr;
    }
}

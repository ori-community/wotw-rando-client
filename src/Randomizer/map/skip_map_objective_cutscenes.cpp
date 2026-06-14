#include <Core/api/game/game.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/settings.h>
#include <Core/text/text_database.h>
#include <Modloader/app/methods/AK/Wwise/State.h>
#include <Modloader/app/methods/AreaMapNavigation.h>
#include <Modloader/app/methods/Game/UI.h>
#include <Modloader/app/methods/GameMapUI.h>
#include <Modloader/app/methods/MenuScreenManager.h>
#include <Modloader/app/methods/Moon/Timeline/DiscoverAreasEntity.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Randomizer/randomizer.h>

namespace {
    using namespace app::classes;

    IL2CPP_INTERCEPT(void, Moon::Timeline::DiscoverAreasEntity, ChangeState, app::DiscoverAreasEntity* this_ptr, app::DiscoverAreasEntity_State__Enum value) {
        // Since we don't want the map to show up, lets speedrun the timeline entity.
        if (value == app::DiscoverAreasEntity_State__Enum::Start) {
            auto menu = Game::UI::get_Menu();
            MenuScreenManager::HideMenuScreen(menu, true, false);
            AK::Wwise::State::SetValue(menu->fields.Sounds->fields.NoUIDisplayedState);

            next::Moon::Timeline::DiscoverAreasEntity::ChangeState(this_ptr, app::DiscoverAreasEntity_State__Enum::Reveal);
            next::Moon::Timeline::DiscoverAreasEntity::ChangeState(this_ptr, app::DiscoverAreasEntity_State__Enum::Fade);
            next::Moon::Timeline::DiscoverAreasEntity::ChangeState(this_ptr, app::DiscoverAreasEntity_State__Enum::WaitForInput);
        } else {
            next::Moon::Timeline::DiscoverAreasEntity::ChangeState(this_ptr, value);
        }
    }

    IL2CPP_INTERCEPT(void, GameMapUI, set_ShowObjective, app::GameMapUI * this_ptr, app::GameMapShowObjective* objective) {
        // NOOP
    }
}

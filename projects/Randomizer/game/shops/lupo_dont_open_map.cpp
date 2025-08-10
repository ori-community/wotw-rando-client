#include <Core/api/uber_states/uber_state.h>

#include <Modloader/app/methods/MapmakerScreen.h>
#include <Modloader/app/methods/Moon/SerializedBooleanUberState.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

#include <unordered_map>

namespace {
    bool prevent_map_safeguard = false;
    IL2CPP_INTERCEPT(void, MapmakerScreen, Show, app::MapmakerScreen * this_ptr) {
        modloader::ScopedSetter set(prevent_map_safeguard, true);
        // csharp_bridge::update_shop_data();
        next::MapmakerScreen::Show(this_ptr);
    }

    IL2CPP_INTERCEPT(bool, Moon::SerializedBooleanUberState, get_Value, app::SerializedBooleanUberState * this_ptr) {
        if (prevent_map_safeguard && this_ptr->fields._.m_id->fields.m_id == 35534)
            return false;

        return next::Moon::SerializedBooleanUberState::get_Value(this_ptr);
    }
} // namespace

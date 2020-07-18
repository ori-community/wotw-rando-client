#pragma once

#include <macros.h>
#include <string>

namespace uber_states
{
    // Mainly useful for reevaluating listeners when a state should have changed but it didn't.
    void apply_uber_state_no_notify(app::IUberState* uber_state);

    app::UberID* get_uber_state_id(app::IUberState* uber_state);
    app::UberID* get_uber_state_group_id(app::IUberState* uber_state);
    std::string get_uber_state_name(app::IUberState* uber_state);
    std::string get_uber_state_group_name(app::IUberState* uber_state);
    std::string tostring(app::IUberState* uber_state);

    app::UberID create_uber_id(int id);
    app::IUberState* get_uber_state(int group_id, int state_id);
    app::IUberState* get_uber_state(app::UberID& group_id, app::UberID& state_id);

    void set_uber_state_value(app::IUberState* uber_state, float value);
    float get_uber_state_value(app::IUberState* uber_state);
    INJECT_C_DLLEXPORT void set_uber_state_value(int group, int state, float value);
    INJECT_C_DLLEXPORT float get_uber_state_value(int group, int state);
    INJECT_C_DLLEXPORT void refresh_player_uber_descriptor();
}

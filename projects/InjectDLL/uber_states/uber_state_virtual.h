#pragma once

#include <enums/uber_state.h>
#include <uber_states/uber_state_interface.h>

#include <string>

namespace uber_states {
    void virtual_notify_change(UberState state, double prev);
    bool is_virtual_state(UberStateGroup group, int state);
    std::string get_virtual_name(UberStateGroup group, int state);
    std::string get_virtual_group_name(UberStateGroup group);
    double get_virtual_value(UberStateGroup group, int state);
    void set_virtual_value(UberStateGroup group, int state, double value);
} // namespace uber_states

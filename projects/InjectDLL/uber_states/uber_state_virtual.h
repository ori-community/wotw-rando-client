#pragma once

#include <string>

namespace uber_states
{
    void virtual_notify_change(int group, int state);
    bool is_virtual_state(int group, int state);
    std::string get_virtual_name(int group, int state);
    std::string get_virtual_group_name(int group);
    double get_virtual_value(int group, int state);
    void set_virtual_value(int group, int state, double value);
}

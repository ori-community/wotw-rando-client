#pragma once

#include <Core/enums/uber_state.h>
#include <Core/uber_states/uber_state_interface.h>

#include <string>
#include <Core/macros.h>

namespace uber_states {
    using uber_id = std::pair<UberStateGroup, int>;

    // TODO: Maybe add an on_changed callback and implement the uberstate notify for these.
    struct CORE_DLLEXPORT VirtualUberState {
        using setter = void (*)(double);
        using getter = double (*)();

        std::string name;
        setter set;
        getter get;
    };

    CORE_DLLEXPORT void register_virtual_state(const uber_id& uberId, const VirtualUberState& state);
    CORE_DLLEXPORT void virtual_notify_change(UberState state, double prev);
    CORE_DLLEXPORT bool is_virtual_state(UberStateGroup group, int state);
    CORE_DLLEXPORT std::string get_virtual_name(UberStateGroup group, int state);
    CORE_DLLEXPORT std::string get_virtual_group_name(UberStateGroup group);
    CORE_DLLEXPORT double get_virtual_value(UberStateGroup group, int state);
    CORE_DLLEXPORT void set_virtual_value(UberStateGroup group, int state, double value);
} // namespace uber_states

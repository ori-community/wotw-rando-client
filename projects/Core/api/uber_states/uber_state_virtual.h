#pragma once

#include <Core/api/uber_states/uber_state_handlers.h>
#include <Core/enums/uber_state.h>
#include <Core/macros.h>
#include <Core/property.h>

#include <string>

namespace core::api::uber_states {
    using uber_id_t = std::pair<UberStateGroup, int>;

    CORE_DLLEXPORT void register_virtual_state(uber_id_t const& uber_id, std::string name, Property<double> const& value, bool polled = false);
    CORE_DLLEXPORT void register_virtual_event_state(uber_id_t const& uber_id, std::string name);
    CORE_DLLEXPORT void virtual_notify_change(UberStateCallbackParams const& params);
    CORE_DLLEXPORT bool is_virtual_state(UberStateGroup group, int state);
    CORE_DLLEXPORT std::string get_virtual_name(UberStateGroup group, int state);
    CORE_DLLEXPORT double get_virtual_value(UberStateGroup group, int state);
    CORE_DLLEXPORT void set_virtual_value(UberStateGroup group, int state, double value);
    CORE_DLLEXPORT std::vector<uber_id_t> get_virtual_uber_ids();
} // namespace core::api::uber_states

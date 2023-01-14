#pragma once

#include <Core/dynamic_value.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Core/enums/uber_state.h>
#include <Core/macros.h>

#include <string>

namespace core::api::uber_states {
    using uber_id = std::pair<UberStateGroup, int>;

    CORE_DLLEXPORT void register_virtual_state(const uber_id& uberId, std::string name, core::DynamicValue<double> value);
    CORE_DLLEXPORT void virtual_notify_change(UberStateCallbackParams const& params);
    CORE_DLLEXPORT bool is_virtual_state(UberStateGroup group, int state);
    CORE_DLLEXPORT std::string get_virtual_name(UberStateGroup group, int state);
    CORE_DLLEXPORT std::string get_virtual_group_name(UberStateGroup group);
    CORE_DLLEXPORT double get_virtual_value(UberStateGroup group, int state);
    CORE_DLLEXPORT void set_virtual_value(UberStateGroup group, int state, double value);
} // namespace core::api::uber_states

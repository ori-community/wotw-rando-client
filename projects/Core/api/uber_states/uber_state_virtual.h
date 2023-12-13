#pragma once

#include <Core/api/uber_states/uber_state_handlers.h>
#include <Core/enums/uber_state.h>
#include <Core/macros.h>
#include <Core/property.h>

#include <string>

namespace core::api::uber_states {
    using uber_id_t = std::pair<UberStateGroup, int>;
    struct VirtualStateInfo {
        ValueType type = ValueType::Boolean;
        UberStateGroup group = UberStateGroup::Invalid;
        int state = 0;
        std::string name = "Uninitialized";

        bool readonly = false;
        bool polled = false;
    };

    CORE_DLLEXPORT void register_virtual_state(VirtualStateInfo const& info, Property<double> const& value);
    CORE_DLLEXPORT void register_virtual_event_state(UberStateGroup group, int state, const std::string& name);
    CORE_DLLEXPORT void virtual_notify_change(UberStateCallbackParams const& params);
    CORE_DLLEXPORT bool is_virtual_state(UberStateGroup group, int state);
    CORE_DLLEXPORT std::string get_virtual_name(UberStateGroup group, int state);
    CORE_DLLEXPORT ValueType get_virtual_type(UberStateGroup group, int state);
    CORE_DLLEXPORT bool get_virtual_readonly(UberStateGroup group, int state);
    CORE_DLLEXPORT double get_virtual_value(UberStateGroup group, int state);
    CORE_DLLEXPORT void set_virtual_value(UberStateGroup group, int state, double value);
    CORE_DLLEXPORT std::vector<uber_id_t> get_virtual_uber_ids();
} // namespace core::api::uber_states

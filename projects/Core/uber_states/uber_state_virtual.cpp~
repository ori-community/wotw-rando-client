#include <uber_states/uber_state_virtual.h>

#include <uber_states/uber_state_interface.h>

#include <Common/ext.h>

#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/types/PlayerInput.h>
#include <Modloader/common.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>

#include <unordered_map>

using namespace modloader;
using namespace app::classes;

namespace uber_states {
    namespace {
        std::unordered_map<uber_id, VirtualUberState, pair_hash> virtual_states;

        std::unordered_map<uber_id, double, pair_hash> cached_values;
        IL2CPP_INTERCEPT(GameController, void, Update, (app::GameController * this_ptr)) {
            next::GameController::Update(this_ptr);
            for (const auto& state : virtual_states) {
                auto value = state.second.get();
                auto it = cached_values.find(state.first);
                if (it == cached_values.end())
                    virtual_notify_change(UberState(state.first.first, state.first.second), 0.0);
                else if (std::abs(it->second - value) >= 0.1)
                    UberState(state.first.first, state.first.second).notify_changed(it->second);
            }
        }

        void initialize() {
            register_value_notify(virtual_notify_change);
        }

        CALL_ON_INIT(initialize);
    } // namespace

    void register_virtual_state(const uber_id& uberId, const VirtualUberState& state) {
        virtual_states[uberId] = state;
    }

    bool is_virtual_state(UberStateGroup group, int state) {
        return virtual_states.find(std::make_pair(group, state)) != virtual_states.end();
    }

    std::string get_virtual_name(UberStateGroup group, int state) {
        auto it = virtual_states.find(std::make_pair(group, state));
        return it->second.name;
    }

    // TODO: Use a map for this if we add more then 1 virtual group.
    std::string get_virtual_group_name(UberStateGroup group) {
        return std::string(uber_state_group_name(UberStateGroup::RandoVirtual));
    }

    double get_virtual_value(UberStateGroup group, int state) {
        auto it = virtual_states.find(std::make_pair(group, state));
        return it->second.get();
    }

    void set_virtual_value(UberStateGroup group, int state, double value) {
        auto it = virtual_states.find(std::make_pair(group, state));
        it->second.set(value);
    }

    void virtual_notify_change(UberState state, double prev) {
        if (!is_virtual_state(state.group(), state.state()))
            return;

        auto value = state.get();
        cached_values[uber_id(state.group(), state.state())] = value;

        // TODO: Add event bus for this
        // report_uber_state_change(state.group(), state.state(), value);
    }
} // namespace uber_states
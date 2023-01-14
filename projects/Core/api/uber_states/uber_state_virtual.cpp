#include <api/uber_states/uber_state_virtual.h>

#include <Common/ext.h>

#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/types/PlayerInput.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

#include <unordered_map>
#include <utility>

using namespace modloader;
using namespace app::classes;

namespace core::api::uber_states {
    namespace {
        // TODO: Maybe add an on_changed callback and implement the uberstate notify for these.
        struct VirtualUberState {
            using setter = void (*)(double);
            using getter = double (*)();

            std::string name;
            DynamicValue<double> value;
        };

        std::unordered_map<uber_id, VirtualUberState, pair_hash> virtual_states;

        std::unordered_map<uber_id, double, pair_hash> cached_values;
        IL2CPP_INTERCEPT(GameController, void, Update, (app::GameController * this_ptr)) {
            next::GameController::Update(this_ptr);
            for (const auto& [id, virtual_state] : virtual_states) {
                const auto value = virtual_state.value.get();
                auto it = cached_values.find(id);
                if (it == cached_values.end()) {
                    cached_values[id] = value;
                    it = cached_values.find(id);
                }

                if (it != cached_values.end() && std::abs(it->second - value) >= 0.1) {
                    const auto state = UberState(id.first, id.second);
                    UberStateCallbackParams params{
                        state,
                        it->second
                    };

                    notification_bus().trigger_event(params);
                    single_notification_bus().trigger_event(state, params);
                }
            }
        }

        auto virtual_notifier = notification_bus().register_handler(virtual_notify_change);
    } // namespace

    void register_virtual_state(const uber_id& uberId, std::string name, core::DynamicValue<double> value) {
        virtual_states[uberId] = {
            .name = std::move(name),
            .value = std::move(value)
        };
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
        return it->second.value.get();
    }

    void set_virtual_value(UberStateGroup group, int state, double value) {
        auto it = virtual_states.find(std::make_pair(group, state));
        it->second.value.set(value);
    }

    void virtual_notify_change(UberStateCallbackParams const& params) {
        if (!is_virtual_state(params.state.group(), params.state.state())) {
            return;
        }

        auto value = params.state.get<double>();
        cached_values[uber_id(params.state.group(), params.state.state())] = value;
    }
} // namespace core::api::uber_states
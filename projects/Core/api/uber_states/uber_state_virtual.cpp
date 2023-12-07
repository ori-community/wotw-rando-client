#include <Core/api/uber_states/uber_state_virtual.h>

#include <Common/ext.h>

#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/types/PlayerInput.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

#include <unordered_map>
#include <utility>


#include "uber_state_condition.h"

using namespace modloader;
using namespace app::classes;

namespace core::api::uber_states {
    namespace {
        struct VirtualUberState {
            using setter = void (*)(double);
            using getter = double (*)();

            std::string name;
            Property<double> value;
            std::shared_ptr<reactivity::ReactiveEffect> effect;
        };

        std::unordered_map<uber_id_t, VirtualUberState, pair_hash> virtual_states;
        std::vector<uber_id_t> polled_virtual_states;

        std::unordered_map<uber_id_t, double, pair_hash> cached_values;
        void check_state_change(const uber_id_t& uber_id, double value) {
            auto it = cached_values.find(uber_id);
            if (it == cached_values.end()) {
                cached_values[uber_id] = value;
                it = cached_values.find(uber_id);
            }

            if (it != cached_values.end() && std::abs(it->second - value) >= 0.1) {
                const auto state = UberState(uber_id.first, uber_id.second);
                const UberStateCallbackParams params{state, it->second};

                notification_bus().trigger_event(params);
                single_notification_bus().trigger_event(state, params);
            }
        }

        IL2CPP_INTERCEPT(GameController, void, Update, (app::GameController * this_ptr)) {
            next::GameController::Update(this_ptr);
            for (auto const& id: polled_virtual_states) {
                check_state_change(id, virtual_states[id].value.get());
            }
        }

        auto virtual_notifier = notification_bus().register_handler(virtual_notify_change);
    } // namespace

    void register_virtual_state(const uber_id_t& uber_id, std::string name, const Property<double>& value, const bool polled) {
        virtual_states[uber_id] = {.name = std::move(name), .value = value};
        if (polled) {
            polled_virtual_states.push_back(uber_id);
        } else {
            auto& state = virtual_states[uber_id];
            reactivity::watch_effect().effect(state.value).after([uber_id]() {
                check_state_change(uber_id, virtual_states[uber_id].value.get());
            }).finalize_inplace(state.effect);
        }
    }

    void register_virtual_event_state(uber_id_t const& uber_id, std::string name) {
        virtual_states[uber_id] = {.name = std::move(name), .value = core::Property<double>([](auto) {}, [] { return 1; })};
    }

    bool is_virtual_state(UberStateGroup group, int state) { return virtual_states.contains(std::make_pair(group, state)); }

    std::string get_virtual_name(UberStateGroup group, int state) {
        auto it = virtual_states.find(std::make_pair(group, state));
        return it->second.name;
    }

    // TODO: Use a map for this if we add more then 1 virtual group.
    std::string get_virtual_group_name(UberStateGroup group) { return std::string(uber_state_group_name(UberStateGroup::RandoVirtual)); }

    double get_virtual_value(UberStateGroup group, int state) {
        auto it = virtual_states.find(std::make_pair(group, state));
        return it->second.value.get();
    }

    void set_virtual_value(UberStateGroup group, int state, double value) {
        auto it = virtual_states.find(std::make_pair(group, state));
        it->second.value.set(value);
    }

    std::vector<uber_id_t> get_virtual_uber_ids() {
        auto keys = virtual_states | std::views::keys;
        return { keys.begin(), keys.end() };
    }

    void virtual_notify_change(UberStateCallbackParams const& params) {
        if (!is_virtual_state(params.state.group(), params.state.state())) {
            return;
        }

        const auto value = params.state.get<double>();
        cached_values[uber_id_t(params.state.group(), params.state.state())] = value;
    }
} // namespace core::api::uber_states

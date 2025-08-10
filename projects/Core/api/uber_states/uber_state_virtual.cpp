#include <Core/api/uber_states/uber_state_virtual.h>

#include <Common/ext.h>

#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/types/PlayerInput.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

#include <Core/api/game/game.h>
#include <Core/enums/game_event.h>
#include <unordered_map>
#include <utility>


#include "uber_state_condition.h"

using namespace modloader;
using namespace app::classes;

namespace core::api::uber_states {
    namespace {
        struct VirtualUberState {
            ValueType type{};
            std::string name;
            Property<double> value;
            std::shared_ptr<const reactivity::ReactiveEffect> effect;
            bool readonly{};
        };

        std::unordered_map<uber_id_t, VirtualUberState, pair_hash> virtual_states;
        std::vector<uber_id_t> polled_virtual_states;

        std::unordered_map<uber_id_t, double, pair_hash> cached_values;
        void check_state_change(const uber_id_t& uber_id, const double value) {
            auto it = cached_values.find(uber_id);
            if (it == cached_values.end()) {
                cached_values[uber_id] = value;
                it = cached_values.find(uber_id);
            }

            if (it != cached_values.end() && std::abs(it->second - value) >= FLT_EPSILON) {
                const auto state = UberState(uber_id.first, uber_id.second);
                const UberStateCallbackParams params{state, it->second, value};

                reactivity::notify_changed(reactivity::UberStateDependency { static_cast<int>(uber_id.first), uber_id.second });
                notification_bus().trigger_event(params);
                single_notification_bus().trigger_event(state, params);
            }
        }

        [[maybe_unused]]
        auto on_update = core::api::game::event_bus().register_handler(GameEvent::Update, EventTiming::Before, [](auto, auto) {
            for (auto const& id: polled_virtual_states) {
                check_state_change(id, virtual_states[id].value.get());
            }
        });

        [[maybe_unused]] auto virtual_notifier = notification_bus().register_handler(virtual_notify_change);
    } // namespace

    void register_virtual_state(VirtualStateInfo const& info, const Property<double>& value) {
        const auto uber_id = std::make_pair(info.group, info.state);
        virtual_states[uber_id] = {.type = info.type, .name = info.name, .value = value, .readonly = info.readonly};
        if (info.update_mode == VirtualStateInfo::UpdateMode::Poll) {
            polled_virtual_states.push_back(uber_id);
        } else if (info.update_mode == VirtualStateInfo::UpdateMode::ReactiveEffect) {
            auto& state = virtual_states[uber_id];
            reactivity::watch_effect()
                .effect(state.value)
                .after([uber_id]() { check_state_change(uber_id, virtual_states[uber_id].value.get()); })
                .finalize_inplace(state.effect);
        }
    }

    void register_virtual_event_state(UberStateGroup group, int state, const std::string& name) {
        const auto uber_id = std::make_pair(group, state);
        virtual_states[uber_id] = {
            .type = ValueType::Boolean,
            .name = name,
            .value = core::Property<double>([](auto) {}, [] { return 1; }),
            .readonly = true,
        };
    }

    bool is_virtual_state(UberStateGroup group, int state) { return virtual_states.contains(std::make_pair(group, state)); }

    std::string get_virtual_name(UberStateGroup group, int state) {
        const auto it = virtual_states.find(std::make_pair(group, state));
        return it != virtual_states.end() ? it->second.name : "";
    }

    ValueType get_virtual_type(UberStateGroup group, int state) {
        const auto it = virtual_states.find(std::make_pair(group, state));
        return it != virtual_states.end() ? it->second.type : ValueType::Unknown;
    }

    bool get_virtual_readonly(UberStateGroup group, int state) {
        const auto it = virtual_states.find(std::make_pair(group, state));
        return it != virtual_states.end() ? it->second.readonly : true;
    }

    double get_virtual_value(UberStateGroup group, int state) {
        const auto it = virtual_states.find(std::make_pair(group, state));
        return it != virtual_states.end() ? it->second.value.get() : 0.0;
    }

    void set_virtual_value(UberStateGroup group, int state, double value) {
        const auto it = virtual_states.find(std::make_pair(group, state));
        if (it != virtual_states.end()) {
            it->second.value.set(value);
        }
    }

    std::vector<uber_id_t> get_virtual_uber_ids() {
        auto keys = virtual_states | std::views::keys;
        return {keys.begin(), keys.end()};
    }

    void virtual_notify_change(UberStateCallbackParams const& params) {
        if (!is_virtual_state(params.state.group(), params.state.state())) {
            return;
        }

        const auto value = params.state.get<double>();
        cached_values[uber_id_t(params.state.group(), params.state.state())] = value;
    }
} // namespace core::api::uber_states

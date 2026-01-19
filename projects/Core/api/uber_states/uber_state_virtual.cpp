#include <Core/api/uber_states/uber_state_virtual.h>


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
        std::unordered_map<uber_id_t, VirtualUberState, pair_hash> virtual_uber_states;
    } // namespace

    VirtualUberState::VirtualUberState(
        const int group,
        const int state,
        const ValueType value_type,
        std::string name,
        getter_fn_t getter_fn,
        setter_fn_t setter_fn,
        const ChangeDetectionMode change_detection_mode
    ) :
        m_group(group),
        m_state(state),
        m_value_type(value_type),
        m_name(std::move(name)),
        m_getter_fn(std::move(getter_fn)),
        m_setter_fn(std::move(setter_fn)) {

        switch (change_detection_mode) {
            case ChangeDetectionMode::Manual:
                break;
            case ChangeDetectionMode::Poll:
                m_poll_update_droppable = game::event_bus().register_handler(GameEvent::Update, EventTiming::Before, [this](auto, auto) {
                    check_for_changes();
                });
                break;
            case ChangeDetectionMode::ReactiveEffect:
                m_effect = reactivity::watch_effect()
                    .effect([this] {
                        [[maybe_unused]]
                        auto _ = this->m_getter_fn();
                    })
                    .after([this] {
                        if (reactivity::is_in_effect_setup()) {
                            return;
                        }

                        notify_changed();
                    })
                    .finalize();
                break;
        }
    }

    double VirtualUberState::get() const {
        reactivity::ScopedReactivityBlocker _;
        return m_getter_fn();
    }

    void VirtualUberState::set(const double value) {
        if (!m_setter_fn.has_value()) {
            throw std::runtime_error(std::format("set() called on virtual uber state {}|{} that does not have a setter", m_group, m_state));
        }

        m_setter_fn->operator()(value);
        m_last_value_for_polling = value;
        notify_changed();
    }

    bool VirtualUberState::is_readonly() const {
        return !m_setter_fn.has_value();
    }

    void VirtualUberState::check_for_changes() {
        const auto new_value = get();

        if (m_last_value_for_polling.has_value() && new_value != *m_last_value_for_polling) {
            notify_changed();
        }

        m_last_value_for_polling = new_value;
    }

    void VirtualUberState::notify_changed() const {
        reactivity::notify_changed(reactivity::UberStateDependency{m_group, m_state});
    }

    bool is_virtual_uber_state(const int group, const int state) {
        return virtual_uber_states.contains(std::make_pair(group, state));
    }

    bool is_virtual_uber_state(const UberStateGroup group, const int state) {
        return is_virtual_uber_state(static_cast<int>(group), state);
    }

    VirtualUberState& get_virtual_uber_state(int group, int state) {
        return virtual_uber_states.at(std::make_pair(group, state));
    }

    VirtualUberState& get_virtual_uber_state(UberStateGroup group, int state) {
        return get_virtual_uber_state(static_cast<int>(group), state);
    }

    std::vector<uber_id_t> get_virtual_uber_state_ids() {
        std::vector<uber_id_t> ids;
        for (const auto & virtual_uber_state: virtual_uber_states | std::views::keys) {
            ids.push_back(virtual_uber_state);
        }
        return ids;
    }

    void register_virtual_uber_state(
        const UberStateGroup group,
        const int state,
        const ValueType value_type,
        const std::string& name,
        const VirtualUberState::getter_fn_t& getter_fn,
        const VirtualUberState::setter_fn_t& setter_fn,
        const VirtualUberState::ChangeDetectionMode change_detection_mode
    ) {
        const auto uber_id = std::make_pair(static_cast<int>(group), state);

        assert(!virtual_uber_states.contains(uber_id));

        virtual_uber_states.emplace(
            std::piecewise_construct,
            std::forward_as_tuple(uber_id),
            std::forward_as_tuple(static_cast<int>(group), state, value_type, name, getter_fn, setter_fn, change_detection_mode)
        );
    }
} // namespace core::api::uber_states

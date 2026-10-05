#include <Core/api/game/game.h>
#include <Core/api/uber_states/uber_state_virtual.h>
#include <Core/enums/game_event.h>
#include <Modloader/windows_api/console.h>
#include <unordered_map>
#include <utility>


using namespace modloader;
using namespace app::classes;

namespace core::api::uber_states {
    namespace {
        struct VirtualUberStateGroup {
            std::string name;
            std::unordered_map<int, VirtualUberState> states{};
        };

        std::unordered_map<int, VirtualUberStateGroup> virtual_uber_states_by_group;
        std::unordered_map<UntypedUberId, VirtualUberState*> virtual_uber_states;
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
                m_last_known_value = m_getter_fn();
                break;
            case ChangeDetectionMode::Poll:
                m_poll_update_droppable = game::event_bus().on<game::events::BeforeUnityUpdateLoop>([this](auto) {
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

                        notify_changed(this->m_getter_fn(), m_last_known_value.value_or(0.0));
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
        const auto previous_value = m_last_known_value;
        m_last_known_value = get();
        notify_changed(*m_last_known_value, previous_value.value_or(0.0));
    }

    bool VirtualUberState::is_readonly() const {
        return !m_setter_fn.has_value();
    }

    void VirtualUberState::check_for_changes() {
        const auto new_value = get();

        if (m_last_known_value.has_value() && new_value != *m_last_known_value) {
            on_any_uber_state_changed().trigger_event(UntypedUberId(m_group, m_state));
            on_uber_state_changed().trigger_event(UntypedUberId(m_group, m_state));
            notify_changed(new_value, *m_last_known_value);
        }

        m_last_known_value = new_value;
    }

    void VirtualUberState::notify_changed(double value, double previous_value) const {
        reactivity::notify_changed(reactivity::UberStateDependency{m_group, m_state});
    }

    bool is_virtual_uber_state(const int group, const int member) {
        return virtual_uber_states.contains(UntypedUberId(group, member));
    }

    bool is_virtual_uber_state(const UntypedUberId id) {
        return is_virtual_uber_state(id.group, id.member);
    }

    VirtualUberState& get_virtual_uber_state(const int group, const int member) {
        return *virtual_uber_states.at(UntypedUberId(group, member));
    }

    VirtualUberState& get_virtual_uber_state(const UntypedUberId id) {
        return get_virtual_uber_state(id.group, id.member);
    }

    std::vector<UntypedUberId> get_virtual_uber_state_ids() {
        std::vector<UntypedUberId> ids;
        for (const auto & virtual_uber_state: virtual_uber_states | std::views::keys) {
            ids.push_back(virtual_uber_state);
        }
        return ids;
    }

    std::string get_virtual_uber_state_group_name(const int group) {
        return virtual_uber_states_by_group.at(group).name;
    }

    void define_virtual_uber_state_group(int group, const std::string& name) {
        assert(!virtual_uber_states_by_group.contains(group));  // Group has already been defined before
        virtual_uber_states_by_group.emplace(group, name);
    }

    void register_virtual_uber_state(
        const int group,
        const int member,
        const VirtualUberState::ValueType value_type,
        const std::string& name,
        const VirtualUberState::getter_fn_t& getter_fn,
        const VirtualUberState::setter_fn_t& setter_fn,
        const VirtualUberState::ChangeDetectionMode change_detection_mode
    ) {
        const auto uber_id = UntypedUberId(group, member);

        assert(!virtual_uber_states.contains(uber_id));  // Virtual uber state has already been registered before
        assert(virtual_uber_states_by_group.contains(group));  // Virtual uber state group needs to be defined with define_virtual_uber_state_group

        const auto [it, _] = virtual_uber_states_by_group.at(group).states.emplace(
            std::piecewise_construct,
            std::forward_as_tuple(member),
            std::forward_as_tuple(static_cast<int>(group), member, value_type, name, getter_fn, setter_fn, change_detection_mode)
        );

        virtual_uber_states.emplace(uber_id, &it->second);
    }
} // namespace core::api::uber_states

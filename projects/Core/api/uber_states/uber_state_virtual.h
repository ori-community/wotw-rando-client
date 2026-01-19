#pragma once

#include <Core/api/uber_states/uber_state_handlers.h>
#include <Core/enums/uber_state.h>
#include <Core/macros.h>
#include <Core/property.h>

#include <string>

namespace core::api::uber_states {
    class CORE_DLLEXPORT VirtualUberState {
    public:
        using getter_fn_t = std::function<double()>;
        using setter_fn_t = std::optional<std::function<void(double value)>>;

        enum class ChangeDetectionMode {
            /** Requires manually invoking notify_used with a UberStateDependency */
            Manual,
            /** Polls the getter function at the start of every Update tick */
            Poll,
            /** Makes the getter function reactive */
            ReactiveEffect,
        };

        VirtualUberState(
            int group,
            int state,
            ValueType value_type,
            std::string name,
            getter_fn_t getter_fn,
            setter_fn_t setter_fn,
            ChangeDetectionMode change_detection_mode
        );

        /**
         * Returns the current value of the virtual uber state.
         * Note that invoking this function shadows any reactive effects that would be triggered inside
         * the getter function. If you need inner reactive dependencies to trigger effects that use this
         * uber state, set change detection mode to ReactiveEffect.
         */
        [[nodiscard]]
        double get() const;

        /** Sets the current value of the virtual uber state or prints an error if this virtual uber state is read-only */
        void set(double value);

        [[nodiscard]]
        bool is_readonly() const;

        const int m_group;
        const int m_state;
        const ValueType m_value_type;
        const std::string m_name;
    private:
        void check_for_changes();
        void notify_changed() const;

        getter_fn_t m_getter_fn;
        setter_fn_t m_setter_fn;
        reactivity::ReactiveEffect::ptr_t m_effect;
        common::Droppable::ptr_t m_poll_update_droppable;
        std::optional<double> m_last_value_for_polling = std::nullopt;
    };

    CORE_DLLEXPORT bool is_virtual_uber_state(int group, int state);
    CORE_DLLEXPORT bool is_virtual_uber_state(UberStateGroup group, int state);
    CORE_DLLEXPORT VirtualUberState& get_virtual_uber_state(int group, int state);
    CORE_DLLEXPORT VirtualUberState& get_virtual_uber_state(UberStateGroup group, int state);
    CORE_DLLEXPORT std::vector<uber_id_t> get_virtual_uber_state_ids();

    CORE_DLLEXPORT void register_virtual_uber_state(
        UberStateGroup group,
        int state,
        ValueType value_type,
        const std::string& name,
        const VirtualUberState::getter_fn_t& getter_fn,
        const VirtualUberState::setter_fn_t& setter_fn,
        VirtualUberState::ChangeDetectionMode change_detection_mode
    );

    template<typename T>
    void register_virtual_uber_state_from_property(
        UberStateGroup group,
        int state,
        ValueType value_type,
        const std::string& name,
        const Property<T>& property,
        VirtualUberState::ChangeDetectionMode change_detection_mode
    ) {
        register_virtual_uber_state(
            group,
            state,
            value_type,
            name,
            [&] -> double { return property.get(); },
            [&](double value) { property.set(value); },
            change_detection_mode
        );
    }

    template<typename T>
    void register_read_only_virtual_uber_state_from_property(
        UberStateGroup group,
        int state,
        ValueType value_type,
        const std::string& name,
        const Property<T>& property,
        VirtualUberState::ChangeDetectionMode change_detection_mode
    ) {
        register_virtual_uber_state(
            group,
            state,
            value_type,
            name,
            [&] -> double { return property.get(); },
            std::nullopt,
            change_detection_mode
        );
    }
} // namespace core::api::uber_states

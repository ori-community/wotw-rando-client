#pragma once

#include <memory>
#include <variant>

#include <Common/vx.h>

#include <Core/api/uber_states/uber_state.h>
#include <Core/property/reactivity.h>

template<typename T>
    requires core::is_uber_state<T>
struct core::Property<T> : core::BaseProperty {
    using value_type = std::variant<
        std::shared_ptr<T>,
        SetGet<T>,
        api::uber_states::UberState
    >;

    Property() { m_value = std::make_shared<T>(); }
    explicit Property(const T& value) { m_value = std::make_shared<T>(value); }
    explicit Property(const UberStateGroup group, const int state) { m_value = value_type(api::uber_states::UberState(group, state)); }
    explicit Property(const value_type& value) { m_value = value; }
    explicit Property(const SetGet<T>::setter_fn_t set, const SetGet<T>::getter_fn_t get) { m_value = SetGet(set, get); }
    Property(Property const& other) { operator=(other); }

    [[nodiscard]] T get() const {
        T return_value;

        notify_used();

        m_value | vx::match {
            [&](const std::shared_ptr<T>& value_ptr) {
                return_value = *value_ptr;
            },
            [&](const SetGet<T>& set_get) {
                return_value = set_get.get();
            },
            [&](const api::uber_states::UberState& uber_state) {
                return_value = uber_state.get<T>();
            },
        };

        return return_value;
    }

    void set(T const& value) const {
        m_value | vx::match {
            [&](const std::shared_ptr<T>& value_ptr) {
                *value_ptr = value;
            },
            [&](const SetGet<T>& set_get) {
                set_get.set(value);
            },
            [&](const api::uber_states::UberState& uber_state) {
                uber_state.set<T>(value);
            },
        };

        notify_changed();
    }

    void add(T const& value) const
        requires can_add<T>
    {
        set(get() + value);
    }

    void toggle() const requires std::is_same_v<T, bool> {
        set(!get());
    }

    void assign(value_type value) {
        m_value = value;
        notify_changed();
    }

    void assign(const SetGet<T>::setter_fn_t set, const SetGet<T>::getter_fn_t get) {
        m_value = SetGet(set, get);
        notify_changed();
    }

    std::string to_string() const {
        const auto is_uber_state = m_value.index();
        if (is_uber_state == 1) {
            return std::get<2>(m_value).to_string();
        } else {
            return std::format("{}", get());
        }
    }

    Property& operator=(const Property& other) {
        m_value = other.m_value;
        notify_changed();
        return *this;
    }

    T operator*() const {
        return get();
    }

    Property make_shallow_copy() const { return Property(get()); }

private:
    value_type m_value = nullptr;
};

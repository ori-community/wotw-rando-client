#pragma once

#include <memory>
#include <variant>

#include <Core/api/uber_states/uber_state.h>
#include <Core/property/reactivity.h>

template<typename T>
    requires core::is_uber_state<T>
struct core::Property<T> {
    using value_type = std::variant<std::shared_ptr<T>, set_get<T>, api::uber_states::UberState>;

    Property() { m_value = std::make_shared<T>(); }
    explicit Property(const T& value) { m_value = std::make_shared<T>(value); }
    explicit Property(const UberStateGroup group, const int state) { m_value = value_type(api::uber_states::UberState(group, state)); }
    explicit Property(const value_type& value) { m_value = value; }
    explicit Property(setter<T> set, getter<T> get) { m_value = std::make_tuple(set, get); }
    Property(Property const& other) { operator=(other); }

    [[nodiscard]] T get() const {
        switch (m_value.index()) {
            case 0:
                notify_used(reactivity::PropertyDependency(m_id));
                return *std::get<0>(m_value);
            case 1:
                notify_used(reactivity::PropertyDependency(m_id));
                return std::get<1>(std::get<1>(m_value))();
            case 2:
                notify_used(reactivity::PropertyDependency(m_id));
                return std::get<2>(m_value).template get<T>();
            default:
                throw std::exception("Unhandled variant in Property");
        }
    }

    void set(T const& value) const {
        switch (m_value.index()) {
            case 0: {
                *std::get<0>(m_value) = value;
                break;
            }
            case 1: {
                std::get<0>(std::get<1>(m_value))(value);
                break;
            }
            case 2: {
                std::get<2>(m_value).template set<T>(value);
                break;
            }
            default:
                throw std::exception("Unhandled variant in Property");
        }

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

    void assign(setter<T> set, getter<T> get) {
        m_value = std::make_tuple(set, get);
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

    Property make_shallow_copy() const { return Property(get()); }

    template<typename K>
    Property<K> wrap() const {
        return Property<K>([&](auto value) mutable { set(value); }, [&]() { return get(); });
    }

    void notify_changed() const {
        reactivity::notify_changed(reactivity::PropertyDependency(m_id));
    }
private:
    const unsigned int m_id = reactivity::reserve_property_id();
    value_type m_value = nullptr;
};

#pragma once

#include <variant>
#include <memory>

#include <Core/api/uber_states/uber_state.h>

template<typename T> requires core::is_uber_state<T>
struct core::Property<T> {
    using value_type = std::variant<
        std::shared_ptr<T>,
        set_get<T>,
        api::uber_states::UberState
    >;

    Property() {
        m_value = std::make_shared<T>();
    }

    explicit Property(const T &value) {
        m_value = std::make_shared<T>(value);
    }

    explicit Property(const value_type& value) {
        m_value = value;
    }

    explicit Property(setter<T> set, getter<T> get) {
        m_value = std::make_tuple(set, get);
    }

    Property(Property const& other) {
        m_value = other.m_value;
    }

    [[nodiscard]] T get() const {
        switch (m_value.index()) {
            case 0:
                return *std::get<0>(m_value);
            case 1:
                return std::get<1>(std::get<1>(m_value))();
            case 2:
                return std::get<2>(m_value).template get<T>();
            default:
                throw std::exception("Unhandled variant in Property");
        }
    }

    void set(T const &value) {
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
    }

    void add(T const& value) requires can_add<T> {
        set(get() + value);
    }

    void assign(value_type value) {
        m_value = value;
    }

    void assign(setter<T> set, getter<T> get) {
        m_value = std::make_tuple(set, get);
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
        return *this;
    }

    Property make_shallow_copy() {
        return Property(get());
    }

    template<typename K>
    Property<K> wrap() {
        auto copy = *this;
        return Property<K>(
            [copy](auto value) mutable { copy.set(value); },
            [copy]() { return copy.get(); }
        );
    }

private:
    value_type m_value = nullptr;
};

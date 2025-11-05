#pragma once

#include <variant>
#include <memory>

#include <Common/vx.h>

#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/il2cpp_math.h>

#include <Core/property/reactivity.h>

template<typename T> requires core::is_not_uber_state<T>
struct core::Property<T> : core::BaseProperty {
    using value_type = std::variant<
        std::shared_ptr<T>,
        SetGet<T>
    >;

    Property() {
        m_value = std::make_shared<T>();
    }

    explicit Property(const T &value) {
        m_value = std::make_shared<T>(value);
    }

    explicit Property(const value_type &value) {
        m_value = value;
    }

    explicit Property(const SetGet<T>::setter_fn_t set, const SetGet<T>::getter_fn_t get) {
        m_value = SetGet(set, get);
    }

    Property(Property const &other) {
        operator=(other);
    }

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
        };

        return return_value;
    }

    void set(T const &value) const {
        m_value | vx::match {
            [&](const std::shared_ptr<T>& value_ptr) {
                *value_ptr = value;
            },
            [&](const SetGet<T>& set_get) {
                set_get.set(value);
            },
        };

        notify_changed();
    }

    void set(const float x, const float y) const requires std::is_same_v<T, app::Vector2> {
        set(app::Vector2{x, y});
    }

    void set(const float x, const float y, const float z) const requires std::is_same_v<T, app::Vector3> {
        set(app::Vector3{x, y, z});
    }

    void add(T const& value) const requires can_add<T> {
        set(get() + value);
    }

    void add(const float x, const float y) const requires std::is_same_v<T, app::Vector2> {
        set(get() + app::Vector2{x, y});
    }

    void add(const float x, const float y, const float z) const requires std::is_same_v<T, app::Vector3> {
        set(get() + app::Vector3{x, y, z});
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
        return std::format("{}", get());
    }

    Property &operator=(const Property &other) {
        m_value = std::make_shared<T>(get());
        notify_changed();
        return *this;
    }

    Property make_shallow_copy() const {
        return Property(get());
    }

    template<typename K>
    Property<K> wrap() const {
        return Property<K>(
            [&](auto value) mutable { set(value); },
            [&] { return get(); }
        );
    }

private:
    value_type m_value = nullptr;
};

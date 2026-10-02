#pragma once

#include <Core/property/reactivity.h>
#include <Common/vx.h>
#include <Modloader/app/structs/Vector2.h>

#include <functional>

namespace core {
    template<typename T>
    concept can_add = requires(T a) {
        { a + a } -> std::same_as<T>;
    };

    template<typename T>
    struct SetGet {
        using setter_fn_t = std::function<void(const T&)>;
        using getter_fn_t = std::function<T()>;

    private:
        setter_fn_t m_setter;
        getter_fn_t m_getter;

    public:
        SetGet(const setter_fn_t& setter, const getter_fn_t& getter) :
            m_setter(setter),
            m_getter(getter) {}

        void set(const T& value) const {
            m_setter(value);
        }

        T get() const {
            return m_getter();
        }
    };

    struct BaseProperty {
        void notify_changed() const {
            reactivity::notify_changed(reactivity::PropertyDependency(m_id));
        }

        void notify_used() const {
            reactivity::notify_used(reactivity::PropertyDependency(m_id));
        }

        [[nodiscard]] reactivity::PropertyDependency get_dependency() const {
            return reactivity::PropertyDependency(m_id);
        }

    protected:
        unsigned int m_id = reactivity::reserve_property_id();
    };

    template<typename T>
    struct Property : core::BaseProperty {
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

        Property(const Property& other) = default;
        Property(Property&& other) noexcept = default;
        Property& operator=(const Property& other) = default;
        Property& operator=(Property&& other) noexcept = default;

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

        [[nodiscard]] T& get_mutable() {
            notify_used();

            if (m_value | vx::is<std::shared_ptr<T>>) {
                return *(m_value | vx::as<std::shared_ptr<T>>);
            }

            throw std::runtime_error("Cannot get mutable reference to value of a property with set/get functions");
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

        void set(const char* value) const requires std::is_same_v<T, std::string> {
            set(std::string(value));
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

        void assign(const value_type& value) {
            m_value = value;
            notify_changed();
        }

        void assign(const SetGet<T>::setter_fn_t set, const SetGet<T>::getter_fn_t get) {
            m_value = SetGet(set, get);
            notify_changed();
        }

        [[nodiscard]] std::string to_string() const {
            return std::format("{}", get());
        }

        T operator*() const {
            return get();
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
}

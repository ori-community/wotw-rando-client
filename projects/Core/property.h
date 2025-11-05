#pragma once

#include <Core/api/uber_states/uber_state.h>
#include <Core/property/reactivity.h>

#include <functional>

namespace core {
    template<typename T>
    concept is_uber_state = requires(T a)
    {
        { static_cast<double>(a) } -> std::same_as<double>;
        { static_cast<T>(0.0) } -> std::same_as<T>;
        api::uber_states::UberState().get<T>();
        api::uber_states::UberState().set<T>(a);
    };

    template<typename T>
    concept is_not_uber_state = !is_uber_state<T>;

    template<typename T>
    concept can_add = requires(T a) {
        { a + a } -> std::same_as<T>;
    };

    template<typename T>
    struct SetGet {
        using setter_fn_t = std::function<void(const T&)>;
        using getter_fn_t = std::function<T()>;

    private:
        setter_fn_t setter;
        getter_fn_t getter;

    public:
        SetGet(const setter_fn_t& setter, const getter_fn_t& getter) :
            setter(setter),
            getter(getter) {}

        void set(const T& value) const {
            setter(value);
        }

        T get() const {
            return getter();
        }
    };

    struct BaseProperty {
        void notify_changed() const {
            reactivity::notify_changed(reactivity::PropertyDependency(m_id));
        }

        void notify_used() const {
            reactivity::notify_used(reactivity::PropertyDependency(m_id));
        }

    protected:
        const unsigned int m_id = reactivity::reserve_property_id();
    };

    template<typename T>
    struct Property;
}

#include <Core/property/property_string.inl>
#include <Core/property/property_uber_state.inl>
#include <Core/property/property_non_uber_state.inl>

namespace core::reactivity::builder {
    template<typename T>
    AfterEffectBuilder EffectBuilder::effect(Property<T> const& property, const std::source_location& location) const {
        return effect([&property]{ [[maybe_unused]] auto out = property.get(); }, location);
    }

    template<typename T>
    AfterEffectBuilder BeforeEffectBuilder::effect(Property<T> const& property, const std::source_location& location) const {
        return effect([&property]{ [[maybe_unused]] auto out = property.get(); }, location);
    }
}

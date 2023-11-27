#pragma once

#include <Core/api/uber_states/uber_state.h>

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
    using getter = std::function<T()>;

    template<typename T>
    using setter = std::function<void(T const &)>;

    template<typename T>
    using set_get = std::tuple<setter<T>, getter<T>>;

    template<typename T>
    struct Property;
}

#include <Core/property/property_string.inl>
#include <Core/property/property_uber_state.inl>
#include <Core/property/property_non_uber_state.inl>

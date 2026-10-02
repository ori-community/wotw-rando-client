#pragma once

#include <Core/api/uber_states/uber_state_prelude.h>
#include <variant>

namespace core::reactivity {
    struct UberStateDependency {
        int group;
        int state;

        UberStateDependency(const int group, const int state) :
            group(group),
            state(state) {}

        UberStateDependency(const api::uber_states::UntypedUberId id) :
            group(id.group),
            state(id.member) {}

        auto operator<=>(const UberStateDependency&) const = default;
    };

    struct PropertyDependency {
        unsigned int id;

        auto operator<=>(const PropertyDependency&) const = default;
    };

    using dependency_t = std::variant<UberStateDependency, PropertyDependency>;
} // namespace core::reactivity

template<>
struct std::hash<core::reactivity::UberStateDependency> {
    std::size_t operator()(const core::reactivity::UberStateDependency& value) const noexcept { return value.group * 1000000000 + value.state; }
};

template<>
struct std::hash<core::reactivity::PropertyDependency> {
    std::size_t operator()(const core::reactivity::PropertyDependency& value) const noexcept { return value.id; }
};

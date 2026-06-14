#pragma once

#include <Core/api/uber_states/uber_state.h>
#include <Core/enums/text_id.h>
#include <variant>

namespace core::reactivity {
    enum class MemoryType {
        Bool,
        Int,
        Float,
        String,
    };

    struct UberStateDependency {
        int group;
        int state;

        UberStateDependency(const int group, const int state) :
            group(group),
            state(state) {}
        UberStateDependency(const UberStateGroup group, const int state) :
            group(static_cast<int>(group)),
            state(state) {}

        auto operator<=>(const UberStateDependency&) const = default;
    };

    struct TextDatabaseDependency {
        core::TextID id;

        auto operator<=>(const TextDatabaseDependency&) const = default;
    };

    struct PropertyDependency {
        unsigned int id;

        auto operator<=>(const PropertyDependency&) const = default;
    };

    using dependency_t = std::variant<UberStateDependency, TextDatabaseDependency, PropertyDependency>;
} // namespace core::reactivity

template<>
struct std::hash<core::reactivity::UberStateDependency> {
    std::size_t operator()(const core::reactivity::UberStateDependency& value) const noexcept { return value.group * 1000000000 + value.state; }
};

template<>
struct std::hash<core::reactivity::TextDatabaseDependency> {
    std::size_t operator()(const core::reactivity::TextDatabaseDependency& value) const noexcept { return static_cast<std::size_t>(value.id); }
};

template<>
struct std::hash<core::reactivity::PropertyDependency> {
    std::size_t operator()(const core::reactivity::PropertyDependency& value) const noexcept { return value.id; }
};

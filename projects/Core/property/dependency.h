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

    struct MemoryDependency {
        MemoryType type;
        int id;

        template<typename T>
        static MemoryType resolve_type() { throw std::runtime_error("Unsupported type"); }

        auto operator<=>(const MemoryDependency&) const = default;
    };

    template<>
    inline MemoryType MemoryDependency::resolve_type<bool>() { return MemoryType::Bool; }

    template<>
    inline MemoryType MemoryDependency::resolve_type<char>() { return MemoryType::Bool; }

    template<>
    inline MemoryType MemoryDependency::resolve_type<int>() { return MemoryType::Int; }

    template<>
    inline MemoryType MemoryDependency::resolve_type<float>() { return MemoryType::Float; }

    template<>
    inline MemoryType MemoryDependency::resolve_type<std::string>() { return MemoryType::String; }

    struct TextDatabaseDependency {
        core::TextID id;

        auto operator<=>(const TextDatabaseDependency&) const = default;
    };

    struct PropertyDependency {
        unsigned int id;

        auto operator<=>(const PropertyDependency&) const = default;
    };

    using dependency_t = std::variant<UberStateDependency, MemoryDependency, TextDatabaseDependency, PropertyDependency>;
} // namespace core::reactivity

template<>
struct std::hash<core::reactivity::UberStateDependency> {
    std::size_t operator()(const core::reactivity::UberStateDependency& value) const noexcept { return value.group * 1000000000 + value.state; }
};

template<>
struct std::hash<core::reactivity::MemoryDependency> {
    std::size_t operator()(const core::reactivity::MemoryDependency& value) const noexcept { return static_cast<std::size_t>(value.type) * 1000000000 + value.id; }
};

template<>
struct std::hash<core::reactivity::TextDatabaseDependency> {
    std::size_t operator()(const core::reactivity::TextDatabaseDependency& value) const noexcept { return static_cast<std::size_t>(value.id); }
};

template<>
struct std::hash<core::reactivity::PropertyDependency> {
    std::size_t operator()(const core::reactivity::PropertyDependency& value) const noexcept { return value.id; }
};

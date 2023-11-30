#pragma once

#include <variant>
#include <memory>
#include <unordered_set>
#include <functional>
#include <xhash>

#include <Core/macros.h>

#include <Core/enums/static_text_entries.h>

namespace core::reactivity {
    struct UberStateDependency {
        int group;
        int state;

        auto operator<=>(const UberStateDependency&) const = default;
    };

    struct TextDatabaseDependency {
        text_id id;

        auto operator<=>(const TextDatabaseDependency&) const = default;
    };

    using Dependency = std::variant<
        UberStateDependency,
        TextDatabaseDependency
    >;
}

template <>
    struct std::hash<core::reactivity::UberStateDependency> {
    std::size_t operator()(const core::reactivity::UberStateDependency& value) const noexcept {
        return value.group * 1000000000 + value.state;
    }
};

template <>
    struct std::hash<core::reactivity::TextDatabaseDependency> {
    std::size_t operator()(const core::reactivity::TextDatabaseDependency& value) const noexcept {
        return value.id;
    }
};

namespace core::reactivity {
    struct ReactiveEffect {
        std::unordered_set<Dependency> dependencies;
        std::function<void()> effect_function;
    };

    template<typename T>
    std::pair<T, std::shared_ptr<ReactiveEffect>> watch_effect(const std::function<T()>& effect_function) {
        T output;

        std::shared_ptr<ReactiveEffect> ref = watch_effect([&output, &effect_function] {
            output = watch_effect(effect_function);
        });

        return std::make_pair(output, ref);
    }

    CORE_DLLEXPORT std::shared_ptr<ReactiveEffect> watch_effect(const std::function<void()>& compute_function);

    /**
     * \brief Notify the reactivity systen that a dependency was used
     * \param dependency The Dependency being used
     */
    CORE_DLLEXPORT void notify_used(const Dependency& dependency);

    /**
     * \brief Notify the reactivity system that a dependency changed
     * \param dependency The dependency that changed
     */
    CORE_DLLEXPORT void notify_changed(const Dependency& dependency);
}

struct WeakPtrCompare {
    bool operator()(const std::weak_ptr<core::reactivity::ReactiveEffect>&lhs, const std::weak_ptr<core::reactivity::ReactiveEffect>&rhs) const {
        const auto left_ptr = lhs.lock();
        const auto right_ptr = rhs.lock();

        if (!right_ptr) {
            return false; // nothing after expired pointer
        }

        if (!left_ptr) {
            return true; // every not expired after expired pointer
        }

        return &(*left_ptr) < &(*right_ptr);
    }
};

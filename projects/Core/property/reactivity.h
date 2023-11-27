#pragma once

#include <variant>
#include <memory>
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

    using OnChangedCallback = std::function<void()>;
    using Dependency = std::variant<
        UberStateDependency,
        TextDatabaseDependency
    >;

    /**
     * \brief Start a new tracking context which tracks dependencies until `pop_tracking_context` is called.
     */
    CORE_DLLEXPORT void push_tracking_context();


    /**
     * \brief Stop the current tracking context
     * \param on_changed_callback Callback to run when any dependency changed
     */
    CORE_DLLEXPORT void pop_tracking_context(const std::shared_ptr<OnChangedCallback>& on_changed_callback);

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
    bool operator() (const std::weak_ptr<core::reactivity::OnChangedCallback> &lhs, const std::weak_ptr<core::reactivity::OnChangedCallback> &rhs)const {
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


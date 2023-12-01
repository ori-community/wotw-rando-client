#pragma once

#include <variant>
#include <memory>
#include <unordered_set>
#include <functional>
#include <xhash>

#include <Core/macros.h>

#include <Core/enums/static_text_entries.h>

#include <Common/event_bus.h>

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

    struct PropertyDependency {
        unsigned int id;

        auto operator<=>(const PropertyDependency&) const = default;
    };

    using dependency_t = std::variant<
        UberStateDependency,
        TextDatabaseDependency,
        PropertyDependency
    >;
}

template<>
struct std::hash<core::reactivity::UberStateDependency> {
    std::size_t operator()(const core::reactivity::UberStateDependency& value) const noexcept {
        return value.group * 1000000000 + value.state;
    }
};

template<>
struct std::hash<core::reactivity::TextDatabaseDependency> {
    std::size_t operator()(const core::reactivity::TextDatabaseDependency& value) const noexcept {
        return value.id;
    }
};

template<>
struct std::hash<core::reactivity::PropertyDependency> {
    std::size_t operator()(const core::reactivity::PropertyDependency& value) const noexcept {
        return value.id;
    }
};

namespace core::reactivity {
    struct ReactiveEffect {
        std::unordered_set<dependency_t> dependencies;
        std::function<void()> before_function = nullptr;
        std::function<void()> effect_function = nullptr;
        std::function<void()> after_function = nullptr;
    };

    namespace builder {
        class BeforeEffectBuilder;
        class EffectBuilder;
        class AfterEffectBuilder; // (c) Adobe Corporation
        class FinalizeOnlyBuilder;
    }

    CORE_DLLEXPORT builder::BeforeEffectBuilder watch_effect();
    CORE_DLLEXPORT std::shared_ptr<ReactiveEffect> watch_effect(const std::function<void()>& func);

    namespace builder {
        class CORE_DLLEXPORT FinalizeOnlyBuilder {
        public:
            friend class AfterEffectBuilder;

            std::shared_ptr<ReactiveEffect> finalize() { return m_effect; }

        private:
            explicit FinalizeOnlyBuilder(const std::shared_ptr<ReactiveEffect>& effect) :
                m_effect(effect) {
            }

            std::shared_ptr<ReactiveEffect> m_effect;
        };

        class CORE_DLLEXPORT AfterEffectBuilder {
        public:
            friend class EffectBuilder;

            FinalizeOnlyBuilder after(const std::function<void()>& func) const;

            std::shared_ptr<ReactiveEffect> finalize() { return m_effect; }

        private:
            explicit AfterEffectBuilder(const std::shared_ptr<ReactiveEffect>& effect) :
                m_effect(effect) {
            }

            std::shared_ptr<ReactiveEffect> m_effect;
        };

        class CORE_DLLEXPORT EffectBuilder {
        public:
            friend class BeforeEffectBuilder;

            AfterEffectBuilder effect(const std::function<void()>& func) const;

            std::shared_ptr<ReactiveEffect> finalize() { return m_effect; }

        private:
            explicit EffectBuilder(const std::shared_ptr<ReactiveEffect>& effect) :
                m_effect(effect) {
            }

            std::shared_ptr<ReactiveEffect> m_effect;
        };

        class CORE_DLLEXPORT BeforeEffectBuilder {
        public:
            friend BeforeEffectBuilder reactivity::watch_effect();

            EffectBuilder before(const std::function<void()>& func) const;

            AfterEffectBuilder effect(const std::function<void()>& func) const;

        private:
            BeforeEffectBuilder() {
            }

            std::shared_ptr<ReactiveEffect> m_effect;
        };
    }

    /**
     * \brief Notify the reactivity systen that a dependency was used
     * \param dependency The Dependency being used
     */
    CORE_DLLEXPORT void notify_used(const dependency_t& dependency);

    /**
     * \brief Notify the reactivity system that a dependency changed
     * \param dependency The dependency that changed
     */
    CORE_DLLEXPORT void notify_changed(const dependency_t& dependency);

    /**
     * \brief Reserves a unique ID for a Property<T>
     * \return Reserved ID
     */
    CORE_DLLEXPORT unsigned int reserve_property_id();
}

struct WeakPtrCompare {
    bool operator()(const std::weak_ptr<core::reactivity::ReactiveEffect>& lhs, const std::weak_ptr<core::reactivity::ReactiveEffect>& rhs) const {
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

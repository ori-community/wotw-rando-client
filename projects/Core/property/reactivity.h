#pragma once

#include <functional>
#include <memory>
#include <source_location>
#include <unordered_set>
#include <variant>

#include <Core/macros.h>

#include <Core/enums/static_text_entries.h>

#include <Common/event_bus.h>

namespace core {
    template<typename T>
    struct Property;
}

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

    using dependency_t = std::variant<UberStateDependency, TextDatabaseDependency, PropertyDependency>;
} // namespace core::reactivity

template<>
struct std::hash<core::reactivity::UberStateDependency> {
    std::size_t operator()(const core::reactivity::UberStateDependency& value) const noexcept { return value.group * 1000000000 + value.state; }
};

template<>
struct std::hash<core::reactivity::TextDatabaseDependency> {
    std::size_t operator()(const core::reactivity::TextDatabaseDependency& value) const noexcept { return value.id; }
};

template<>
struct std::hash<core::reactivity::PropertyDependency> {
    std::size_t operator()(const core::reactivity::PropertyDependency& value) const noexcept { return value.id; }
};

namespace core::reactivity {
    struct ReactiveEffect {
        std::source_location effect_register_location;
        std::unordered_set<dependency_t> dependencies;
        std::function<void()> before_function = nullptr;
        std::function<void()> effect_function = nullptr;
        std::function<void()> after_function = nullptr;
        bool trigger_on_load = false;
    };

    namespace builder {
        class BeforeEffectBuilder;
        class EffectBuilder;
        class AfterEffectBuilder; // (c) Adobe Corporation
        class FinalizeOnlyBuilder;
    } // namespace builder

    class CORE_DLLEXPORT ScopedTrackingBlocker {
    public:
        ScopedTrackingBlocker();
        ~ScopedTrackingBlocker();

    private:
        size_t m_index;
    };

    CORE_DLLEXPORT builder::BeforeEffectBuilder watch_effect();
    CORE_DLLEXPORT std::shared_ptr<ReactiveEffect> watch_effect(
        const std::function<void()>& func,
        const std::source_location& location = std::source_location::current()
    );

    namespace builder {
        class CORE_DLLEXPORT HasEffect {
        protected:
            explicit HasEffect(const std::shared_ptr<ReactiveEffect>& effect) :
                m_effect(effect) {}

            /**
             * \brief Registers this effect with the trigger_on_load system if enabled
             */
            void register_trigger_on_load() const;

            HasEffect() {}

            std::shared_ptr<ReactiveEffect> m_effect;
        };

        class CORE_DLLEXPORT FinalizeOnlyBuilder : public HasEffect {
        public:
            friend class AfterEffectBuilder;

            FinalizeOnlyBuilder& trigger_on_load() {
                m_effect->trigger_on_load = true;
                return *this;
            }

            std::shared_ptr<ReactiveEffect> finalize() {
                register_trigger_on_load();
                return m_effect;
            }

            void finalize_inplace(std::shared_ptr<ReactiveEffect>& ptr) const {
                register_trigger_on_load();
                ptr = m_effect;
            }

            template<typename Container>
            void finalize(Container& c) {
                register_trigger_on_load();
                return c.push_back(m_effect);
            }

        private:
            explicit FinalizeOnlyBuilder(const std::shared_ptr<ReactiveEffect>& effect) :
                HasEffect(effect) {}
        };

        class CORE_DLLEXPORT AfterEffectBuilder : public HasEffect {
        public:
            friend class EffectBuilder;

            AfterEffectBuilder& trigger_on_load() {
                m_effect->trigger_on_load = true;
                return *this;
            }

            FinalizeOnlyBuilder after(const std::function<void()>& func) const;

            std::shared_ptr<ReactiveEffect> finalize() {
                register_trigger_on_load();
                return m_effect;
            }
            void finalize_inplace(std::shared_ptr<ReactiveEffect>& ptr) const {
                register_trigger_on_load();
                ptr = m_effect;
            }

            template<typename Container>
            void finalize(Container& c) {
                register_trigger_on_load();
                return c.push_back(m_effect);
            }

        private:
            explicit AfterEffectBuilder(const std::shared_ptr<ReactiveEffect>& effect) :
                HasEffect(effect) {}
        };

        class CORE_DLLEXPORT EffectBuilder : public HasEffect {
        public:
            friend class BeforeEffectBuilder;

            EffectBuilder& trigger_on_load() {
                m_effect->trigger_on_load = true;
                return *this;
            }

            template<typename T>
            AfterEffectBuilder effect(Property<T> const& property, const std::source_location& location = std::source_location::current()) const;
            AfterEffectBuilder effect(std::vector<api::uber_states::UberState> const& states, const std::source_location& location = std::source_location::current()) const;
            AfterEffectBuilder effect(std::function<void()> const& func, const std::source_location& location = std::source_location::current()) const;

            std::shared_ptr<ReactiveEffect> finalize() {
                register_trigger_on_load();
                return m_effect;
            }
            void finalize_inplace(std::shared_ptr<ReactiveEffect>& ptr) const {
                register_trigger_on_load();
                ptr = m_effect;
            }

            template<typename Container>
            void finalize(Container& c) {
                register_trigger_on_load();
                return c.push_back(m_effect);
            }

        private:
            explicit EffectBuilder(const std::shared_ptr<ReactiveEffect>& effect) :
                HasEffect(effect) {}
        };

        class CORE_DLLEXPORT BeforeEffectBuilder : public HasEffect {
        public:
            friend BeforeEffectBuilder reactivity::watch_effect();

            BeforeEffectBuilder& trigger_on_load() {
                m_effect->trigger_on_load = true;
                return *this;
            }

            EffectBuilder before(std::function<void()> const& func) const;

            template<typename T>
            AfterEffectBuilder effect(Property<T> const& property, const std::source_location& location = std::source_location::current()) const;
            AfterEffectBuilder effect(std::vector<api::uber_states::UberState> const& states, const std::source_location& location = std::source_location::current()) const;
            AfterEffectBuilder effect(std::function<void()> const& func, const std::source_location& location = std::source_location::current()) const;

        private:
            BeforeEffectBuilder() {}
        };
    } // namespace builder

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
} // namespace core::reactivity

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

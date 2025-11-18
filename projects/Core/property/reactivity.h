#pragma once

#include <functional>
#include <memory>
#include <source_location>
#include <unordered_set>
#include <variant>

#include <Core/macros.h>

#include <Core/api/uber_states/uber_state.h>
#include <Core/enums/text_id.h>

#include <Common/event_bus.h>

namespace core {
    template<typename T>
    struct Property;
}

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

namespace core::reactivity {
    struct ReactiveEffect {
        using id_t = size_t;

        id_t id;
        std::source_location effect_register_location;
        std::unordered_set<dependency_t> dependencies;
        std::function<void()> before_function = nullptr;
        std::function<void()> effect_function = nullptr;
        std::function<void()> after_function = nullptr;
        std::vector<std::function<void()>> after_effect_fns;
        bool trigger_on_load = false;

        ReactiveEffect();

        void run_and_flush_after_effect_fns() {
            // We make a copy here and clear the queue immediately, because after_effect_fns can
            // invoke the same effect again that they originated from, resulting in a recursive
            // infinite loop (stack overflow)
            const auto queued_after_effect_fns = std::move(after_effect_fns);
            after_effect_fns = std::vector<std::function<void()>>();

            for (auto & after_effect_fn: queued_after_effect_fns) {
                after_effect_fn();
            }
        }
    };

    namespace builder {
        class BeforeEffectBuilder;
        class EffectBuilder;
        class AfterEffectBuilder; // (c) Adobe Corporation
        class FinalizeOnlyBuilder;
    } // namespace builder

    class CORE_DLLEXPORT ScopedReactivityBlocker {
    public:
        ScopedReactivityBlocker();
        ~ScopedReactivityBlocker();

    private:
        size_t m_index;
    };

    CORE_DLLEXPORT builder::BeforeEffectBuilder watch_effect();
    CORE_DLLEXPORT std::shared_ptr<const ReactiveEffect> watch_effect(
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
            void finalize_effect() const;

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

            std::shared_ptr<const ReactiveEffect> finalize() {
                finalize_effect();
                return m_effect;
            }

            void finalize_inplace(std::shared_ptr<const ReactiveEffect>& ptr) const {
                finalize_effect();
                ptr = m_effect;
            }

            template<typename Container>
            void finalize(Container& c) {
                finalize_effect();
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

            std::shared_ptr<const ReactiveEffect> finalize() {
                finalize_effect();
                return m_effect;
            }

            void finalize_inplace(std::shared_ptr<const ReactiveEffect>& ptr) const {
                finalize_effect();
                ptr = m_effect;
            }

            template<typename Container>
            void finalize(Container& c) {
                finalize_effect();
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

            std::shared_ptr<const ReactiveEffect> finalize() {
                finalize_effect();
                return m_effect;
            }
            void finalize_inplace(std::shared_ptr<const ReactiveEffect>& ptr) const {
                finalize_effect();
                ptr = m_effect;
            }

            template<typename Container>
            void finalize(Container& c) {
                finalize_effect();
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

    /**
     * Schedule a function to run at the end of the current effect notification queue.
     * It does NOT wait for parent effect notification queues to finish!
     * Can only be called while being inside a reactive effect context.
     */
    CORE_DLLEXPORT void run_after_effects(const std::function<void()>& fn);

    /**
     * Returns true if the current effect was run by a trigger_on_load trigger.
     */
    CORE_DLLEXPORT bool is_effect_running_because_of_trigger_on_load();
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

#pragma once

#include <functional>
#include <memory>
#include <source_location>
#include <unordered_set>
#include <variant>

#include <Core/macros.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/property/dependency.h>
#include <Common/event_bus.h>

namespace core {
    template<typename T>
    struct Property;
    struct BaseProperty;
}

namespace core::reactivity {
    struct ReactiveEffect {
        using id_t = size_t;
        using ptr_t = std::shared_ptr<const ReactiveEffect>;

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
    CORE_DLLEXPORT ReactiveEffect::ptr_t watch_effect(
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

            static void set_effect_dependencies(const std::shared_ptr<ReactiveEffect>& effect, const std::unordered_set<dependency_t>& dependencies);

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

            ReactiveEffect::ptr_t finalize() {
                finalize_effect();
                return m_effect;
            }

            void finalize_inplace(ReactiveEffect::ptr_t& ptr) const {
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
            friend class BeforeEffectBuilder;

            AfterEffectBuilder& trigger_on_load() {
                m_effect->trigger_on_load = true;
                return *this;
            }

            FinalizeOnlyBuilder after(const std::function<void()>& func) const;

            ReactiveEffect::ptr_t finalize() {
                finalize_effect();
                return m_effect;
            }

            void finalize_inplace(ReactiveEffect::ptr_t& ptr) const {
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
            AfterEffectBuilder effect(const Property<T>& property, const std::source_location& location = std::source_location::current()) const {
                set_effect_dependencies(m_effect, {property.get_dependency()});
                m_effect->effect_register_location = location;
                return AfterEffectBuilder(m_effect);
            }
            AfterEffectBuilder effect(const BaseProperty*& property, const std::source_location& location = std::source_location::current()) const;
            AfterEffectBuilder effect(const std::vector<const BaseProperty*>& properties, const std::source_location& location = std::source_location::current()) const;
            AfterEffectBuilder effect(std::vector<api::uber_states::UberState> const& states, const std::source_location& location = std::source_location::current()) const;
            AfterEffectBuilder effect(std::function<void()> const& func, const std::source_location& location = std::source_location::current()) const;

            ReactiveEffect::ptr_t finalize() {
                finalize_effect();
                return m_effect;
            }
            void finalize_inplace(ReactiveEffect::ptr_t& ptr) const {
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
            AfterEffectBuilder effect(const Property<T>& property, const std::source_location& location = std::source_location::current()) const {
                set_effect_dependencies(m_effect, {property.get_dependency()});
                m_effect->effect_register_location = location;
                return AfterEffectBuilder(m_effect);
            }
            AfterEffectBuilder effect(const BaseProperty*& property, const std::source_location& location = std::source_location::current()) const;
            AfterEffectBuilder effect(const std::vector<const BaseProperty*>& properties, const std::source_location& location = std::source_location::current()) const;
            AfterEffectBuilder effect(std::vector<core::api::uber_states::UberState> const& states, const std::source_location& location = std::source_location::current()) const;
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

    /**
     * Returns true if an effect is currently being set up (inside before(), effect() or after())
     */
    CORE_DLLEXPORT bool is_in_effect_setup();
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

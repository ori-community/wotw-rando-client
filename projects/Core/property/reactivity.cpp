#include <functional>
#include <set>
#include <unordered_set>
#include <stack>

#include <Core/id_registry.h>
#include <Core/property.h>
#include <Core/api/game/game.h>
#include <Core/property/reactivity.h>

#include <Modloader/app/methods/UberGCManager.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

namespace core::reactivity {
    struct TrackingContext {
        ReactiveEffect& effect;
        std::unordered_set<dependency_t> dependencies;
    };

    struct DependencyTracker {
        unsigned int next_property_id = 0;
        std::vector<TrackingContext> active_tracking_contexts;
        std::multiset<size_t> reactivity_blockers;
        std::unordered_map<dependency_t, std::set<std::weak_ptr<ReactiveEffect>, WeakPtrCompare>> effects_by_dependency;
        std::set<std::weak_ptr<ReactiveEffect>, WeakPtrCompare> trigger_on_load_effects;
    };

    bool is_in_effect_setup = false;  // True when we are currently inside before(), effect() or after() during effect setup
    std::shared_ptr<ReactiveEffect> currently_running_effect = nullptr;  // Contains the currently running effect or nullptr, if no effect is running
    bool is_running_trigger_on_load_effects = false;

    auto& dependency_tracker() {
        static DependencyTracker tracker;
        return tracker;
    }

    ScopedReactivityBlocker::ScopedReactivityBlocker()
        : m_index(dependency_tracker().active_tracking_contexts.size()) {
        dependency_tracker().reactivity_blockers.emplace(m_index);
    }

    ScopedReactivityBlocker::~ScopedReactivityBlocker() {
        auto& reactivity_blockers = dependency_tracker().reactivity_blockers;
        reactivity_blockers.erase(reactivity_blockers.find(m_index));
    }

    /**
     * \brief Start a new tracking context which tracks dependencies until `pop_tracking_context` is called.
     */
    void push_tracking_context(const std::shared_ptr<ReactiveEffect>& ref) {
        dependency_tracker().active_tracking_contexts.emplace_back(*ref);
    }

    /**
     * \brief Stop the current tracking context
     * \param ref The ComputedRef dependencies should get inserted into
     */
    void pop_tracking_context(const std::shared_ptr<ReactiveEffect>& ref) {
        for (const auto& [_, dependencies]: dependency_tracker().active_tracking_contexts) {
            for (const auto& dependency: dependencies) {
                dependency_tracker().effects_by_dependency[dependency].emplace(std::weak_ptr(ref));
                ref->dependencies.insert(dependency);
            }
        }

        dependency_tracker().active_tracking_contexts.pop_back();
        auto const& reactivity_blockers = dependency_tracker().reactivity_blockers;
        if (!reactivity_blockers.empty() && *dependency_tracker().reactivity_blockers.rbegin() > dependency_tracker().active_tracking_contexts.size()) {
            throw std::exception("Popped tracking context past blocker, ScopedReactivityBlocker kept alive past scope.");
        }
    }

    builder::FinalizeOnlyBuilder builder::AfterEffectBuilder::after(const std::function<void()>& func) const {
        modloader::ScopedSetter _(is_in_effect_setup, true);
        m_effect->after_function = func;
        func();
        return FinalizeOnlyBuilder(m_effect);
    }

    builder::AfterEffectBuilder builder::EffectBuilder::effect(const std::function<void()>& func, const std::source_location& location) const {
        modloader::ScopedSetter _(is_in_effect_setup, true);
        m_effect->effect_function = func;
        m_effect->effect_register_location = location;

        push_tracking_context(m_effect);
        try {
            func();
        } catch (...) {
            pop_tracking_context(m_effect);
            throw;
        }
        pop_tracking_context(m_effect);

        return AfterEffectBuilder(m_effect);
    }

    builder::AfterEffectBuilder builder::EffectBuilder::effect(std::vector<api::uber_states::UberState> const& states, const std::source_location& location) const {
        return effect([states]() {
            for (auto state: states) {
                [[maybe_unused]] auto x = state.get();
            }
        }, location);
    }

    builder::AfterEffectBuilder builder::BeforeEffectBuilder::effect(const std::function<void()>& func, const std::source_location& location) const {
        return EffectBuilder(m_effect).effect(func, location);
    }

    builder::AfterEffectBuilder builder::BeforeEffectBuilder::effect(std::vector<api::uber_states::UberState> const& states, const std::source_location& location) const {
        return effect([states]() {
            for (auto state: states) {
                [[maybe_unused]] auto x = state.get();
            }
        }, location);
    }

    builder::EffectBuilder builder::BeforeEffectBuilder::before(const std::function<void()>& func) const {
        modloader::ScopedSetter _(is_in_effect_setup, true);
        m_effect->before_function = func;
        func();
        return EffectBuilder(m_effect);
    }

    builder::BeforeEffectBuilder watch_effect() {
        builder::BeforeEffectBuilder pre;
        pre.m_effect = std::make_shared<ReactiveEffect>();
        return pre;
    }

    std::shared_ptr<const ReactiveEffect> watch_effect(const std::function<void()>& func, const std::source_location& location) {
        return watch_effect().effect(func, location).finalize();
    }

    /**
     * Registers effects with trigger_on_load if enabled and
     * flushes the local after_effect_fns queue.
     */
    void builder::HasEffect::finalize_effect() const {
        if (m_effect->trigger_on_load) {
            dependency_tracker().trigger_on_load_effects.emplace(std::weak_ptr(m_effect));
        }

        m_effect->run_and_flush_after_effect_fns();
    }

    void notify_used(const dependency_t& dependency) {
        if (dependency_tracker().active_tracking_contexts.empty()) {
            return;
        }

        auto const& reactivity_blockers = dependency_tracker().reactivity_blockers;
        if (!reactivity_blockers.empty() && *dependency_tracker().reactivity_blockers.rbegin() == dependency_tracker().active_tracking_contexts.size()) {
            return;
        }

        dependency_tracker().active_tracking_contexts.back().dependencies.emplace(dependency);
    }

    void run_effects(const std::set<std::weak_ptr<ReactiveEffect>, WeakPtrCompare>& effects) {
        std::vector<std::shared_ptr<ReactiveEffect>> processed_effects;
        processed_effects.reserve(effects.size());

        for (const auto& effect_ptr: effects) {
            if (!effect_ptr.expired()) {
                auto effect = effect_ptr.lock();
                processed_effects.push_back(effect);

                modloader::ScopedSetter _(currently_running_effect, effect);

                if (effect->before_function != nullptr) {
                    effect->before_function();
                }

                push_tracking_context(effect);
                try {
                    effect->effect_function();
                } catch (...) {
                    pop_tracking_context(effect);

                    // On error, clear previously collected after_effect_fns
                    for (auto& processed_effect : processed_effects) {
                        processed_effect->after_effect_fns.clear();
                    }
                    throw;
                }
                pop_tracking_context(effect);

                if (effect->after_function != nullptr) {
                    effect->after_function();
                }
            }
        }

        // Run all after_effect_fns
        for (auto& processed_effect : processed_effects) {
            processed_effect->run_and_flush_after_effect_fns();
        }
    }

    void run_trigger_on_load_effects() {
        modloader::ScopedSetter _(is_running_trigger_on_load_effects, true);
        run_effects(dependency_tracker().trigger_on_load_effects);
    }

    bool is_effect_running_because_of_trigger_on_load() {
        if (!is_in_effect_setup && currently_running_effect == nullptr) {
            throw new std::exception("Cannot call is_effect_running_because_of_trigger_on_load outside an active effect context");
        }

        return is_running_trigger_on_load_effects;
    }

    void notify_changed(const dependency_t& dependency) {
        auto const& reactivity_blockers = dependency_tracker().reactivity_blockers;
        auto const& active_contexts = dependency_tracker().active_tracking_contexts;
        if (!reactivity_blockers.empty() && *reactivity_blockers.rbegin() == active_contexts.size()) {
            return;
        }

        if (!active_contexts.empty()) {
            throw std::exception("Dependencies must not be changed inside a non-blocked reactive effect");
        }

        const auto effects_it = dependency_tracker().effects_by_dependency.find(dependency);

        if (effects_it == dependency_tracker().effects_by_dependency.end()) {
            return;
        }

        const auto effects = effects_it->second;
        run_effects(effects);
    }

    unsigned int reserve_property_id() {
        return ++dependency_tracker().next_property_id;
    }

    void run_after_effects(const std::function<void()>& fn) {
        if (!is_in_effect_setup && currently_running_effect == nullptr) {
            throw new std::exception("Cannot call run_after_effects outside an active effect context");
        }

        currently_running_effect->after_effect_fns.push_back(fn);
    }

    /**
     * \brief Garbage collect any expired callback and remove them from the watchers
     */
    void garbage_collect() {
        auto effect_collection_it = dependency_tracker().effects_by_dependency.begin();

        while (effect_collection_it != dependency_tracker().effects_by_dependency.end()) {
            auto effects_it = effect_collection_it->second.begin();

            while (effects_it != effect_collection_it->second.end()) {
                if (effects_it->expired()) {
                    effects_it = effect_collection_it->second.erase(effects_it);
                } else {
                    ++effects_it;
                }
            }

            if (effect_collection_it->second.empty()) {
                effect_collection_it = dependency_tracker().effects_by_dependency.erase(effect_collection_it);
            } else {
                ++effect_collection_it;
            }
        }

        auto trigger_on_load_effects_it = dependency_tracker().trigger_on_load_effects.begin();

        while (trigger_on_load_effects_it != dependency_tracker().trigger_on_load_effects.end()) {
            if (trigger_on_load_effects_it->expired()) {
                trigger_on_load_effects_it = dependency_tracker().trigger_on_load_effects.erase(trigger_on_load_effects_it);
            } else {
                ++trigger_on_load_effects_it;
            }
        }
    }

    IL2CPP_INTERCEPT(void, UberGCManager, RunGC, bool is_debug) {
        next::UberGCManager::RunGC(is_debug);
        garbage_collect();
    }

    auto on_load = api::game::event_bus().register_handler(GameEvent::UberStateValueStoreLoaded, EventTiming::After, [](auto, auto) {
        run_trigger_on_load_effects();
    });

    auto on_new_game_initialized = api::game::event_bus().register_handler(GameEvent::NewGameInitialized, EventTiming::After, [](auto, auto) {
        run_trigger_on_load_effects();
    });
}

#include <functional>
#include <set>
#include <unordered_set>

#include <Core/id_registry.h>
#include <Core/property.h>
#include <Core/property/reactivity.h>

#include <Modloader/app/methods/UberGCManager.h>
#include <Modloader/interception_macros.h>

namespace core::reactivity {
    struct TrackingContext {
        ReactiveEffect& effect;
        std::unordered_set<dependency_t> dependencies;
    };

    struct DependencyTracker {
        unsigned int next_property_id = 0;
        std::vector<TrackingContext> active_tracking_contexts;
        std::unordered_map<dependency_t, std::set<std::weak_ptr<ReactiveEffect>, WeakPtrCompare>> effects_by_dependency;
    };

    auto& dependency_tracker() {
        static DependencyTracker tracker;
        return tracker;
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
    }

    builder::FinalizeOnlyBuilder builder::AfterEffectBuilder::after(const std::function<void()>& func) const {
        m_effect->after_function = func;
        func();
        return FinalizeOnlyBuilder(m_effect);
    }

    builder::AfterEffectBuilder builder::EffectBuilder::effect(const std::function<void()>& func, const std::source_location& location) const {
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

    builder::AfterEffectBuilder builder::BeforeEffectBuilder::effect(const std::function<void()>& func, const std::source_location& location) const {
        return EffectBuilder(m_effect).effect(func, location);
    }

    builder::EffectBuilder builder::BeforeEffectBuilder::before(const std::function<void()>& func) const {
        m_effect->before_function = func;
        func();
        return EffectBuilder(m_effect);
    }

    builder::BeforeEffectBuilder watch_effect() {
        builder::BeforeEffectBuilder pre;
        pre.m_effect = std::make_shared<ReactiveEffect>();
        return pre;
    }

    std::shared_ptr<ReactiveEffect> watch_effect(const std::function<void()>& func, const std::source_location& location) {
        return watch_effect().effect(func, location).finalize();
    }

    void notify_used(const dependency_t& dependency) {
        if (dependency_tracker().active_tracking_contexts.empty()) {
            return;
        }

        dependency_tracker().active_tracking_contexts.back().dependencies.emplace(dependency);
    }

    void notify_changed(const dependency_t& dependency) {
        if (!dependency_tracker().active_tracking_contexts.empty()) {
            auto active_contexts = dependency_tracker().active_tracking_contexts;
            throw std::exception("Dependencies must not be changed inside a reactive effect");
        }

        const auto refs_it = dependency_tracker().effects_by_dependency.find(dependency);

        if (refs_it == dependency_tracker().effects_by_dependency.end()) {
            return;
        }

        const auto refs = refs_it->second;
        for (const auto& ref_ptr: refs) {
            if (!ref_ptr.expired()) {
                auto effect = ref_ptr.lock();

                if (effect->before_function != nullptr) {
                    effect->before_function();
                };

                push_tracking_context(effect);
                try {
                    effect->effect_function();
                } catch (...) {
                    pop_tracking_context(effect);
                    throw;
                }
                pop_tracking_context(effect);

                if (effect->after_function != nullptr) {
                    effect->after_function();
                }
            }
        }
    }

    unsigned int reserve_property_id() {
        return ++dependency_tracker().next_property_id;
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
    }

    IL2CPP_INTERCEPT(UberGCManager, void, RunGC, (bool is_debug)) {
        next::UberGCManager::RunGC(is_debug);
        garbage_collect();
    }
}

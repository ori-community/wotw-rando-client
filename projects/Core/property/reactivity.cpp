#include <Core/property/reactivity.h>
#include <functional>
#include <set>
#include <unordered_set>

#include <Modloader/app/methods/UberGCManager.h>
#include <Modloader/interception_macros.h>

#include "id_registry.h"

namespace core::reactivity {
    struct TrackingContext {
        std::unordered_set<dependency_t> dependencies;
    };

    unsigned int next_property_id = 0;
    std::vector<TrackingContext> active_tracking_contexts;
    std::unordered_map<dependency_t, std::set<std::weak_ptr<ReactiveEffect>, WeakPtrCompare>> effects_by_dependency;

    /**
     * \brief Start a new tracking context which tracks dependencies until `pop_tracking_context` is called.
     */
    void push_tracking_context() {
        active_tracking_contexts.emplace_back();
    }

    /**
     * \brief Stop the current tracking context
     * \param ref The ComputedRef dependencies should get inserted into
     */
    void pop_tracking_context(const std::shared_ptr<ReactiveEffect>& ref) {
        for (const auto& [dependencies] : active_tracking_contexts) {
            for (const auto& dependency : dependencies) {
                effects_by_dependency[dependency].emplace(std::weak_ptr(ref));
                ref->dependencies.insert(dependency);
            }
        }

        active_tracking_contexts.pop_back();
    }

    std::shared_ptr<ReactiveEffect> watch_effect(const std::function<void()>& compute_function) {
        auto effect = std::make_shared<ReactiveEffect>();
        effect->effect_function = compute_function;

        push_tracking_context();
        compute_function();
        pop_tracking_context(effect);

        return effect;
    }

    void notify_used(const dependency_t& dependency) {
        if (active_tracking_contexts.empty()) {
            return;
        }

        active_tracking_contexts.back().dependencies.emplace(dependency);
    }

    void notify_changed(const dependency_t& dependency) {
        const auto refs = effects_by_dependency[dependency];
        for (const auto & ref_ptr : refs) {
            if (!ref_ptr.expired()) {
                auto effect = ref_ptr.lock();

                effect->on_change.trigger_event(EventTiming::Before);
                push_tracking_context();
                effect->effect_function();
                pop_tracking_context(effect);
                effect->on_change.trigger_event(EventTiming::After);
            }
        }
    }

    unsigned int reserve_property_id() {
        return ++next_property_id;
    }

    /**
     * \brief Garbage collect any expired callback and remove them from the watchers
     */
    void garbage_collect() {
        auto effect_collection_it = effects_by_dependency.begin();

        while (effect_collection_it != effects_by_dependency.end()) {
            auto effects_it = effect_collection_it->second.begin();

            while (effects_it != effect_collection_it->second.end()) {
                if (effects_it->expired()) {
                    effects_it = effect_collection_it->second.erase(effects_it);
                } else {
                    ++effects_it;
                }
            }

            if (effect_collection_it->second.empty()) {
                effect_collection_it = effects_by_dependency.erase(effect_collection_it);
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

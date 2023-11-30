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
        for (const auto& [dependencies]: active_tracking_contexts) {
            for (const auto& dependency: dependencies) {
                effects_by_dependency[dependency].emplace(std::weak_ptr(ref));
                ref->dependencies.insert(dependency);
            }
        }

        active_tracking_contexts.pop_back();
    }

    internal::Finalizer internal::Post::post(const std::function<void()>& func) const {
        m_effect->post_function = func;
        func();
        return Finalizer(m_effect);
    }

    internal::Post internal::Effect::on(const std::function<void()>& func) const {
        m_effect->effect_function = func;

        push_tracking_context();
        func();
        pop_tracking_context(m_effect);

        return Post(m_effect);
    }

    internal::Post internal::Pre::on(const std::function<void()>& func) const {
        return Effect(m_effect).on(func);
    }

    internal::Effect internal::Pre::pre(const std::function<void()>& func) const {
        m_effect->pre_function = func;
        func();
        return Effect(m_effect);
    }

    internal::Pre watch_effect() {
        internal::Pre pre;
        pre.m_effect = std::make_shared<ReactiveEffect>();
        return pre;
    }

    void notify_used(const dependency_t& dependency) {
        if (active_tracking_contexts.empty()) {
            return;
        }

        active_tracking_contexts.back().dependencies.emplace(dependency);
    }

    void notify_changed(const dependency_t& dependency) {
        const auto refs = effects_by_dependency[dependency];
        for (const auto& ref_ptr: refs) {
            if (!ref_ptr.expired()) {
                auto effect = ref_ptr.lock();

                effect->pre_function();
                push_tracking_context();
                effect->effect_function();
                pop_tracking_context(effect);
                effect->post_function();
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

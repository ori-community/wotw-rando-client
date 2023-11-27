#include <functional>
#include <set>
#include <Core/property/reactivity.h>
#include <unordered_set>

#include <Modloader/app/methods/UberGCManager.h>
#include <Modloader/interception_macros.h>

namespace core::reactivity {
    struct TrackingContext {
        std::unordered_set<Dependency> dependencies;
    };

    std::vector<TrackingContext> active_tracking_contexts;
    std::unordered_map<Dependency, std::set<std::weak_ptr<OnChangedCallback>, WeakPtrCompare>> watchers;

    void push_tracking_context() {
        active_tracking_contexts.emplace_back();
    }

    void pop_tracking_context(const std::shared_ptr<OnChangedCallback>& on_changed_callback) {
        for (const auto& [dependencies] : active_tracking_contexts) {
            for (const auto& dependency : dependencies) {
                watchers[dependency].emplace(std::weak_ptr(on_changed_callback));
            }
        }

        active_tracking_contexts.pop_back();
    }

    void notify_used(const Dependency& dependency) {
        if (active_tracking_contexts.empty()) {
            return;
        }

        active_tracking_contexts.back().dependencies.emplace(dependency);
    }

    void notify_changed(const Dependency& dependency) {
        auto set = watchers[dependency];
        for (auto it = set.begin(); it != set.end(); ++it) {
            auto ptr = *it;

            if (!ptr.expired()) {
                auto callback = ptr.lock();

                push_tracking_context();
                (*callback)();
                pop_tracking_context(callback);
            }
        }
    }

    /**
     * \brief Garbage collect any expired callback and remove them from the watchers
     */
    void garbage_collect() {
        auto watcher_it = watchers.begin();

        while (watcher_it != watchers.end()) {
            auto set_it = watcher_it->second.begin();

            while (set_it != watcher_it->second.end()) {
                if (set_it->expired()) {
                    set_it = watcher_it->second.erase(set_it);
                } else {
                    ++set_it;
                }
            }

            if (watcher_it->second.empty()) {
                watcher_it = watchers.erase(watcher_it);
            } else {
                ++watcher_it;
            }
        }
    }

    IL2CPP_INTERCEPT(UberGCManager, void, RunGC, (bool is_debug)) {
        next::UberGCManager::RunGC(is_debug);
        garbage_collect();
    }
}

#include <functional>
#include <set>
#include <unordered_set>
#include <stack>
#include <algorithm>

#include <Core/id_registry.h>
#include <Core/property.h>
#include <Core/api/game/game.h>
#include <Core/property/reactivity.h>

#include <Modloader/app/methods/UberGCManager.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Profiler/tracy.h>
#include <magic_enum/magic_enum.hpp>

namespace core::reactivity {
    struct TrackingContext {
        std::unordered_set<dependency_t> dependencies;
    };

    struct DependencyTracker {
        unsigned int next_property_id = 0;
        std::vector<TrackingContext> active_tracking_contexts;
        std::multiset<size_t> reactivity_blockers;
        std::unordered_map<dependency_t, std::unordered_map<ReactiveEffect::id_t, std::weak_ptr<ReactiveEffect>>> effects_by_dependency;
        std::unordered_map<ReactiveEffect::id_t, std::weak_ptr<ReactiveEffect>> trigger_on_load_effects;
    };

    struct EffectContext {
        bool is_in_setup;  // True when we are currently inside before(), effect() or after() during effect setup
        std::weak_ptr<ReactiveEffect> effect;
    };

    std::optional<EffectContext> current_effect_context = std::nullopt;  // Contains the currently running effect context or nullptr, if no effect is running
    bool is_running_trigger_on_load_effects = false;
    ReactiveEffect::id_t next_reactive_effect_id = 0;

    auto& dependency_tracker() {
        static DependencyTracker tracker;
        return tracker;
    }

    ReactiveEffect::ReactiveEffect() {
        id = ++next_reactive_effect_id;
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
    void push_tracking_context() {
        dependency_tracker().active_tracking_contexts.emplace_back();
    }

    /**
     * Updates an effect to have the given dependencies. Also updates the reactivity system's internal state.
     */
    void set_effect_dependencies(const std::shared_ptr<ReactiveEffect>& ref, const std::unordered_set<dependency_t>& dependencies) {
        auto& previous_dependencies = ref->dependencies;
        auto& current_dependencies = dependencies;

        std::vector<dependency_t> dependencies_that_no_longer_exist;
        std::vector<dependency_t> new_dependencies;

        for (auto& previous_dependency: previous_dependencies) {
            if (!current_dependencies.contains(previous_dependency)) {
                dependencies_that_no_longer_exist.push_back(previous_dependency);
            }
        }
        for (auto& current_dependency : current_dependencies) {
            if (!previous_dependencies.contains(current_dependency)) {
                new_dependencies.push_back(current_dependency);
            }
        }

        for (auto& previous_dependency: dependencies_that_no_longer_exist) {
            dependency_tracker().effects_by_dependency[previous_dependency].erase(ref->id);
            ref->dependencies.erase(previous_dependency);
        }

        for (const auto& new_dependency: new_dependencies) {
            dependency_tracker().effects_by_dependency[new_dependency].emplace(ref->id, std::weak_ptr(ref));
            ref->dependencies.insert(new_dependency);
        }
    }

    /**
     * \brief Stop the current tracking context
     * \param ref The ComputedRef dependencies should get inserted into
     */
    void pop_tracking_context(const std::shared_ptr<ReactiveEffect>& ref) {
        auto& current_context_dependencies = dependency_tracker().active_tracking_contexts.back();

        set_effect_dependencies(ref, current_context_dependencies.dependencies);

        dependency_tracker().active_tracking_contexts.pop_back();
        auto const& reactivity_blockers = dependency_tracker().reactivity_blockers;
        if (!reactivity_blockers.empty() && *dependency_tracker().reactivity_blockers.rbegin() > dependency_tracker().active_tracking_contexts.size()) {
            throw std::exception("Popped tracking context past blocker, ScopedReactivityBlocker kept alive past scope.");
        }
    }

    builder::FinalizeOnlyBuilder builder::AfterEffectBuilder::after(const std::function<void()>& func) const {
        modloader::ScopedSetter _(current_effect_context, std::make_optional(EffectContext{
            .is_in_setup = true,
            .effect = m_effect,
        }));

        m_effect->after_function = func;
        func();
        return FinalizeOnlyBuilder(m_effect);
    }

    builder::AfterEffectBuilder builder::EffectBuilder::effect(const std::function<void()>& func, const std::source_location& location) const {
        modloader::ScopedSetter _(current_effect_context, std::make_optional(EffectContext{
            .is_in_setup = true,
            .effect = m_effect,
        }));

        m_effect->effect_function = func;
        m_effect->effect_register_location = location;

        push_tracking_context();
        try {
            func();
        } catch (...) {
            pop_tracking_context(m_effect);
            throw;
        }
        pop_tracking_context(m_effect);

        return AfterEffectBuilder(m_effect);
    }

    builder::AfterEffectBuilder builder::EffectBuilder::effect(const BaseProperty*& property, const std::source_location& location) const {
        set_effect_dependencies(m_effect, {property->get_dependency()});
        m_effect->effect_register_location = location;
        return AfterEffectBuilder(m_effect);
    }

    builder::AfterEffectBuilder builder::EffectBuilder::effect(const std::vector<const BaseProperty*>& properties, const std::source_location& location) const {
        std::unordered_set<dependency_t> dependencies;
        for (const auto& property: properties) {
            dependencies.insert(property->get_dependency());
        }
        set_effect_dependencies(m_effect, dependencies);
        m_effect->effect_register_location = location;

        return AfterEffectBuilder(m_effect);
    }

    builder::AfterEffectBuilder builder::EffectBuilder::effect(std::vector<api::uber_states::UberState> const& states, const std::source_location& location) const {
        std::unordered_set<dependency_t> dependencies;
        for (const auto& state: states) {
            dependencies.insert(UberStateDependency{state.group_int(), state.state()});
        }
        set_effect_dependencies(m_effect, dependencies);
        m_effect->effect_register_location = location;

        return AfterEffectBuilder(m_effect);
    }

    builder::AfterEffectBuilder builder::BeforeEffectBuilder::effect(const std::function<void()>& func, const std::source_location& location) const {
        return EffectBuilder(m_effect).effect(func, location);
    }

    builder::AfterEffectBuilder builder::BeforeEffectBuilder::effect(std::vector<api::uber_states::UberState> const& states, const std::source_location& location) const {
        std::unordered_set<dependency_t> dependencies;
        for (const auto& state: states) {
            dependencies.insert(UberStateDependency{state.group_int(), state.state()});
        }
        set_effect_dependencies(m_effect, dependencies);
        m_effect->effect_register_location = location;

        return AfterEffectBuilder(m_effect);
    }

    builder::AfterEffectBuilder builder::BeforeEffectBuilder::effect(const BaseProperty*& property, const std::source_location& location) const {
        set_effect_dependencies(m_effect, {property->get_dependency()});
        m_effect->effect_register_location = location;
        return AfterEffectBuilder(m_effect);
    }

    builder::AfterEffectBuilder builder::BeforeEffectBuilder::effect(const std::vector<const BaseProperty*>& properties, const std::source_location& location) const {
        std::unordered_set<dependency_t> dependencies;
        for (const auto& property: properties) {
            dependencies.insert(property->get_dependency());
        }
        set_effect_dependencies(m_effect, dependencies);
        m_effect->effect_register_location = location;

        return AfterEffectBuilder(m_effect);
    }

    builder::EffectBuilder builder::BeforeEffectBuilder::before(const std::function<void()>& func) const {
        modloader::ScopedSetter _(current_effect_context, std::make_optional(EffectContext{
            .is_in_setup = true,
            .effect = m_effect,
        }));

        m_effect->before_function = func;
        func();
        return EffectBuilder(m_effect);
    }

    builder::BeforeEffectBuilder watch_effect() {
        builder::BeforeEffectBuilder pre;
        pre.m_effect = std::make_shared<ReactiveEffect>();
        return pre;
    }

    ReactiveEffect::ptr_t watch_effect(const std::function<void()>& func, const std::source_location& location) {
        return watch_effect().effect(func, location).finalize();
    }

    /**
     * Registers effects with trigger_on_load if enabled and
     * flushes the local after_effect_fns queue.
     */
    void builder::HasEffect::finalize_effect() const {
        if (m_effect->trigger_on_load) {
            dependency_tracker().trigger_on_load_effects.emplace(m_effect->id, std::weak_ptr(m_effect));
        }

        m_effect->run_and_flush_after_effect_fns();
    }

    void builder::HasEffect::set_effect_dependencies(const std::shared_ptr<ReactiveEffect>& effect, const std::unordered_set<dependency_t>& dependencies) {
        ::core::reactivity::set_effect_dependencies(effect, dependencies);
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

    void run_effects(const std::ranges::input_range auto&& effects) {
        std::vector<std::shared_ptr<ReactiveEffect>> processed_effects;
        processed_effects.reserve(effects.size());

        for (const std::weak_ptr<ReactiveEffect>& effect_ptr: effects) {
            if (auto effect = effect_ptr.lock()) {
                ZoneScopedN("Effect");
                ZoneTextF("%s:%u", effect->effect_register_location.file_name(), effect->effect_register_location.line());

                processed_effects.push_back(effect);

                modloader::ScopedSetter _(current_effect_context, std::make_optional(EffectContext{
                    .is_in_setup = false,
                    .effect = effect_ptr,
                }));

                if (effect->before_function != nullptr) {
                    effect->before_function();
                }

                // Effects with static dependencies don't have an effect function, so we don't need to start tracking
                if (effect->effect_function != nullptr) {
                    push_tracking_context();
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
                }

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

        if (!dependency_tracker().trigger_on_load_effects.empty()) {
            run_effects(dependency_tracker().trigger_on_load_effects | std::ranges::views::values);
        }
    }

    bool is_effect_running_because_of_trigger_on_load() {
        if (!current_effect_context.has_value()) {
            throw std::exception("Cannot call is_effect_running_because_of_trigger_on_load outside an active effect context");
        }

        return is_running_trigger_on_load_effects;
    }

    bool is_in_effect_setup() {
        if (!current_effect_context.has_value()) {
            throw std::exception("Cannot call is_in_effect_setup outside an active effect context");
        }

        return current_effect_context->is_in_setup;
    }

    void notify_changed(const dependency_t& dependency) {
        auto const& reactivity_blockers = dependency_tracker().reactivity_blockers;
        auto const& active_contexts = dependency_tracker().active_tracking_contexts;
        if (!reactivity_blockers.empty() && *reactivity_blockers.rbegin() == active_contexts.size()) {
            return;
        }

        if (!active_contexts.empty()) {
            throw std::runtime_error("Dependencies must not be changed inside a non-blocked reactive effect");
        }

        const auto effects_it = dependency_tracker().effects_by_dependency.find(dependency);

        if (effects_it == dependency_tracker().effects_by_dependency.end()) {
            return;
        }

        if (!effects_it->second.empty()) {
            ZoneScopedN("run_effects (on change)");

            #ifdef ENABLE_PROFILER
            dependency | vx::match {
                [&](const UberStateDependency& d) {
                    ZoneTextF("UberState %d|%d", d.group, d.state);
                },[&](const MemoryDependency& d) {
                    ZoneTextF("Memory %s %d", magic_enum::enum_name(d.type).data(), d.id);
                },[&](const TextDatabaseDependency& d) {
                    ZoneTextF("Text %d", d.id);
                },[&](const PropertyDependency& d) {
                    ZoneTextF("Property %d", d.id);
                },
            };
            #endif

            run_effects(effects_it->second | std::ranges::views::values);
        }
    }

    unsigned int reserve_property_id() {
        return ++dependency_tracker().next_property_id;
    }

    void run_after_effects(const std::function<void()>& fn) {
        if (!current_effect_context.has_value()) {
            throw std::exception("Cannot call run_after_effects outside an active effect context");
        }

        if (!current_effect_context->effect.expired()) {
            current_effect_context->effect.lock()->after_effect_fns.push_back(fn);
        }
    }

    /**
     * \brief Garbage collect any expired callback and remove them from the watchers
     */
    void garbage_collect() {
        auto effect_collection_it = dependency_tracker().effects_by_dependency.begin();

        while (effect_collection_it != dependency_tracker().effects_by_dependency.end()) {
            auto effects_it = effect_collection_it->second.begin();

            while (effects_it != effect_collection_it->second.end()) {
                if (effects_it->second.expired()) {
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
            if (trigger_on_load_effects_it->second.expired()) {
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

    auto on_after_unity_update_loop = api::game::event_bus().register_handler(GameEvent::UnityUpdateLoop, EventTiming::After, [](auto, auto) {
        TracyPlot(
            "Effect Trigger Count",
            static_cast<int64_t>(dependency_tracker().effects_by_dependency.size())
        );

        TracyPlot(
            "Trigger on Load Effect Count",
            static_cast<int64_t>(dependency_tracker().trigger_on_load_effects.size())
        );
    });
}

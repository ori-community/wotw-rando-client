#include <Modloader/windows_api/console.h>
#include <Randomizer/dev/seed_debugger.h>
#include <Randomizer/randomizer.h>

namespace randomizer::dev::seed_debugger {
    namespace {
        struct DebuggerState {
            using debugger_types = std::unordered_set<DebuggerType>;

            std::unordered_map<std::size_t, debugger_types> condition_breakpoints;
            std::unordered_map<std::size_t, debugger_types> condition_triggered_breakpoints;
            std::unordered_map<std::size_t, debugger_types> command_breakpoints;
            std::unordered_map<seed::SeedEvent, debugger_types> seed_event_breakpoints;
            std::unordered_map<core::api::uber_states::UberState, debugger_types> binding_breakpoints;

            std::unordered_map<DebuggerType, int> active_breaks;
        };

        DebuggerState debugger_state;
        std::vector<DebuggerContext> context_stack;
    }

    common::EventBus<DebuggerContext, DebuggerType, Event>& event_bus() {
        static common::EventBus<DebuggerContext, DebuggerType, Event> bus;
        return bus;
    }

    void clear_breakpoints() {
        debugger_state.condition_breakpoints.clear();
        debugger_state.condition_triggered_breakpoints.clear();
        debugger_state.command_breakpoints.clear();
    }

    void add_breakpoint(const DebuggerType debugger, const BreakpointType type, const std::size_t id) {
        switch (type) {
        case BreakpointType::Condition:
            debugger_state.condition_breakpoints[id].emplace(debugger);
            break;
        case BreakpointType::ConditionTriggered:
            debugger_state.condition_triggered_breakpoints[id].emplace(debugger);
            break;
        case BreakpointType::Command:
            debugger_state.command_breakpoints[id].emplace(debugger);
            break;
        default:
            throw RandoException("add_breakpoint called for unhandled type");
        }
    }

    bool remove_breakpoint(const DebuggerType debugger, const BreakpointType type, const std::size_t id) {
        switch (type) {
            case BreakpointType::Condition:
                return debugger_state.condition_breakpoints[id].erase(debugger);
            case BreakpointType::ConditionTriggered:
                return debugger_state.condition_triggered_breakpoints[id].erase(debugger);
            case BreakpointType::Command:
                return debugger_state.command_breakpoints[id].erase(debugger);
            default:
                throw RandoException("add_breakpoint called for unhandled type");
        }
    }

    bool toggle_breakpoint(const DebuggerType debugger, const BreakpointType type, const std::size_t id) {
        const auto removed = remove_breakpoint(debugger, type, id);
        if (!removed) {
            add_breakpoint(debugger, type, id);
        }

        return !removed;
    }

    void add_seed_event_breakpoint(const DebuggerType debugger, const seed::SeedEvent event) {
        debugger_state.seed_event_breakpoints[event].emplace(debugger);
    }

    bool remove_seed_event_breakpoint(const DebuggerType debugger, const seed::SeedEvent event) {
        return debugger_state.seed_event_breakpoints[event].erase(debugger);
    }

    bool toggle_seed_event_breakpoint(const DebuggerType debugger, const seed::SeedEvent event) {
        const auto removed = remove_seed_event_breakpoint(debugger, event);
        if (!removed) {
            add_seed_event_breakpoint(debugger, event);
        }

        return !removed;
    }

    void add_binding_breakpoint(const DebuggerType debugger, const core::api::uber_states::UberState state) {
        debugger_state.binding_breakpoints[state].emplace(debugger);
    }

    bool remove_binding_breakpoint(const DebuggerType debugger, const core::api::uber_states::UberState state) {
        return debugger_state.binding_breakpoints[state].erase(debugger);
    }

    bool toggle_binding_breakpoint(const DebuggerType debugger, const core::api::uber_states::UberState state) {
        const auto removed = remove_binding_breakpoint(debugger, state);
        if (!removed) {
            add_binding_breakpoint(debugger, state);
        }

        return !removed;
    }

    void debugger_break(const DebuggerType debugger) {
        debugger_state.active_breaks[debugger] = 1;
        event_bus().trigger_event(debugger, Event::Break, DebuggerContext{ std::nullopt, std::nullopt, nullptr });
    }

    void debugger_continue(const DebuggerType debugger) {
        debugger_state.active_breaks.erase(debugger);
        event_bus().trigger_event(debugger, Event::Continue, DebuggerContext{ std::nullopt, std::nullopt, nullptr });
    }

    void trigger_event(const Event event) {
        auto size = context_stack.size();
        const auto& back = context_stack.back();
        const auto active_breaks = debugger_state.active_breaks;
        for (const auto type: active_breaks | std::views::keys) {
            event_bus().trigger_event(type, event, context_stack.back());
        }
    }

    void handle_break_check(std::unordered_set<DebuggerType> const& debuggers, const bool is_start) {
        for (const auto type: debuggers) {
            if (is_start && !debugger_state.active_breaks.contains(type)) {
                event_bus().trigger_event(type, Event::Break, context_stack.front());
            }

            debugger_state.active_breaks[type] += is_start ? 1 : -1;
            if (debugger_state.active_breaks[type] <= 0) {
                debugger_state.active_breaks.erase(type);
            }
        }
    }

    void seed_event_start(const seed::SeedEvent event) {
        context_stack.emplace_back(std::make_optional<seed_event_t>(event), std::nullopt, nullptr);
        handle_break_check(debugger_state.seed_event_breakpoints[event], true);
        trigger_event(Event::SeedEventStart);
    }

    void seed_event_end(const seed::SeedEvent event) {
        trigger_event(Event::SeedEventEnd);
        handle_break_check(debugger_state.seed_event_breakpoints[event], false);
        context_stack.pop_back();
    }

    void binding_start(const core::api::uber_states::UberState state) {
        context_stack.emplace_back(std::make_optional<seed_event_t>(state), std::nullopt, nullptr);
        handle_break_check(debugger_state.binding_breakpoints[state], true);
        trigger_event(Event::BindingStart);
    }

    void binding_end(const core::api::uber_states::UberState state) {
        trigger_event(Event::BindingEnd);
        handle_break_check(debugger_state.binding_breakpoints[state], false);
        context_stack.pop_back();
    }

    void condition_start(const std::size_t id) {
        context_stack.emplace_back(std::make_optional<seed_event_t>(id), std::nullopt, nullptr);
        handle_break_check(debugger_state.condition_breakpoints[id], true);
        trigger_event(Event::ConditionStart);
    }

    void condition_triggered(const std::size_t id) {
        handle_break_check(debugger_state.condition_triggered_breakpoints[id], true);
    }

    void condition_end(const std::size_t id) {
        trigger_event(Event::ConditionEnd);
        handle_break_check(debugger_state.condition_breakpoints[id], false);
        handle_break_check(debugger_state.condition_triggered_breakpoints[id], false);
        context_stack.pop_back();
    }

    void command_start(const std::size_t id) {
        const auto seed_event = context_stack.empty() ? std::nullopt : context_stack.back().event;
        context_stack.emplace_back(seed_event, id, nullptr);
        handle_break_check(debugger_state.command_breakpoints[id], true);
        trigger_event(Event::CommandStart);
    }

    void command_end(const std::size_t id) {
        trigger_event(Event::CommandEnd);
        handle_break_check(debugger_state.command_breakpoints[id], false);
        context_stack.pop_back();
    }

    void instruction(const seed::IInstruction* instruction) {
        const auto& [event, command_id, _] = context_stack.back();
        context_stack.emplace_back(event, command_id, instruction);
        trigger_event(Event::Instruction);
        context_stack.pop_back();
    }

    auto on_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        modloader::win::console::register_command({ "seed_debugger", "clear_breakpoints" }, [](auto, auto){ clear_breakpoints(); }, true);
    });
}

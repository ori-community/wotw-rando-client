#pragma once

#include <Common/event_bus.h>
#include <Core/api/uber_states/uber_state.h>
#include <Randomizer/seed/seed_event.h>
#include <Randomizer/seed/instructions.h>
#include <variant>

namespace randomizer::dev::seed_debugger {

    enum class Event {
        Break,
        Continue,
        SeedEventStart,
        SeedEventEnd,
        BindingStart,
        BindingEnd,
        ConditionStart,
        ConditionEnd,
        CommandStart,
        CommandEnd,
        Instruction,
    };

    enum class BreakpointType {
        Manual,
        Condition,
        ConditionTriggered,
        SeedEvent,
        Binding,
        Command,
    };

    enum class DebuggerType {
        Cpp, // Triggers __debug_break
        IPC,
        Console,
        File,
    };

    using seed_event_t = std::variant<seed::SeedEvent, core::api::uber_states::UberState, std::size_t>;

    struct DebuggerContext {
        std::optional<seed_event_t> event;
        std::optional<std::size_t> command_id;
        const seed::IInstruction* instruction;
    };

    void clear_breakpoints();
    void add_breakpoint(DebuggerType debugger, BreakpointType type, std::size_t id);
    bool remove_breakpoint(DebuggerType debugger, BreakpointType type, std::size_t id);
    bool toggle_breakpoint(DebuggerType debugger, BreakpointType type, std::size_t id);

    void add_seed_event_breakpoint(DebuggerType debugger, seed::SeedEvent event);
    bool remove_seed_event_breakpoint(DebuggerType debugger, seed::SeedEvent event);
    bool toggle_seed_event_breakpoint(DebuggerType debugger, seed::SeedEvent event);

    void add_binding_breakpoint(DebuggerType debugger, core::api::uber_states::UberState state);
    bool remove_binding_breakpoint(DebuggerType debugger, core::api::uber_states::UberState state);
    bool toggle_binding_breakpoint(DebuggerType debugger, core::api::uber_states::UberState state);

    void debugger_break(DebuggerType debugger);
    void debugger_continue(DebuggerType debugger);

    // Triggers debugger events.
    void seed_event_start(seed::SeedEvent event);
    void seed_event_end(seed::SeedEvent event);
    void binding_start(core::api::uber_states::UberState state);
    void binding_end(core::api::uber_states::UberState state);
    void condition_start(std::size_t id);
    void condition_triggered(std::size_t id);
    void condition_end(std::size_t id);
    void command_start(std::size_t id);
    void command_end(std::size_t id);
    void instruction(const seed::IInstruction* instruction);

    // This is for subscribing to whats happening in the debugger, not for triggering.
    common::EventBus<DebuggerContext, DebuggerType, Event>& event_bus();
} // namespace randomizer::dev::seed_debugger

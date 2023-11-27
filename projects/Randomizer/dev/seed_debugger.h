#pragma once

#include <Common/event_bus.h>

#include <Core/api/uber_states/uber_state_condition.h>

#include <Randomizer/seed/items/item.h>

namespace randomizer::dev::seed_debugger {
    
    enum class Event {
        Break,
        BeginGrant,
        EndGrant,
        NextItem,
        Skip,
        Stop,
        Procedure,
    };

    enum class BreakpointType {
        Cpp, // Triggers __debug_break
        IPC,
        Console,
        Log,
    };
    
    struct DebuggerContext {
        std::optional<core::api::uber_states::UberState> state;
        std::optional<core::api::uber_states::UberStateCondition> condition;
        int line_number;
        uint32_t skip;
        bool ignore_already_granted;
        std::string item_definition;

        // Descriptions
        std::string trigger_entry;
        std::optional<std::string> line_entry;
        std::optional<std::string> parsed_entry;
    };

    void clear_breakpoints();
    void add_breakpoint(BreakpointType type, const core::api::uber_states::UberStateCondition &condition);
    bool remove_breakpoint(BreakpointType type, const core::api::uber_states::UberStateCondition &condition);
    bool toggle_breakpoint(BreakpointType type, const core::api::uber_states::UberStateCondition &condition);
    void debugger_continue(BreakpointType type);

    // Triggers debugger events.
    void begin_grant(core::api::uber_states::UberState state, double previous_value);
    void end_grant(core::api::uber_states::UberState state, double value_when_starting, double previous_value);
    void next_item(core::api::uber_states::UberStateCondition condition, bool ignore_already_granted, seed::items::BaseItem const& item);
    void skip(core::api::uber_states::UberStateCondition condition, bool ignore_already_granted, seed::items::BaseItem const& item, uint32_t skip);
    void stop(core::api::uber_states::UberStateCondition condition, bool ignore_already_granted, seed::items::BaseItem const& item);
    void procedure(int id);

    // This is for subscribing to whats happening in the debugger, not for triggering.
    common::EventBus<DebuggerContext, BreakpointType, Event>& event_bus();
}

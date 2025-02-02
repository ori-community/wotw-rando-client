#include <magic_enum/magic_enum.hpp>
#include <Randomizer/randomizer.h>
#include <Randomizer/dev/seed_debugger.h>
#include <Randomizer/seed/items/item.h>

namespace randomizer::dev::seed_debugger {
    namespace {
        struct DebuggerState {
            using breakpoint_types = std::unordered_set<BreakpointType>;
            using breakpoint_trigger = core::api::uber_states::UberStateCondition;

            std::unordered_map<breakpoint_trigger, breakpoint_types> breakpoints;
            breakpoint_types active_breaks;
        };

        DebuggerState debugger_state;
    }

    void clear_breakpoints() {
        debugger_state.breakpoints.clear();
    }

    void add_breakpoint(const BreakpointType type, const core::api::uber_states::UberStateCondition &condition) {
        debugger_state.breakpoints[condition].emplace(type);
    }

    bool remove_breakpoint(const BreakpointType type, const core::api::uber_states::UberStateCondition &condition) {
        return debugger_state.breakpoints[condition].erase(type) > 0;
    }

    bool toggle_breakpoint(BreakpointType type, const core::api::uber_states::UberStateCondition &condition) {
        auto &breakpoints = debugger_state.breakpoints[condition];
        if (breakpoints.contains(type)) {
            breakpoints.erase(type);
            return false;
        }

        breakpoints.emplace(type);
        return true;
    }

    void debugger_continue(const BreakpointType type) {
        debugger_state.active_breaks.erase(type);
    }

    common::EventBus<DebuggerContext, BreakpointType, Event> &event_bus() {
        static common::EventBus<DebuggerContext, BreakpointType, Event> bus;
        return bus;
    }

    void begin_grant(const core::api::uber_states::UberState state, const double previous_value) {
        auto debugger_context = DebuggerContext{
            .state = state,
            .condition = std::nullopt,
            .line_number = 0,
            .skip = 0,
            .ignore_already_granted = false,
            .item_definition = "",
            .trigger_entry = state.to_string(false, previous_value),
            .line_entry = std::nullopt,
            .parsed_entry = std::nullopt,
        };

        for (auto [condition, types]: debugger_state.breakpoints) {
            if (condition.state != state || !condition.resolve()) {
                continue;
            }

            for (auto type: types) {
                if (debugger_state.active_breaks.contains(type)) {
                    continue;
                }

                auto break_context = debugger_context;
                break_context.condition = condition;
                break_context.trigger_entry += std::format(
                    " {} breakpoint hit: {}",
                    magic_enum::enum_name(type),
                    state.to_string(false, previous_value)
                );

                event_bus().trigger_event(type, Event::Break, break_context);
                debugger_state.active_breaks.emplace(type);
            }
        }

        const auto active_breaks = debugger_state.active_breaks;
        for (const auto type: active_breaks) {
            // Execution pauses until handler finishes running (duh)
            event_bus().trigger_event(type, Event::BeginGrant, debugger_context);
        }
    }

    void end_grant(const core::api::uber_states::UberState state, const double value_when_starting, const double previous_value) {
        if (debugger_state.active_breaks.empty()) {
            return;
        }

        const auto debugger_context = DebuggerContext{
            .state = state,
            .condition = std::nullopt,
            .line_number = 0,
            .skip = 0,
            .ignore_already_granted = false,
            .item_definition = "",
            .trigger_entry = state.to_string(false, previous_value, value_when_starting),
            .line_entry = std::nullopt,
            .parsed_entry = std::nullopt,
        };

        const auto active_breaks = debugger_state.active_breaks;
        for (const auto type: active_breaks) {
            // Execution pauses until handler finishes running (duh)
            event_bus().trigger_event(type, Event::EndGrant, debugger_context);
        }
    }

    void next_item(core::api::uber_states::UberStateCondition condition, bool ignore_already_granted, seed::items::BaseItem const &item) {
        if (debugger_state.active_breaks.empty()) {
            return;
        }

        std::string trigger_entry;
        std::string line_entry;
        std::string parsed_entry;
        const auto debugger_context = DebuggerContext{
            .state = std::nullopt,
            .condition = condition,
            .line_number = item.seed_line_number,
            .skip = 0,
            .ignore_already_granted = ignore_already_granted,
            .item_definition = item.seed_definition,
            .trigger_entry = std::format("{} {}", condition.to_string(), ignore_already_granted ? "always" : "once"),
            .line_entry = std::format("{}: {}", item.seed_line_number, item.seed_definition),
            .parsed_entry = item.to_string(),
        };


        const auto active_breaks = debugger_state.active_breaks;
        for (const auto type: active_breaks) {
            // Execution pauses until handler finishes running (duh)
            event_bus().trigger_event(type, Event::NextItem, debugger_context);
        }
    }

    void skip(core::api::uber_states::UberStateCondition condition, bool ignore_already_granted, seed::items::BaseItem const &item, uint32_t skip) {
        if (skip == 0 || debugger_state.active_breaks.empty()) {
            return;
        }

        const auto debugger_context = DebuggerContext{
            .state = std::nullopt,
            .condition = condition,
            .line_number = item.seed_line_number,
            .skip = skip,
            .ignore_already_granted = ignore_already_granted,
            .item_definition = item.seed_definition,
            .trigger_entry = std::format("{} {}", condition.to_string(), ignore_already_granted ? "always" : "once"),
            .line_entry = std::format("{}: {}", item.seed_line_number, item.seed_definition),
            .parsed_entry = skip == 1 ? "skips next grant" : std::format("skips next {} grants", skip),
        };

        const auto active_breaks = debugger_state.active_breaks;
        for (const auto type: active_breaks) {
            // Execution pauses until handler finishes running (duh)
            event_bus().trigger_event(type, Event::Skip, debugger_context);
        }
    }

    void stop(core::api::uber_states::UberStateCondition condition, bool ignore_already_granted, seed::items::BaseItem const &item) {
        if (debugger_state.active_breaks.empty()) {
            return;
        }

        const auto debugger_context = DebuggerContext{
            .state = std::nullopt,
            .condition = condition,
            .line_number = item.seed_line_number,
            .skip = 0,
            .ignore_already_granted = ignore_already_granted,
            .item_definition = item.seed_definition,
            .trigger_entry = std::format("{} {}", condition.to_string(), ignore_already_granted ? "always" : "once"),
            .line_entry = std::format("{}: {}", item.seed_line_number, item.seed_definition),
            .parsed_entry = "stops grants",
        };

        const auto active_breaks = debugger_state.active_breaks;
        for (const auto type: active_breaks) {
            // Execution pauses until handler finishes running (duh)
            event_bus().trigger_event(type, Event::Stop, debugger_context);
        }
    }

    void procedure(int id) {
        if (debugger_state.active_breaks.empty()) {
            return;
        }

        std::string description;
        const auto data = game_seed().procedure_data(id);
        if (!data.has_value()) {
            description = std::format("call unknown procedure {}", id);
        } else if (!data.value().items.empty()) {
            description = std::format("call empty procedure {}", id);
        } else {
            // First item should hold the full string used to generate the procedure.
            const auto item = data.value().items.begin()->second;
            description = std::format("call procedure {} at line {}: {}", id, item->seed_line_number, item->seed_definition);
        }

        // Context should always be up to date when procedure is called.
        const auto debugger_context = DebuggerContext{
            .state = std::nullopt,
            .condition = std::nullopt,
            .line_number = id,
            .skip = 0,
            .ignore_already_granted = false,
            .item_definition = "",
            .trigger_entry = description,
            .line_entry = std::nullopt,
            .parsed_entry = std::nullopt,
        };

        const auto active_breaks = debugger_state.active_breaks;
        for (const auto type: active_breaks) {
            // Execution pauses until handler finishes running (duh)
            event_bus().trigger_event(type, Event::Procedure, debugger_context);
        }
    }

    auto on_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        modloader::win::console::register_command({ "seed_debugger", "clear_breakpoints" }, [](auto, auto){ clear_breakpoints(); }, true);
    });
}

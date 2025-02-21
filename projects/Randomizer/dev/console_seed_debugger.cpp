#include <magic_enum/magic_enum.hpp>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>
#include <Randomizer/dev/seed_debugger.h>
#include <Randomizer/seed/items/item.h>
#include <thread>

namespace randomizer::dev::seed_debugger {
    namespace {
        bool is_waiting_for_next = false;

        std::string parse_context(DebuggerContext const &context, std::string prefix = "") {
            return std::format(
                "{}{} {}{}",
                prefix,
                context.trigger_entry,
                context.line_entry.has_value() ? std::format(" LINE> {}", context.line_entry.value()) : "",
                context.parsed_entry.has_value() ? std::format(" PARSED> {}", context.parsed_entry.value()) : ""
            );
        }

        auto on_next_item = event_bus().register_handler(
            BreakpointType::Console,
            Event::NextItem,
            [](auto context, auto, auto) {
                modloader::win::console::console_send(parse_context(context, "NextItem "));

                is_waiting_for_next = true;
                // Disable this because its lying, a console command can set this variable.
                // ReSharper disable once CppDFALoopConditionNotUpdated
                while (is_waiting_for_next) {
                    std::this_thread::sleep_for(std::chrono::milliseconds(100));
                    modloader::win::console::console_update();
                }
            }
        );

        auto information_handlers = event_bus().register_handlers(
            {
                {BreakpointType::Console, Event::Break},
                {BreakpointType::Console, Event::BeginGrant},
                {BreakpointType::Console, Event::EndGrant},
                {BreakpointType::Console, Event::Skip},
                {BreakpointType::Console, Event::Stop},
                {BreakpointType::Console, Event::Procedure},
            },
            [](auto context, auto, auto evt) {
                modloader::win::console::console_send(parse_context(context, std::string(magic_enum::enum_name(evt)) + " "));
            }
        );

        void command_next(std::string const &, std::vector<modloader::win::console::CommandParam> const &) {
            is_waiting_for_next = false;
        }

        void command_continue(std::string const &, std::vector<modloader::win::console::CommandParam> const &) {
            modloader::win::console::console_send("program resumed");
            debugger_continue(BreakpointType::Console);
            is_waiting_for_next = false;
        }

        void command_toggle_breakpoint(std::string const &, std::vector<modloader::win::console::CommandParam> const &params) {
            std::string concated;
            for (auto [name, value]: params) {
                if (!concated.empty()) {
                    concated += " ";
                }

                if (!name.empty()) {
                    concated += name;
                    concated += "=";
                }

                concated += value;
            }

            core::api::uber_states::UberStateCondition condition;
            if (!parse_condition(concated, condition)) {
                modloader::win::console::console_send("failed to parse condition");
                return;
            }

            modloader::win::console::console_send(
                toggle_breakpoint(BreakpointType::Console, condition)
                ? "Breakpoint set"
                : "Breakpoint removed"
            );
        }

        auto on_ready = modloader::event_bus().register_handler(
            ModloaderEvent::GameReady,
            [](auto) {
                register_command({"seed_debugger", "console", "next"}, command_next, true);
                register_command({"seed_debugger", "console", "continue"}, command_continue, true);
                register_command({"seed_debugger", "console", "breakpoint"}, command_toggle_breakpoint, true);
            }
        );
    }
}

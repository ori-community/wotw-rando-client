#include <Common/is_in.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>
#include <Randomizer/dev/seed_debugger.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/seed/seed_event.h>
#include <fstream>
#include <magic_enum.hpp>

namespace randomizer::dev::seed_debugger {
    namespace {
        const std::string FILE_SEED_DEBUGGER_NAME = "seed_debugger";
        const std::string FILE_SEED_DEBUGGER_EXTENSION = ".log";

        Event last_written = Event::Break;
        bool add_empty_line = false;
        std::ofstream stream;

        std::string indent(const int indent) {
            std::string indentation;
            for (auto i = 0; i < indent; ++i) {
                indentation += "\t";
            }

            return indentation;
        }

        void write(std::string const& value) { stream << value << std::flush; }

        void write_beginning() {
            if (add_empty_line || is_in<Event::SeedEventStart, Event::BindingStart, Event::ConditionStart, Event::CommandStart>(last_written)) {
                write("\n");
                add_empty_line = false;
            }
        }

        int indentation = 0;
        [[maybe_unused]] auto on_break = event_bus().register_handler(DebuggerType::File, Event::Break, [](auto, auto, auto) {
            if (indentation != 0) {
                modloader::error("log_seed_debugger", "Indentation != 0: this should never happen.");
            }

            stream.open(modloader::base_path() / (FILE_SEED_DEBUGGER_NAME + FILE_SEED_DEBUGGER_EXTENSION), std::fstream::out | std::fstream::app);
            modloader::win::console::console_send("file breakpoint triggered");
            write("\n");
            write("BREAK STARTED\n");
            add_empty_line = false;
            last_written = Event::Break;
        });

        [[maybe_unused]] auto start_seed_event = event_bus().register_handler(DebuggerType::File, Event::SeedEventStart, [](auto context, auto, auto) {
            write_beginning();
            const auto event = std::get<seed::SeedEvent>(context.event.value());
            write(std::format("{}ON_SEED_EVENT {} {{", indent(indentation), magic_enum::enum_name(event)));
            ++indentation;
            last_written = Event::SeedEventStart;
        });

        [[maybe_unused]] auto start_binding = event_bus().register_handler(DebuggerType::File, Event::BindingStart, [](auto context, auto, auto) {
            write_beginning();
            const auto state = std::get<core::api::uber_states::UberState>(context.event.value());
            write(std::format("{}ON_BINDING {}|{} {{", indent(indentation), state.group_int(), state.state()));
            ++indentation;
            last_written = Event::BindingStart;
        });

        [[maybe_unused]] auto start_condition = event_bus().register_handler(DebuggerType::File, Event::ConditionStart, [](auto context, auto, auto) {
            write_beginning();
            const auto id = std::get<std::size_t>(context.event.value());
            write(std::format("{}ON_CONDITION {} {{", indent(indentation), id));
            ++indentation;
            last_written = Event::ConditionStart;
        });

        [[maybe_unused]] auto start_command = event_bus().register_handler(DebuggerType::File, Event::CommandStart, [](auto context, auto, auto) {
            write_beginning();
            write(std::format("{}COMMAND {} {{", indent(indentation), std::to_string(context.command_id.value())));
            ++indentation;
            last_written = Event::CommandStart;
        });

        [[maybe_unused]] auto end_handlers = event_bus().register_handlers(
            {
                {DebuggerType::File, Event::SeedEventEnd},
                {DebuggerType::File, Event::BindingEnd  },
                {DebuggerType::File, Event::ConditionEnd},
                {DebuggerType::File, Event::CommandEnd  },
        },
            [](auto, auto, auto event) {
                --indentation;
                add_empty_line = true;
                auto should_indent = event != static_cast<Event>(static_cast<int>(last_written) + 1);
                write(std::format("{}}}\n", indent(should_indent ? indentation : 0)));
                last_written = event;
            }
        );

        [[maybe_unused]] auto instruction = event_bus().register_handler(DebuggerType::File, Event::Instruction, [](auto context, auto, auto) {
            write_beginning();
            write(std::format("{}{};\n", indent(indentation), context.instruction->to_string(game_seed(), game_seed().memory())));
            last_written = Event::Instruction;
        });

        void command_toggle_breakpoint(std::string const&, std::vector<modloader::win::console::CommandParam> const& params) {
            /*std::string concated;
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

            core::api::uber_states::UberState condition;
            if (!parse_condition(concated, condition)) {
                modloader::win::console::console_send("failed to parse condition");
                return;
            }

            modloader::win::console::console_send(
                toggle_breakpoint(DebuggerType::Log, BreakpointType::Binding, condition)
                ? "Breakpoint set"
                : "Breakpoint removed"
            );*/
        }

        [[maybe_unused]] auto on_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
            const auto path = modloader::base_path() / (FILE_SEED_DEBUGGER_NAME + FILE_SEED_DEBUGGER_EXTENSION);
            if (exists(path)) {
                const auto new_path = modloader::base_path() /
                    (FILE_SEED_DEBUGGER_NAME + "_" + std::format("{:%Y_%m_%d_%H_%M_%S}", last_write_time(path)) + FILE_SEED_DEBUGGER_EXTENSION);

                std::filesystem::rename(path, new_path);
            }

            modloader::win::console::register_command(
                {"seed_debugger", "file", "break"},
                [](auto, auto) {
                    debugger_break(DebuggerType::File);
                    modloader::win::console::console_send("manual break 'File'");
                },
                true
            );
            // modloader::win::console::register_command({"seed_debugger", "file", "breakpoint"}, command_toggle_breakpoint, true);
            modloader::win::console::register_command(
                {"seed_debugger", "file", "continue"},
                [](auto, auto) {
                    debugger_continue(DebuggerType::File);
                    modloader::win::console::console_send("continue 'File'");
                },
                true
            );
        });
    } // namespace
} // namespace randomizer::dev::seed_debugger

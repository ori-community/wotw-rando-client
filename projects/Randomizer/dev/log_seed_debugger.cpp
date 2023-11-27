#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>

#include <Randomizer/dev/seed_debugger.h>
#include <Randomizer/seed/items/item.h>

#include <fstream>

namespace randomizer::dev::seed_debugger {
    namespace {
        const std::string LOG_SEED_DEBUGGER_NAME = "seed_debugger";
        const std::string LOG_SEED_DEBUGGER_EXTENSION = ".log";

        bool just_did_end_grant = false;
        bool write_to_separate_file = true;
        std::ofstream stream;

        std::string indent(const int indent) {
            std::string indentation;
            for (auto i = 0; i < indent; ++i) {
                indentation += "\t";
            }

            return indentation;
        }

        std::string escaped_new_lines(std::string new_lines) {
            replace_all(new_lines, "\n", "\\n");
            return new_lines;
        }

        void write(std::string const &value) {
            if (write_to_separate_file) {
                stream << value << std::endl;
            }
            else {
                modloader::info("log_seed_debugger", value);
            }
        }

        void write_context(DebuggerContext const &context, const int indent_count, std::string prefix = "", std::string postfix = "") {
            write(
                std::format(
                    "{}{}{}{}",
                    indent(indent_count),
                    prefix,
                    context.trigger_entry,
                    context.line_entry.has_value() || context.parsed_entry.has_value() ? "" : postfix
                )
            );

            if (context.line_entry.has_value()) {
                write(
                    std::format(
                        "{}\tLine> {}{}",
                        indent(indent_count),
                        escaped_new_lines(context.line_entry.value()),
                        context.parsed_entry.has_value() ? "" : postfix
                    )
                );
            }

            if (context.parsed_entry.has_value()) {
                write(
                    std::format(
                        "{}\tParsed> {}{}",
                        indent(indent_count),
                        escaped_new_lines(context.parsed_entry.value()),
                        postfix
                    )
                );
            }
        }

        int grant_count = 0;
        auto on_break = event_bus().register_handler(
            BreakpointType::Log,
            Event::Break,
            [](auto context, auto, auto) {
                if (grant_count != 0) {
                    modloader::error("log_seed_debugger", "Grant count != 0: this should never happen.");
                }

                if (write_to_separate_file) {
                    stream.open(modloader::base_path() / (LOG_SEED_DEBUGGER_NAME + LOG_SEED_DEBUGGER_EXTENSION), std::fstream::out | std::fstream::app);
                }

                just_did_end_grant = false;
                modloader::win::console::console_send(context.trigger_entry);
                write("");
                write("BREAK STARTED");
            }
        );

        auto on_begin = event_bus().register_handler(
            BreakpointType::Log,
            Event::BeginGrant,
            [](auto context, auto, auto) {
                if (just_did_end_grant) {
                    write("");
                }

                just_did_end_grant = false;
                write_context(context, grant_count, "BEGIN GRANT", " {");
                ++grant_count;
            }
        );

        auto on_end = event_bus().register_handler(
            BreakpointType::Log,
            Event::EndGrant,
            [](auto context, auto, auto) {
                --grant_count;
                write(std::format("{}}}", indent(grant_count)));
                just_did_end_grant = true;
                if (grant_count == 0) {
                    write("BREAK ENDED");
                    write("");
                    if (write_to_separate_file) {
                        stream.close();
                    }

                    debugger_continue(BreakpointType::Log);
                }
            }
        );

        auto information_handlers = event_bus().register_handlers(
            {
                {BreakpointType::Log, Event::NextItem},
                {BreakpointType::Log, Event::Skip},
                {BreakpointType::Log, Event::Stop},
                {BreakpointType::Log, Event::Procedure},
            },
            [](auto context, auto, auto) {
                if (just_did_end_grant) {
                    write("");
                }

                just_did_end_grant = false;
                write_context(context, grant_count);
            }
        );

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
                toggle_breakpoint(BreakpointType::Log, condition)
                ? "Breakpoint set"
                : "Breakpoint removed"
            );
        }

        auto on_ready = modloader::event_bus().register_handler(
            ModloaderEvent::GameReady,
            [](auto) {
                const auto path = modloader::base_path() / (LOG_SEED_DEBUGGER_NAME + LOG_SEED_DEBUGGER_EXTENSION);
                if (write_to_separate_file && exists(path)) {
                    const auto new_path = modloader::base_path() / (
                        LOG_SEED_DEBUGGER_NAME
                        + "_"
                        + std::format("{:%Y_%m_%d_%H_%M_%S}", last_write_time(path))
                        + LOG_SEED_DEBUGGER_EXTENSION
                    );

                    std::filesystem::rename(path, new_path);
                }

                register_command({"seed_debugger", "log", "breakpoint"}, command_toggle_breakpoint, true);
            }
        );
    }
}

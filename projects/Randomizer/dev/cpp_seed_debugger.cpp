#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>
#include <Randomizer/dev/seed_debugger.h>
#include <seed/items/item.h>

namespace randomizer::dev::seed_debugger {
    namespace {
        auto on_break = event_bus().register_handler(BreakpointType::Cpp, Event::Break, [](auto, auto, auto) {
            debugger_continue(BreakpointType::Cpp);
            __debugbreak();
        });

        void command_toggle_breakpoint(std::string const&, std::vector<modloader::win::console::CommandParam> const& params) {
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
                toggle_breakpoint(BreakpointType::Cpp, condition)
                ? "Breakpoint set"
                : "Breakpoint removed"
            );
        }

        auto on_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
            register_command({ "seed_debugger", "cpp", "breakpoint" }, command_toggle_breakpoint, true);
        });
    }
}

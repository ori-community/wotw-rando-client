#include <RandomizerTester/test_runner.h>

#include <Core/api/game/game.h>
#include <Modloader/modloader.h>

#include <unordered_map>

namespace randomizer_tester {
    namespace {
        std::unordered_map<std::string, std::shared_ptr<ITest>> tests;

        auto on_update_handle = core::api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, [](auto, auto) {
            const auto dt = core::api::game::delta_time();
            for (auto test : tests) {
                test.second->update(dt);
            }
        });
    } // namespace

    bool is_test_running(std::string_view id) {
        return tests.contains(std::string(id));
    }

    bool start_test(std::string_view id, std::shared_ptr<ITest> test, std::span<modloader::win::console::CommandParam const> args) {
        if (is_test_running(id)) {
            return false;
        }

        if (test->arguments(args)) {
            return false;
        }

        test->start();
        tests[std::string(id)] = std::move(test);
        return true;
    }

    bool stop_test(std::string_view id) {
        auto it = tests.find(std::string(id));
        auto found = it != tests.end();
        if (found) {
            it->second->stop();
            tests.erase(it);
        }

        return found;
    }

    void create_console_command(std::vector<std::string> const& path, std::string id, test_creator creator) {
        using namespace modloader::win;
        console::register_command(
            path,
            [id, creator](std::string const& command, std::vector<console::CommandParam> const& params) {
                if (params.empty()) {
                    console::console_send("Invalid number of arguments. Expected at least 1");
                    return;
                }

                if (!params[0].name.empty() || (params[0].value != "start" && params[0].value != "stop")) {
                    console::console_send("Invalid value. Expected 'start' or 'stop'");
                    return;
                }

                if (params[0].value == "start") {
                    console::console_send("starting test.");
                    auto test = creator();
                    if (start_test(id, test, std::span<modloader::win::console::CommandParam const>(params.begin() + 1, params.end()))) {
                        console::console_send("Failed to start test.");
                    }
                } else {
                    if (params.size() != 1) {
                        console::console_send("Invalid number of arguments. Expected 1");
                        return;
                    }

                    console::console_send("stopping test.");
                    if (stop_test(id)) {
                        console::console_send("Failed to stop test.");
                    }
                }
            },
            true
        );
    }
} // namespace randomizer_tester

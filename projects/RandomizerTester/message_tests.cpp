#include <test_runner.h>

#include <Core/api/game/game.h>
#include <Core/api/messages/message_box.h>
#include <Core/core.h>

#include <Modloader/app/methods/OnScreenPositions.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>

#include <memory>
#include <string>

using namespace modloader::win;

namespace randomizer_tester {
    std::shared_ptr<ITest> counter_test() {
        struct VisibilityToggleData {
            std::shared_ptr<core::api::messages::MessageBox> message_box;
        };

        return std::make_shared<Test<VisibilityToggleData>>(
            [](auto test) {
                test.data.message_box = std::make_shared<core::api::messages::MessageBox>();
                test.data.message_box->position().set(app::classes::OnScreenPositions::get_MiddleCenter());
                test.data.message_box->text().set(std::string("time: ") + std::to_string(test.total_time));
                test.data.message_box->show();
            },
            [](auto test) {
                test.data.message_box->text().set(std::string("time: ") + std::to_string(test.total_time));
            },
            [](auto test) {}
        );
    }

    std::shared_ptr<ITest> visibility_toggle_test() {
        struct VisibilityToggleData {
            std::shared_ptr<core::api::messages::MessageBox> message_box;
        };

        return std::make_shared<Test<VisibilityToggleData>>(
            [](auto test) {
                test.data.message_box = std::make_shared<core::api::messages::MessageBox>();
                test.data.message_box->position().set(app::classes::OnScreenPositions::get_MiddleCenter());
                test.data.message_box->text().set(std::string("time: ") + std::to_string(test.total_time));
            },
            [](auto test) {
                if (test.data.message_box->get_visibility() == core::api::messages::MessageBox::Visibility::Visible) {
                    test.data.message_box->hide();
                } else if (test.data.message_box->get_visibility() == core::api::messages::MessageBox::Visibility::Hidden) {
                    test.data.message_box->show();
                }

                test.data.message_box->text().set(std::string("time: ") + std::to_string(test.total_time));
            },
            [](auto test) {}
        );
    }

    void show_message(std::string const& command, std::vector<modloader::win::console::CommandParam> const& params) {
        std::string text;
        for (auto const& param : params) {
            if (!text.empty()) {
                text += " ";
            }

            if (!param.name.empty()) {
                text += param.name;
                text += "=";
            }

            text += param.value;
        }

        core::message_controller().queue_central({ .text = text, .duration = 10, .prioritized = command == "test.message_box.show_priority" });
    }

    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        create_console_command({ "test", "message_box", "counter" }, "message_box_counter", counter_test);
        create_console_command({ "test", "message_box", "visibility_toggle" }, "message_box_visibility_toggle", visibility_toggle_test);
        modloader::win::console::register_command({ "test", "message_box", "show" }, show_message, true);
        modloader::win::console::register_command({ "test", "message_box", "show_priority" }, show_message, true);
    });
} // namespace randomizer_tester

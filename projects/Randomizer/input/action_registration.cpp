#include <Randomizer/features/credits.h>
#include <Randomizer/game/map/teleport_anywhere.h>
#include <Randomizer/randomizer.h>

#include <Core/api/game/debug_menu.h>
#include <Core/api/game/player.h>
#include <Core/core.h>
#include <Core/input/input_handling.h>
#include <Core/settings.h>

#include <Modloader/app/methods/UnityEngine/Application.h>
#include <Modloader/modloader.h>

namespace randomizer::input {
    namespace {
        auto on_binding1_before = core::input::single_input_bus().register_handler(Action::Binding1, EventTiming::Before, [](auto, auto) {
            game_seed().trigger(seed::SeedClientEvent::Binding1);
        });

        auto on_binding2_before = core::input::single_input_bus().register_handler(Action::Binding2, EventTiming::Before, [](auto, auto) {
            game_seed().trigger(seed::SeedClientEvent::Binding2);
        });

        auto on_binding3_before = core::input::single_input_bus().register_handler(Action::Binding3, EventTiming::Before, [](auto, auto) {
            game_seed().trigger(seed::SeedClientEvent::Binding3);
        });

        auto on_binding4_before = core::input::single_input_bus().register_handler(Action::Binding4, EventTiming::Before, [](auto, auto) {
            game_seed().trigger(seed::SeedClientEvent::Binding4);
        });

        auto on_binding5_before = core::input::single_input_bus().register_handler(Action::Binding5, EventTiming::Before, [](auto, auto) {
            game_seed().trigger(seed::SeedClientEvent::Binding5);
        });

        auto on_progress_hint_before = core::input::single_input_bus().register_handler(Action::ShowProgressWithHints, EventTiming::Before, [](auto, auto) {
            game_seed().trigger(seed::SeedClientEvent::ShowProgress);
        });

        auto on_reload_before = core::input::single_input_bus().register_handler(Action::ReloadSeed, EventTiming::Before, [](auto, auto) {
            reread_seed_source();
        });

        auto on_reconnect_before = core::input::single_input_bus().register_handler(Action::ServerReconnect, EventTiming::Before, [](auto, auto) {
            server_reconnect_current_multiverse();
        });

        auto on_show_tags_before = core::input::single_input_bus().register_handler(Action::ShowTags, EventTiming::Before, [](auto, auto) {
            game_seed().show_tags_message();
        });

        auto on_show_last_pickup_before = core::input::single_input_bus().register_handler(Action::ShowLastPickup, EventTiming::Before, [](auto, auto) {
            core::message_controller().show_recent_messages();
            game_seed().trigger(seed::SeedClientEvent::RequeueLastMessage);
        });

        auto on_warp_credits_before = core::input::single_input_bus().register_handler(Action::WarpCredits, EventTiming::Before, [](auto, auto) {
            if (core::api::uber_states::UberState(34543, 11226).get<bool>()) {
                features::credits::start();
            } else {
                core::message_controller().queue_central({
                    .text = core::Property<std::string>("Game is not finished!"),
                    .prioritized = true,
                });
            }
        });

        auto on_toggle_cursor_lock_before = core::input::single_input_bus().register_handler(Action::ToggleCursorLock, EventTiming::Before, [](auto, auto) {
            core::settings::cursor_locked(!core::settings::cursor_locked());
            modloader::cursor_lock(core::settings::cursor_locked());
            core::message_controller().queue_central({
                .text = core::Property<std::string>::format("Cursor Lock {}", modloader::cursor_lock() ? "enabled" : "disabled"),
                .prioritized = true,
            });
        });

        auto on_toggle_always_show_keystones_before = core::input::single_input_bus().register_handler(Action::ToggleAlwaysShowKeystones, EventTiming::Before, [](auto, auto) {
            core::settings::always_show_keystones(!core::settings::always_show_keystones());
            core::message_controller().queue_central({
                .text = core::Property<std::string>::format("Debug {}", core::settings::always_show_keystones() ? "enabled" : "disabled"),
                .prioritized = true,
            });
        });

        auto on_show_dev_flag_before = core::input::single_input_bus().register_handler(Action::ShowDevFlag, EventTiming::Before, [](auto, auto) {
            core::message_controller().queue_central({
                .text = core::Property<std::string>::format("Dev: {}", core::settings::dev_mode() ? "True" : "False"),
                .prioritized = true,
            });
        });

        auto on_toggle_debug_before = core::input::single_input_bus().register_handler(Action::ToggleDebug, EventTiming::Before, [](auto, auto) {
            if (core::api::game::debug_menu::should_prevent_cheats()) {
                core::message_controller().queue_central({
                    .text = core::Property<std::string>("Debug is currently blocked"),
                    .prioritized = true,
                });
                return;
            }

            core::api::game::debug_menu::set_debug_enabled(
                !core::api::game::debug_menu::is_debug_enabled()
            );

            core::message_controller().queue_central({
                .text = core::Property<std::string>::format("Debug: {}", core::api::game::debug_menu::is_debug_enabled()),
                .prioritized = true,
            });
        });

        auto on_print_coordinates_before = core::input::single_input_bus().register_handler(Action::PrintCoordinates, EventTiming::Before, [](auto, auto) {
            auto position = core::api::game::player::get_position();
            core::message_controller().queue_central({
                .text = core::Property<std::string>::format("[ {}, {}, {} ]", position.x, position.y, position.z),
                .prioritized = true,
            });
            // TODO: Copy coordinates into clipboard.
        });

        auto on_teleport_cheat_before = core::input::single_input_bus().register_handler(Action::TeleportCheat, EventTiming::Before, [](auto, auto) {
            game::map::teleport_anywhere = !game::map::teleport_anywhere;
            core::message_controller().queue_central({
                .text = core::Property<std::string>::format("Teleport anywhere {}", game::map::teleport_anywhere ? "enabled" : "disabled"),
                .prioritized = true,
            });
        });

        auto on_unlock_spoilers_before = core::input::single_input_bus().register_handler(Action::UnlockSpoilers, EventTiming::Before, [](auto, auto) {
            core::api::uber_states::UberState(34543, 11226).set(1);
            core::message_controller().queue_central({
                .text = core::Property<std::string>("Spoilers unlocked"),
                .prioritized = true,
            });
        });

        auto on_force_exit_before = core::input::single_input_bus().register_handler(Action::ForceExit, EventTiming::Before, [](auto, auto) {
            UnityEngine::Application::Quit_1(0);
        });

        auto on_clear_messages_before = core::input::single_input_bus().register_handler(Action::ClearMessages, EventTiming::Before, [](auto, auto) {
            core::message_controller().clear_central();
        });
    } // namespace
} // namespace randomizer::input

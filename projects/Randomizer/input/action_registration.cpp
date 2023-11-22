#include <features/credits.h>
#include <game/map/teleport_anywhere.h>
#include <input/rando_bindings.h>
#include <randomizer.h>

#include <Core/api/game/player.h>
#include <Core/core.h>
#include <Core/settings.h>

#include <Modloader/app/methods/UnityEngine/Application.h>
#include <Modloader/modloader.h>

namespace randomizer::input {
    namespace {
        auto on_binding1_before = single_input_bus().register_handler(Action::Binding1, EventTiming::Before, [](auto, auto) {
            game_seed().grant(core::api::uber_states::UberState(UberStateGroup::GameState, 2), 0);
        });

        auto on_binding2_before = single_input_bus().register_handler(Action::Binding2, EventTiming::Before, [](auto, auto) {
            game_seed().grant(core::api::uber_states::UberState(UberStateGroup::GameState, 3), 0);
        });

        auto on_binding3_before = single_input_bus().register_handler(Action::Binding3, EventTiming::Before, [](auto, auto) {
            game_seed().grant(core::api::uber_states::UberState(UberStateGroup::GameState, 4), 0);
        });

        auto on_binding4_before = single_input_bus().register_handler(Action::Binding4, EventTiming::Before, [](auto, auto) {
            game_seed().grant(core::api::uber_states::UberState(UberStateGroup::GameState, 5), 0);
        });

        auto on_binding5_before = single_input_bus().register_handler(Action::Binding5, EventTiming::Before, [](auto, auto) {
            game_seed().grant(core::api::uber_states::UberState(UberStateGroup::GameState, 6), 0);
        });

        auto on_progress_hint_before = single_input_bus().register_handler(Action::ShowProgressWithHints, EventTiming::Before, [](auto, auto) {
            game_seed().grant(core::api::uber_states::UberState(UberStateGroup::GameState, 8), 0);
        });

        auto on_reload_before = single_input_bus().register_handler(Action::Reload, EventTiming::Before, [](auto, auto) {
            reload();
        });

        auto on_show_last_pickup_before = single_input_bus().register_handler(Action::ShowLastPickup, EventTiming::Before, [](auto, auto) {
            core::message_controller().requeue_last_saved();
        });

        auto on_warp_credits_before = single_input_bus().register_handler(Action::WarpCredits, EventTiming::Before, [](auto, auto) {
            if (core::api::uber_states::UberState().get<bool>()) {
                features::credits::start();
            } else {
                core::message_controller().queue_central({
                    .text = std::string("Credit warp not unlocked!"),
                    .prioritized = true,
                });
            }
        });

        auto on_toggle_cursor_lock_before = single_input_bus().register_handler(Action::ToggleCursorLock, EventTiming::Before, [](auto, auto) {
            modloader::cursor_lock(!modloader::cursor_lock());
            core::message_controller().queue_central({
                .text = fmt::format("Cursor Lock {}", modloader::cursor_lock() ? "enabled" : "disabled"),
                .prioritized = true,
            });
        });

        auto on_toggle_always_show_keystones_before = single_input_bus().register_handler(Action::ToggleAlwaysShowKeystones, EventTiming::Before, [](auto, auto) {
            core::settings::always_show_keystones(!core::settings::always_show_keystones());
            core::message_controller().queue_central({
                .text = fmt::format("Debug {}", core::settings::always_show_keystones() ? "enabled" : "disabled"),
                .prioritized = true,
            });
        });

        auto on_show_dev_flag_before = single_input_bus().register_handler(Action::ShowDevFlag, EventTiming::Before, [](auto, auto) {
            core::message_controller().queue_central({
                .text = fmt::format("Dev: {}", core::settings::dev_mode() ? "True" : "False"),
                .prioritized = true,
            });
        });

        auto on_toggle_debug_before = single_input_bus().register_handler(Action::ToggleDebug, EventTiming::Before, [](auto, auto) {
            core::api::game::debug_controls(!core::api::game::debug_controls());
            core::message_controller().queue_central({
                .text = fmt::format("Debug {}", core::api::game::debug_controls() ? "enabled" : "disabled"),
                .prioritized = true,
            });
        });

        auto on_print_coordinates_before = single_input_bus().register_handler(Action::PrintCoordinates, EventTiming::Before, [](auto, auto) {
            auto position = core::api::game::player::get_position();
            core::message_controller().queue_central({
                .text = fmt::format("[ {}, {}, {} ]", position.x, position.y, position.z),
                .prioritized = true,
            });
            // TODO: Copy coordinates into clipboard.
        });

        auto on_teleport_cheat_before = single_input_bus().register_handler(Action::TeleportCheat, EventTiming::Before, [](auto, auto) {
            if (game_seed().info().race_mode) {
                core::message_controller().queue_central({
                    .text = std::string("Teleport anywhere is not available in race mode"),
                    .prioritized = true,
                });
                return;
            }

            game::map::teleport_anywhere = !game::map::teleport_anywhere;
            core::message_controller().queue_central({
                .text = fmt::format("Teleport anywhere {}", game::map::teleport_anywhere ? "enabled" : "disabled"),
                .prioritized = true,
            });
        });

        auto on_unlock_spoilers_before = single_input_bus().register_handler(Action::UnlockSpoilers, EventTiming::Before, [](auto, auto) {
            if (game_seed().info().race_mode) {
                core::message_controller().queue_central({
                    .text = std::string("Unlock spoilers is not available in race mode"),
                    .prioritized = true,
                });
                return;
            }

            core::api::uber_states::UberState(34543, 11226).set(1);
            core::message_controller().queue_central({
                .text = std::string("Spoilers unlocked"),
                .prioritized = true,
            });
        });

        auto on_toggle_pickup_names_on_spoiler_before = single_input_bus().register_handler(Action::TogglePickupNamesOnSpoiler, EventTiming::Before, [](auto, auto) {
            // TODO: Toggle name labels on map to show pickup names.
        });

        auto on_force_exit_before = single_input_bus().register_handler(Action::ForceExit, EventTiming::Before, [](auto, auto) {
            app::classes::UnityEngine::Application::Quit_1(0);
        });

        auto on_clear_messages_before = single_input_bus().register_handler(Action::ClearMessages, EventTiming::Before, [](auto, auto) {
            core::message_controller().clear_central();
        });
    } // namespace
} // namespace randomizer::input

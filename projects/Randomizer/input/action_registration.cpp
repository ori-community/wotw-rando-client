#include <Randomizer/features/credits.h>
#include <Randomizer/input/rando_bindings.h>
#include <Randomizer/randomizer.h>

#include <Core/api/game/debug_menu.h>
#include <Core/api/game/player.h>
#include <Core/core.h>
#include <Core/settings.h>

#include <Modloader/app/methods/UnityEngine/Application.h>
#include <Modloader/modloader.h>

namespace randomizer::input {
    namespace {
        auto on_binding1_before = single_input_bus().register_handler(Action::Binding1, EventTiming::Before, [](auto, auto) {
            game_seed().trigger(seed::SeedClientEvent::Binding1);
        });

        auto on_binding2_before = single_input_bus().register_handler(Action::Binding2, EventTiming::Before, [](auto, auto) {
            game_seed().trigger(seed::SeedClientEvent::Binding2);
        });

        auto on_binding3_before = single_input_bus().register_handler(Action::Binding3, EventTiming::Before, [](auto, auto) {
            game_seed().trigger(seed::SeedClientEvent::Binding3);
        });

        auto on_binding4_before = single_input_bus().register_handler(Action::Binding4, EventTiming::Before, [](auto, auto) {
            game_seed().trigger(seed::SeedClientEvent::Binding4);
        });

        auto on_binding5_before = single_input_bus().register_handler(Action::Binding5, EventTiming::Before, [](auto, auto) {
            game_seed().trigger(seed::SeedClientEvent::Binding5);
        });

        auto on_progress_hint_before = single_input_bus().register_handler(Action::ShowProgressWithHints, EventTiming::Before, [](auto, auto) {
            game_seed().trigger(seed::SeedClientEvent::ShowProgress);
        });

        auto on_reload_before = single_input_bus().register_handler(Action::ReloadSeed, EventTiming::Before, [](auto, auto) {
            reread_seed_source();
        });

        auto on_reconnect_before = single_input_bus().register_handler(Action::ServerReconnect, EventTiming::Before, [](auto, auto) {
            server_reconnect_current_multiverse();
        });

        auto on_show_tags_before = single_input_bus().register_handler(Action::ShowTags, EventTiming::Before, [](auto, auto) {
            game_seed().show_tags_message();
        });

        auto on_show_last_pickup_before = single_input_bus().register_handler(Action::ShowLastPickup, EventTiming::Before, [](auto, auto) {
            recent_messages_view().show();
        });

        auto on_warp_credits_before = single_input_bus().register_handler(Action::WarpCredits, EventTiming::Before, [](auto, auto) {
            if (core::api::uber_states::UberState(34543, 11226).get<bool>()) {
                features::credits::start();
            } else {
                message_queue().enqueue({
                    .text = core::Property<std::string>("Game is not finished!"),
                }, true);
            }
        });

        auto on_toggle_cursor_lock_before = single_input_bus().register_handler(Action::ToggleCursorLock, EventTiming::Before, [](auto, auto) {
            core::settings::lock_cursor(!core::settings::lock_cursor());
            modloader::cursor_lock(core::settings::lock_cursor());
            message_queue().enqueue({
                .text = core::Property<std::string>(std::format("Cursor Lock {}", modloader::cursor_lock() ? "enabled" : "disabled")),
            }, true);
        });

        auto on_toggle_always_show_keystones_before = single_input_bus().register_handler(Action::ToggleAlwaysShowKeystones, EventTiming::Before, [](auto, auto) {
            core::settings::always_show_keystones(!core::settings::always_show_keystones());
            message_queue().enqueue({
                .text = core::Property<std::string>(std::format("Debug {}", core::settings::always_show_keystones() ? "enabled" : "disabled")),
            }, true);
        });

        auto on_show_dev_flag_before = single_input_bus().register_handler(Action::ShowDevFlag, EventTiming::Before, [](auto, auto) {
            message_queue().enqueue({
                .text = core::Property<std::string>(std::format("Developer Mode: {}", core::settings::developer_mode() ? "True" : "False")),
            }, true);
        });

        auto on_toggle_debug_before = single_input_bus().register_handler(Action::ToggleDebug, EventTiming::Before, [](auto, auto) {
            if (core::api::game::debug_menu::should_prevent_cheats()) {
                message_queue().enqueue({
                    .text = core::Property<std::string>("Debug is currently blocked"),
                }, true);
                return;
            }

            core::api::game::debug_menu::set_debug_enabled(
                !core::api::game::debug_menu::is_debug_enabled()
            );

            message_queue().enqueue({
                .text = core::Property<std::string>(std::format("Debug: {}", core::api::game::debug_menu::is_debug_enabled())),
            }, true);
        });

        auto on_print_coordinates_before = single_input_bus().register_handler(Action::PrintCoordinates, EventTiming::Before, [](auto, auto) {
            auto position = core::api::game::player::get_position();
            message_queue().enqueue({
                .text = core::Property<std::string>(std::format("[ {}, {}, {} ]", position.x, position.y, position.z)),
            }, true);
            // TODO: Copy coordinates into clipboard.
        });

        auto on_unlock_spoilers_before = single_input_bus().register_handler(Action::UnlockSpoilers, EventTiming::Before, [](auto, auto) {
            if (core::api::game::debug_menu::should_prevent_cheats()) {
                message_queue().enqueue({
                    .text = core::Property<std::string>("Cheats are blocked"),
                }, true);
                return;
            }

            core::api::uber_states::UberState(UberStateGroup::RandoState, 100).set(true);
            message_queue().enqueue({
                .text = core::Property<std::string>("Spoiler map unlocked"),
            }, true);
            map::filter::current_map_filter().set(map::filter::MapFilter::Spoiler);
        });

        auto on_force_exit_before = single_input_bus().register_handler(Action::ForceExit, EventTiming::Before, [](auto, auto) {
            app::classes::UnityEngine::Application::Quit_1(0);
        });

        auto on_clear_messages_before = single_input_bus().register_handler(Action::ClearMessages, EventTiming::Before, [](auto, auto) {
            message_queue().clear();
        });
    } // namespace
} // namespace randomizer::input

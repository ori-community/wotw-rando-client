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
        [[maybe_unused]]
        auto on_binding1_before = single_input_bus().register_handler(Action::Binding1, InputValue::Pressed, [](auto, auto) {
            game_seed().trigger(seed::SeedClientEvent::Binding1);
        });

        [[maybe_unused]]
        auto on_binding2_before = single_input_bus().register_handler(Action::Binding2, InputValue::Pressed, [](auto, auto) {
            game_seed().trigger(seed::SeedClientEvent::Binding2);
        });

        [[maybe_unused]]
        auto on_binding3_before = single_input_bus().register_handler(Action::Binding3, InputValue::Pressed, [](auto, auto) {
            game_seed().trigger(seed::SeedClientEvent::Binding3);
        });

        [[maybe_unused]]
        auto on_binding4_before = single_input_bus().register_handler(Action::Binding4, InputValue::Pressed, [](auto, auto) {
            game_seed().trigger(seed::SeedClientEvent::Binding4);
        });

        [[maybe_unused]]
        auto on_binding5_before = single_input_bus().register_handler(Action::Binding5, InputValue::Pressed, [](auto, auto) {
            game_seed().trigger(seed::SeedClientEvent::Binding5);
        });

        [[maybe_unused]]
        auto on_progress_hint_before = single_input_bus().register_handler(Action::ShowProgressWithHints, InputValue::Pressed, [](auto, auto) {
            game_seed().trigger(seed::SeedClientEvent::ShowProgress);
        });

        [[maybe_unused]]
        auto on_reload_before = single_input_bus().register_handler(Action::ReloadSeed, InputValue::Pressed, [](auto, auto) {
            reread_seed_source();
        });

        [[maybe_unused]]
        auto on_reconnect_before = single_input_bus().register_handler(Action::ReconnectToServer, InputValue::Pressed, [](auto, auto) {
            server_reconnect_current_multiverse();
        });

        [[maybe_unused]]
        auto on_show_seed_tags_before = single_input_bus().register_handler(Action::ShowSeedTags, InputValue::Pressed, [](auto, auto) {
            game_seed().show_tags_message();
        });

        [[maybe_unused]]
        auto on_show_recent_pickups_before = single_input_bus().register_handler(Action::ShowRecentPickups, InputValue::Pressed, [](auto, auto) {
            recent_messages_view().show();
        });

        [[maybe_unused]]
        auto on_toggle_cursor_lock_before = single_input_bus().register_handler(Action::ToggleCursorLock, InputValue::Pressed, [](auto, auto) {
            core::settings::lock_cursor(!core::settings::lock_cursor());
            modloader::cursor_lock(core::settings::lock_cursor());
            message_queue().enqueue({
                .text = core::Property<std::string>(std::format("Cursor Lock {}", modloader::cursor_lock() ? "enabled" : "disabled")),
            }, true);
        });

        [[maybe_unused]]
        auto on_toggle_debug_before = single_input_bus().register_handler(Action::ToggleDebug, InputValue::Pressed, [](auto, auto) {
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
    } // namespace
} // namespace randomizer::input

#include <Core/api/game/debug_menu.h>
#include <Core/core.h>
#include <Core/settings.h>
#include <Modloader/modloader.h>
#include <Randomizer/input/rando_bindings.h>
#include <Randomizer/randomizer.h>


namespace randomizer::input {
    namespace {
        [[maybe_unused]]
        auto on_binding1_before = event_bus().on<events::ActionPressed>(Action::Binding1, [](auto) {
            game_seed().trigger(seed::SeedClientEvent::Binding1);
        });

        [[maybe_unused]]
        auto on_binding2_before = event_bus().on<events::ActionPressed>(Action::Binding2, [](auto) {
            game_seed().trigger(seed::SeedClientEvent::Binding2);
        });

        [[maybe_unused]]
        auto on_binding3_before = event_bus().on<events::ActionPressed>(Action::Binding3, [](auto) {
            game_seed().trigger(seed::SeedClientEvent::Binding3);
        });

        [[maybe_unused]]
        auto on_binding4_before = event_bus().on<events::ActionPressed>(Action::Binding4, [](auto) {
            game_seed().trigger(seed::SeedClientEvent::Binding4);
        });

        [[maybe_unused]]
        auto on_binding5_before = event_bus().on<events::ActionPressed>(Action::Binding5, [](auto) {
            game_seed().trigger(seed::SeedClientEvent::Binding5);
        });

        [[maybe_unused]]
        auto on_progress_hint_before = event_bus().on<events::ActionPressed>(Action::ShowProgressWithHints, [](auto) {
            game_seed().trigger(seed::SeedClientEvent::ShowProgress);
        });

        [[maybe_unused]]
        auto on_reload_before = event_bus().on<events::ActionPressed>(Action::ReloadSeed, [](auto) {
            reread_seed_source();
        });

        [[maybe_unused]]
        auto on_reconnect_before = event_bus().on<events::ActionPressed>(Action::ReconnectToServer, [](auto) {
            server_reconnect_current_multiverse();
        });

        [[maybe_unused]]
        auto on_show_seed_tags_before = event_bus().on<events::ActionPressed>(Action::ShowSeedTags, [](auto) {
            game_seed().show_tags_message();
        });

        [[maybe_unused]]
        auto on_show_recent_pickups_before = event_bus().on<events::ActionPressed>(Action::ShowRecentPickups, [](auto) {
            recent_messages_view().show();
        });

        [[maybe_unused]]
        auto on_toggle_cursor_lock_before = event_bus().on<events::ActionPressed>(Action::ToggleCursorLock, [](auto) {
            core::settings::lock_cursor(!core::settings::lock_cursor());
            modloader::cursor_lock(core::settings::lock_cursor());
            message_queue().enqueue({
                .text = core::Property<std::string>(std::format("Cursor Lock {}", modloader::cursor_lock() ? "enabled" : "disabled")),
            }, true);
        });

        [[maybe_unused]]
        auto on_toggle_debug_before = event_bus().on<events::ActionPressed>(Action::ToggleDebug, [](auto) {
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

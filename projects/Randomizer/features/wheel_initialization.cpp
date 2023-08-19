#include <Core/core.h>
#include <Core/settings.h>

#include <Randomizer/randomizer.h>
#include <Randomizer/features/wheel.h>

namespace randomizer::features::wheel {
    void initialize_item(
        int wheel, int item, std::string name, std::string desc,
        std::string texture, wheel_callback callback)
    {
        set_wheel_item_name(wheel, item, name);
        set_wheel_item_description(wheel, item, desc);
        set_wheel_item_texture(wheel, item, texture);
        set_wheel_item_color(wheel, item, 255, 255, 255, 255);
        set_wheel_item_callback(wheel, item, app::SpellInventory_Binding__Enum::ButtonX, callback);
    }

    void on_dev_changed() {
        auto dev = core::settings::dev_mode();
        set_wheel_item_enabled(9001, 1, dev);
        set_wheel_item_enabled(9001, 2, dev);
        set_wheel_item_enabled(9001, 4, dev);
        set_wheel_item_enabled(9001, 5, dev);
        set_wheel_item_enabled(9001, 6, dev);
        set_wheel_item_enabled(9001, 7, dev);
        set_wheel_item_enabled(9001, 8, dev);
        set_wheel_item_enabled(9001, 9, dev);
        set_wheel_item_enabled(9001, 10, dev);
        refresh_wheel();
    }

    void initialize_default_wheel() {
        initialize_item(0, 11, "Rando Actions", "Contains default\nrandomizer actions", "file:assets/icons/wheel/menu.blue.png",
                        [](auto, auto, auto) { set_active_wheel(9000); });

        initialize_item(9000, 0, "Show last pickup", "Displays the message associated\nwith the last pickup.", "file:assets/icons/wheel/show_last_pickup.blue.png",
                        [](auto, auto, auto) { core::message_controller().requeue_last_saved(); });
        initialize_item(9000, 1, "Show progress, with hints.", "Displays current goal mode progress and bought hints.", "file:assets/icons/wheel/progress_summary.blue.png",
                        [](auto, auto, auto) {  });
        initialize_item(9000, 2, "Warp to credits", "Warp directly to the credits,\nonly works if you have finished the bingo.", "file:assets/icons/wheel/warp_to_credits.blue.png",
                        [](auto, auto, auto) {  });
        initialize_item(9000, 3, "Toggle keystones", "Toggle to always show the keystone ui.", "shard:1",
                        [](auto, auto, auto) { core::settings::always_show_keystones(!core::settings::always_show_keystones()); });
        initialize_item(9000, 4, "Toggle cursor lock", "Toggle to confine the mouse cursor to the window.", "file:assets/icons/wheel/cursor_lock.blue.png",
                        [](auto, auto, auto) { core::settings::cursor_locked(!core::settings::cursor_locked()); });
        initialize_item(9000, 5, "Toggle autoaim", "Toggle autoaim for bow/shuriken.", "file:assets/icons/wheel/toggle_autoaim.blue.png",
                        [](auto, auto, auto) { core::settings::autoaim(!core::settings::autoaim()); });
        initialize_item(9000, 10, "Reload", "Reloads the seed file", "file:assets/icons/wheel/reload_seed.blue.png",
                        [](auto, auto, auto) { randomizer::reload(); });
        initialize_item(9000, 11, "Next", "Go to next page of actions", "file:assets/icons/wheel/menu.blue.png",
                        [](auto, auto, auto) { set_active_wheel(9001); });

        initialize_item(9001, 0, "Toggle dev", "Toggles the dev flag.", "file:assets/icons/wheel/dev_mode.blue.png",
                        [](auto, auto, auto) { core::settings::dev_mode(!core::settings::dev_mode()); }); // TODO: Send message
        initialize_item(9001, 1, "Toggle debug", "Toggle debug controls", "file:assets/icons/wheel/toggle_debug.blue.png",
                        [](auto, auto, auto) { core::api::game::debug_controls(!core::api::game::debug_controls()); });
        initialize_item(9001, 2, "Reload file textures", "Reloads all textures with the file: designation", "file:assets/icons/wheel/reload_file_textures.blue.png",
                        [](auto, auto, auto) {});
        initialize_item(9001, 3, "Reload sprites", "Reloads all sprite animations", "file:assets/icons/wheel/reload_file_textures.blue.png",
                        [](auto, auto, auto) {});
        initialize_item(9001, 4, "Display coordinates", "Displays your current\ncoordinates as a message", "file:assets/icons/wheel/show_coordinates.blue.png",
                        [](auto, auto, auto) {});
        initialize_item(9001, 5, "Teleport cheat", "Toggles cheat to teleport\nanywhere on the map", "file:assets/icons/wheel/teleport_cheat.blue.png",
                        [](auto, auto, auto) {});
        initialize_item(9001, 6, "Unlock spoilers", "Unlock spoilers filter on the map", "file:assets/icons/wheel/unlock_spoilers.blue.png",
                        [](auto, auto, auto) {});
        initialize_item(9001, 7, "Toggle pickup names", "Sets the labels of pickups\non the spoiler/in logic filter\nto be the name of the pickup location.", "file:assets/icons/wheel/toggle_pickup_names.blue.png",
                        [](auto, auto, auto) {});
        initialize_item(9001, 8, "Reload credits", "Reloads the credits file", "file:assets/icons/wheel/reload_credits.blue.png",
                        [](auto, auto, auto) {});
        initialize_item(9001, 9, "Force Exit", "Forcibly exit the game.", "file:assets/icons/wheel/force_exit.blue.png",
                        [](auto, auto, auto) { modloader::shutdown(); });
        initialize_item(9001, 10, "Clear messages", "Clears the message queue.", "file:assets/icons/wheel/clear_messages.blue.png",
                        [](auto, auto, auto) { core::message_controller().clear_central(); });
        initialize_item(9001, 11, "Next", "Go to next page of actions", "file:assets/icons/wheel/menu.blue.png",
                        [](auto, auto, auto) { set_active_wheel(9000); });
        on_dev_changed();
    }
}
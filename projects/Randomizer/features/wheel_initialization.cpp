#include <Core/api/game/debug_menu.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/graphics/textures.h>
#include <Core/core.h>
#include <Core/settings.h>

#include <Randomizer/features/credits.h>
#include <Randomizer/features/wheel.h>
#include <Randomizer/game/map/teleport_anywhere.h>
#include <Randomizer/randomizer.h>

namespace randomizer::features::wheel {
    void initialize_item(
        int wheel, int item, std::string name, std::string desc,
        std::string texture, wheel_callback callback)
    {
        const auto position = static_cast<WheelItemPosition>(item);
        set_wheel_item_name(wheel,  position, name);
        set_wheel_item_description(wheel, position, desc);
        set_wheel_item_texture(wheel, position, texture);
        set_wheel_item_color(wheel, position, 255, 255, 255, 255);
        set_wheel_item_callback(wheel, position, app::SpellInventory_Binding__Enum::ButtonX, callback);
    }

    void on_dev_changed() {
        auto dev = core::settings::dev_mode();
        set_wheel_item_enabled(9001, static_cast<WheelItemPosition>(1), dev);
        set_wheel_item_enabled(9001, static_cast<WheelItemPosition>(2), dev);
        set_wheel_item_enabled(9001, static_cast<WheelItemPosition>(4), dev);
        set_wheel_item_enabled(9001, static_cast<WheelItemPosition>(5), dev);
        set_wheel_item_enabled(9001, static_cast<WheelItemPosition>(6), dev);
        set_wheel_item_enabled(9001, static_cast<WheelItemPosition>(7), dev);
        set_wheel_item_enabled(9001, static_cast<WheelItemPosition>(9), dev);
        set_wheel_item_enabled(9001, static_cast<WheelItemPosition>(10), dev);
        refresh_wheel();
    }

    void initialize_default_wheel() {
        initialize_item(0, 11, "Rando Actions", "Contains default\nrandomizer actions", "file:assets/icons/wheel/menu.blue.png",
                        [](auto, auto, auto) { set_active_wheel(9000); });

        initialize_item(9000, 0, "Show last pickup", "Displays the message associated\nwith the last pickup.", "file:assets/icons/wheel/show_last_pickup.blue.png",
                        [](auto, auto, auto) { game_seed().trigger(seed::SeedClientEvent::RequeueLastMessage); });
        initialize_item(9000, 1, "Show progress, with hints.", "Displays current goal mode progress and bought hints.", "file:assets/icons/wheel/progress_summary.blue.png",
                        [](auto, auto, auto) { game_seed().trigger(seed::SeedClientEvent::ShowProgress); });
        initialize_item(9000, 2, "Warp to credits", "Warp directly to the credits,\nonly works if you have finished the bingo.", "file:assets/icons/wheel/warp_to_credits.blue.png",
                        [](auto, auto, auto) {
                            if (core::api::uber_states::UberState(34543, 11226).get<bool>()) {
                                features::credits::start();
                            } else {
                                core::message_controller().queue_central({
                                    .text = core::Property<std::string>("Credit warp not unlocked!"),
                                    .prioritized = true,
                                });
                            }
                        });
        initialize_item(9000, 3, "Toggle keystones", "Toggle to always show the keystone ui.", "shard:1",
                        [](auto, auto, auto) {
                            core::settings::always_show_keystones(!core::settings::always_show_keystones());
                            core::message_controller().queue_central({
                                .text = core::Property<std::string>::format("Always show keystones: {}", core::settings::always_show_keystones()),
                                .prioritized = true,
                            });
                        });
        initialize_item(9000, 4, "Toggle cursor lock", "Toggle to confine the mouse cursor to the window.", "file:assets/icons/wheel/cursor_lock.blue.png",
                        [](auto, auto, auto) {
                            core::settings::cursor_locked(!core::settings::cursor_locked());
                            core::message_controller().queue_central({
                                .text = core::Property<std::string>::format("Cursor locked: {}", core::settings::cursor_locked()),
                                .prioritized = true,
                            });
                        });
        initialize_item(9000, 5, "Toggle autoaim", "Toggle autoaim for bow/shuriken.", "file:assets/icons/wheel/toggle_autoaim.blue.png",
                        [](auto, auto, auto) {
                            core::settings::autoaim(!core::settings::autoaim());
                            core::message_controller().queue_central({
                                .text = core::Property<std::string>::format("Autoaim: {}", core::settings::autoaim()),
                                .prioritized = true,
                            });
                        });

        if (randomizer::get_multiverse_id().has_value()) {
            initialize_item(9000, 10, "Reconnect", "Reconnect to the server", "file:assets/icons/wheel/reload_seed.blue.png",
                            [](auto, auto, auto) { randomizer::server_reconnect_current_multiverse(); });
        }

        initialize_item(9000, 11, "Next", "Go to next page of actions", "file:assets/icons/wheel/menu.blue.png",
                        [](auto, auto, auto) { set_active_wheel(9001); });

        initialize_item(9001, 0, "Toggle dev", "Toggle developer tools", "file:assets/icons/wheel/dev_mode.blue.png",
                        [](auto, auto, auto) {
                            core::settings::dev_mode(!core::settings::dev_mode());
                            core::message_controller().queue_central({
                                .text = core::Property<std::string>::format("Dev mode: {}", core::settings::dev_mode()),
                                .prioritized = true,
                            });
                            on_dev_changed();
                        });
        initialize_item(9001, 1, "Toggle debug", "Toggle debug controls", "file:assets/icons/wheel/toggle_debug.blue.png",
                        [](auto, auto, auto) {
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
        initialize_item(9001, 2, "Reload file textures", "Reloads all 'file:' textures", "file:assets/icons/wheel/reload_file_textures.blue.png",
                        [](auto, auto, auto) {
                            core::api::graphics::textures::reload_all_file_textures();
                            core::message_controller().queue_central({
                                .text = core::Property<std::string>::format("Texture files reloaded."),
                                .prioritized = true,
                            });
                        });
        initialize_item(9001, 3, "Reload sprites", "Reloads all sprite animations", "file:assets/icons/wheel/reload_file_textures.blue.png",
                        [](auto, auto, auto) {});
        initialize_item(9001, 4, "Display coordinates", "Displays your current\ncoordinates as a message", "file:assets/icons/wheel/show_coordinates.blue.png",
                        [](auto, auto, auto) {
                            static core::api::messages::MessageBox box;
                            static common::registration_handle_t handle;
                            if (handle == nullptr) {
                                box.screen_position().set(core::api::messages::ScreenPosition::BottomLeft);
                                box.position().set(1, 0, 0);
                                box.show_box().set(false);
                                box.show(false, false);
                                handle = core::api::game::event_bus().register_handler(GameEvent::Update, EventTiming::After, [](auto, auto) {
                                    const auto [x, y, z] = core::api::game::player::get_position();
                                    box.text().set_format("{:.3f}, {:.3f}", x, y);
                                });
                            } else {
                                handle = nullptr;
                                box.hide();
                            }
                        });
        initialize_item(9001, 5, "Teleport cheat", "Toggles cheat to teleport\nanywhere on the map", "file:assets/icons/wheel/teleport_cheat.blue.png",
                        [](auto, auto, auto) {
                            if (core::api::game::debug_menu::should_prevent_cheats()) {
                                core::message_controller().queue_central({
                                    .text = core::Property<std::string>("Teleport anywhere is not available"),
                                    .prioritized = true,
                                });
                                return;
                            }

                            game::map::teleport_anywhere = !game::map::teleport_anywhere;
                            core::message_controller().queue_central({
                                .text = core::Property<std::string>::format("Teleport anywhere {}", game::map::teleport_anywhere ? "enabled" : "disabled"),
                                .prioritized = true,
                            });
                        });
        initialize_item(9001, 6, "Unlock spoilers", "Unlock spoilers filter on the map", "file:assets/icons/wheel/unlock_spoilers.blue.png",
                        [](auto, auto, auto) {
                            if (core::api::game::debug_menu::should_prevent_cheats()) {
                                core::message_controller().queue_central({
                                    .text = core::Property<std::string>("Unlock spoilers is not available"),
                                    .prioritized = true,
                                });
                                return;
                            }

                            core::api::uber_states::UberState(34543, 11226).set(1);
                            core::message_controller().queue_central({
                                .text = core::Property<std::string>("Spoilers unlocked"),
                                .prioritized = true,
                            });
                        });
        initialize_item(9001, 7, "Toggle pickup names", "Sets the labels of pickups\non the spoiler/in logic filter\nto be the name of the pickup location.", "file:assets/icons/wheel/toggle_pickup_names.blue.png",
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

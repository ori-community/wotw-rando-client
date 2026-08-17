#include <Core/api/game/debug_menu.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/graphics/textures.h>
#include <Core/settings.h>
#include <Modloader/modloader.h>

#include <Randomizer/features/credits.h>
#include <Randomizer/features/wheel.h>
#include <Randomizer/randomizer.h>

#include "Modloader/windows_api/clipboard.h"
#include "Modloader/windows_api/common.h"
#include "Randomizer/input/rando_bindings.h"

namespace randomizer::features::wheel {
    namespace {
        void initialize_item(int wheel, WheelItemPosition position, const std::string& name, const std::string& desc, const core::api::graphics::textures::TextureIdentifier& texture_identifier, const wheel_callback& callback) {
            set_wheel_item_name(wheel, position, name);
            set_wheel_item_description(wheel, position, desc);
            set_wheel_item_texture(wheel, position, texture_identifier);
            set_wheel_item_color(wheel, position, 255, 255, 255, 255);
            set_wheel_item_callback(wheel, position, WheelBind::Ability1, callback);
            set_wheel_item_callback(wheel, position, WheelBind::Ability2, callback);
            set_wheel_item_callback(wheel, position, WheelBind::Ability3, callback);
        }
    }

    void initialize_default_wheel() {
        initialize_item(0, WheelItemPosition::Bottom, "Randomizer Actions", "Randomizer actions that are always available", core::api::graphics::textures::TextureIdentifier::file("icons/wheel/menu.blue.png"), [](auto, auto, auto) {
            set_wheel_item_enabled(9000, WheelItemPosition::BottomLeft, core::settings::developer_mode() || core::api::game::debug_menu::was_debug_active_this_session());
            set_active_wheel(9000);
        });

        initialize_item(
            9000,
            WheelItemPosition::Left,
            "Show recent pickups",
            "Displays a list of\nrecently collected pickups\n[ShowRecentPickups]",
            core::api::graphics::textures::TextureIdentifier::file("icons/wheel/show_last_pickup.blue.png"),
            [](auto, auto, auto) { recent_messages_view().show(); }
        );
        initialize_item(
            9000,
            WheelItemPosition::LeftTop,
            "Seed Tags",
            "Display a list of seed tags.\n[ShowSeedTags]",
            core::api::graphics::textures::TextureIdentifier::file("icons/wheel/tags.blue.png"),
            [](auto, auto, auto) { input::trigger_action(Action::ShowSeedTags); }
        );
        initialize_item(
            9000,
            WheelItemPosition::TopLeft,
            "Warp to credits",
            "Warp directly to the credits,\nonly works if you have finished the bingo.",
            core::api::graphics::textures::TextureIdentifier::file("icons/wheel/warp_to_credits.blue.png"),
            [](auto, auto, auto) {
                if (core::api::uber_states::UberState(34543, 11226).get<bool>()) {
                    features::credits::start();
                } else {
                    message_queue().enqueue(
                        {
                            .text = core::Property<std::string>("You didn't finish the game yet!"),
                        },
                        true
                    );
                }
            }
        );
        initialize_item(
            9000,
            WheelItemPosition::Top,
            "Toggle keystones",
            "Toggle to always show the keystone ui.",
            core::api::graphics::textures::TextureIdentifier::file("icons/game/keystone.png"),
            [](auto, auto, auto) {
            core::settings::always_show_keystones(!core::settings::always_show_keystones());
            message_queue().enqueue(
                {
                    .text = core::Property<std::string>(std::format("Always show keystones: {}", core::settings::always_show_keystones())),
                },
                true
            );
        });
        initialize_item(
            9000,
            WheelItemPosition::TopRight,
            "Toggle cursor lock",
            "Toggle to confine the mouse cursor to the window.\n[ToggleCursorLock]",
            core::api::graphics::textures::TextureIdentifier::file("icons/wheel/cursor_lock.blue.png"),
            [](auto, auto, auto) {
                core::settings::lock_cursor(!core::settings::lock_cursor());
                modloader::cursor_lock(core::settings::lock_cursor());

                message_queue().enqueue(
                    {
                        .text = core::Property<std::string>(std::format("Cursor locked: {}", core::settings::lock_cursor())),
                    },
                    true
                );
            }
        );
        initialize_item(
            9000,
            WheelItemPosition::RightTop,
            "Toggle autoaim",
            "Toggle auto aim for bow/shuriken.",
            core::api::graphics::textures::TextureIdentifier::file("icons/wheel/toggle_autoaim.blue.png"),
            [](auto, auto, auto) {
            core::settings::disable_auto_aim(!core::settings::disable_auto_aim());
            message_queue().enqueue(
                {
                    .text = core::Property<std::string>(std::format("Auto Aim {}", core::settings::disable_auto_aim() ? "disabled" : "enabled")),
                },
                true
            );
        });
        initialize_item(
            9000,
            WheelItemPosition::Right,
            "Toggle minimap",
            "Toggle minimap overlay.",
            core::api::graphics::textures::TextureIdentifier::file("icons/wheel/minimap.png"),
            [](auto, auto, auto) {
            core::settings::enable_minimap(!core::settings::enable_minimap());
        });

        if (randomizer::get_multiverse_id().has_value()) {
            initialize_item(9000, WheelItemPosition::RightBottom, "Reconnect", "Reconnect to the server", core::api::graphics::textures::TextureIdentifier::file("icons/wheel/reload_seed.blue.png"), [](auto, auto, auto) {
                randomizer::server_reconnect_current_multiverse();
            });
        }

        initialize_item(
            9000,
            WheelItemPosition::Bottom,
            "Developer Tools",
            "",
            core::api::graphics::textures::TextureIdentifier::file("icons/wheel/dev_mode.blue.png"),
            [](auto, auto, auto) {
                set_active_wheel(9001);
            }
        );

        initialize_item(
            9001,
            WheelItemPosition::LeftTop,
            "Toggle debug",
            "Toggle debug controls",
            core::api::graphics::textures::TextureIdentifier::file("icons/wheel/toggle_debug.blue.png"),
            [](auto, auto, auto) { input::trigger_action(Action::ToggleDebug); }
        );
        initialize_item(
            9001,
            WheelItemPosition::TopLeft,
            "Player coordinates",
            "[Ability1] Show/Hide\n[Ability2] Copy to clipboard",
            core::api::graphics::textures::TextureIdentifier::file("icons/wheel/show_coordinates.blue.png"),
            [](auto, auto, WheelBind bind) {
                switch (bind) {
                    case WheelBind::Ability1: {
                        static core::api::messages::MessageBox box;
                        static common::Droppable::ptr_t handle;

                        if (handle == nullptr) {
                            box.coordinate_system().set(core::api::messages::CoordinateSystem::Screen);
                            box.text_alignment().set(app::AlignmentMode__Enum::Left);
                            box.box_horizontal_anchor().set(app::HorizontalAnchorMode__Enum::Left);
                            box.box_vertical_anchor().set(app::VerticalAnchorMode__Enum::Bottom);
                            box.position().set(0.05f, 0.95f, 0);
                            box.show_background().set(false);
                            box.show(false, false);
                            handle = core::api::game::event_bus().register_handler(GameEvent::Update, EventTiming::After, [](auto, auto) {
                                const auto [x, y, z] = core::api::game::player::get_position();
                                box.text().set(std::format("{:.3f}, {:.3f}", x, y));
                            });
                        } else {
                            handle = nullptr;
                            box.hide();
                        }
                    } break;
                    case WheelBind::Ability2: {
                        const auto position = core::api::game::player::get_position();
                        const auto position_text = std::format("{}, {}", position.x, position.y);

                        modloader::win::copy_text_to_clipboard(position_text);

                        message_queue().enqueue(
                            {
                                .text = core::Property<std::string>(std::format("Copied: {}", position_text)),
                            },
                            true
                        );
                    } break;
                    default: break;
                }
            }
        );
        initialize_item(
            9001,
            WheelItemPosition::Top,
            "Unlock spoilers",
            "Unlock spoilers filter on the map",
            core::api::graphics::textures::TextureIdentifier::file("icons/wheel/unlock_spoilers.blue.png"),
            [](auto, auto, auto) {
            if (core::api::game::debug_menu::should_prevent_cheats()) {
                message_queue().enqueue({
                    .text = core::Property<std::string>("Cheats are blocked"),
                }, true);
                return;
            }

            core::api::uber_states::UberState(UberStateGroup::RandoState, 100).set(true);
            message_queue().enqueue(
                {
                    .text = core::Property<std::string>("Spoiler map unlocked"),
                },
                true
            );
            map::filter::current_map_filter().set(map::filter::MapFilter::Spoiler);
        });
        initialize_item(
            9001,
            WheelItemPosition::TopRight,
            "Force Exit",
            "Forcibly exit the game.",
            core::api::graphics::textures::TextureIdentifier::file("icons/wheel/force_exit.blue.png"),
            [](auto, auto, auto) { modloader::win::common::force_exit(0); }
        );
        initialize_item(
            9001,
            WheelItemPosition::RightTop,
            "Clear messages",
            "[Ability1] Clear all\n[Ability2] Clear queue\n[Ability3] Clear free",
            core::api::graphics::textures::TextureIdentifier::file("icons/wheel/clear_messages.blue.png"),
            [](auto, auto, auto bind) {
                if (bind == WheelBind::Ability1 || bind == WheelBind::Ability2) {
                    message_queue().clear();
                }

                if (bind == WheelBind::Ability1 || bind == WheelBind::Ability3) {
                    game_seed().environment().clear_free_message_boxes();
                }
            }
        );

        initialize_item(9001, WheelItemPosition::Bottom, "Back", "", core::api::graphics::textures::TextureIdentifier::file("icons/wheel/back.blue.png"), [](auto, auto, auto) { set_active_wheel(9000); });
    }
} // namespace randomizer::features::wheel

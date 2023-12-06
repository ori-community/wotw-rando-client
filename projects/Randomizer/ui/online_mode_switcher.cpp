#include <Modloader/il2cpp_helpers.h>

#include <Common/event_bus.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/graphics/sprite.h>
#include <Core/api/messages/text_style.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/utils/misc.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/types/MessageBox.h>
#include <Modloader/app/types/XboxLiveIdentityUI.h>
#include <Modloader/modloader.h>
#include <Randomizer/randomizer.h>

using namespace utils;
using namespace app::classes;

namespace randomizer::online_indicator {
    namespace {
        bool is_in_main_menu = false;

        std::vector<std::shared_ptr<core::reactivity::ReactiveEffect>> reactive_effects;

        il2cpp::WeakGCRef<app::MessageBox> name_message_box;
        il2cpp::WeakGCRef<app::MessageBox> status_message_box;
        il2cpp::WeakGCRef<app::MessageBox> description_message_box;
        il2cpp::WeakGCRef<app::GameObject> separator_go;
        std::unique_ptr<core::api::graphics::Sprite> sprite;

        core::Property<std::string> name_property;
        core::Property<std::string> status_property("Offline");
        core::Property<std::string> description_property;

        void set_text(app::MessageBox* box, std::string const& text) {
            text_style::create_styles(box->fields.TextBox, text);
            box->fields.MessageProvider = core::api::system::create_message_provider(text);
            MessageBox::RefreshText_1(box);
        }

        void on_ready(ModloaderEvent) {
            core::reactivity::watch_effect()
                .effect(name_property)
                .after([]() {
                if (name_message_box.is_valid()) {
                    set_text(*name_message_box, name_property.get());
                }
            }).finalize(reactive_effects);

            core::reactivity::watch_effect()
                .effect(status_property)
                .after([]() {
                if (status_message_box.is_valid()) {
                    set_text(*status_message_box, status_property.get());
                }
            }).finalize(reactive_effects);

            core::reactivity::watch_effect()
                .effect(description_property)
                .after([]() {
                if (description_message_box.is_valid()) {
                    set_text(*description_message_box, description_property.get());
                }
            }).finalize(reactive_effects);
        }

        void on_scene_load(const core::api::scenes::SceneLoadEventMetadata* metadata) {
            if (metadata->scene_name != "wotwTitleScreen") {
                return;
            }

            switch (metadata->state) {
                case app::SceneState__Enum::Loaded: {
                    const auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

                    const auto online_ui_go = il2cpp::unity::find_child(
                        scene_root_go,
                        std::vector<std::string>{"titleScreen (new)", "ui", "group", "II. startGame", "2. fullGameMainMenu", "OnlineProfileIdentityUI"}
                    );

                    const auto xbox_live_ui_component = il2cpp::unity::get_component<app::XboxLiveIdentityUI>(
                        online_ui_go, types::XboxLiveIdentityUI::get_class()
                    );
                    il2cpp::unity::destroy_object(xbox_live_ui_component);
                    auto online_group = il2cpp::unity::find_child(online_ui_go, "onlineGroup");

                    // "Press X to sign in/out" hints at the bottom left of the screen, we don't need these
                    il2cpp::unity::destroy_object(il2cpp::unity::find_child(online_ui_go, "onlineHint"));
                    il2cpp::unity::destroy_object(il2cpp::unity::find_child(online_ui_go, "offlineHint"));
                    il2cpp::unity::destroy_object(il2cpp::unity::find_child(online_group, std::vector<std::string> {"onlineStatus", "sharedCircleGlowB"}));
                    il2cpp::unity::destroy_object(il2cpp::unity::find_child(online_group, "UserBackground"));

                    const auto handle_textbox_go = il2cpp::unity::find_child(online_group, "handle");
                    name_message_box = il2cpp::WeakGCRef(il2cpp::unity::get_component<app::MessageBox>(handle_textbox_go, types::MessageBox::get_class()));

                    const auto online_status_textbox_go = il2cpp::unity::find_child(online_group, std::vector<std::string>{"onlineStatus", "onlineStatus"});
                    status_message_box = il2cpp::WeakGCRef(
                        il2cpp::unity::get_component<app::MessageBox>(online_status_textbox_go, types::MessageBox::get_class())
                    );

                    const auto switch_profile_textbox_go = il2cpp::unity::find_child(online_group, "switchProfile");
                    description_message_box = il2cpp::WeakGCRef(
                        il2cpp::unity::get_component<app::MessageBox>(switch_profile_textbox_go, types::MessageBox::get_class())
                    );

                    // Move separator, online status and description down a bit
                    const auto separator_go = il2cpp::unity::find_child(online_group, "separator");
                    const auto online_status_container_go = il2cpp::unity::find_child(online_group, "onlineStatus");
                    il2cpp::unity::set_local_position(online_status_container_go, app::Vector3 {-85.5f, -39.6f, -0.5f});
                    il2cpp::unity::set_local_position(separator_go, app::Vector3 {-69.8f, -32.4f, 0.3f});
                    il2cpp::unity::set_local_position(switch_profile_textbox_go, app::Vector3 {-74.3f, -32.6f, -0.5f});

                    (*description_message_box)->fields.TextBox->fields.maxHeight = 9999999;
                    set_text(*name_message_box, name_property.get());
                    set_text(*status_message_box, status_property.get());
                    set_text(*description_message_box, description_property.get());

                    sprite = std::make_unique<core::api::graphics::Sprite>(online_group);
                    sprite->enabled(true);
                    sprite->local_scale({24, 20, 1});
                    sprite->local_position({-72, -40, 0});

                    sprite->texture(core::api::graphics::textures::get_texture("file:assets/textures/gradient_transparent_dark.png"));

                    is_in_main_menu = true;
                    break;
                }
                case app::SceneState__Enum::Disabling:
                case app::SceneState__Enum::Disabled:
                case app::SceneState__Enum::Unloading: {
                    is_in_main_menu = false;
                    break;
                }
                default: {
                }
            }
        }

        void update_text() {
            auto const& player = multiplayer_universe().local_player();
            if (player.has_value()) {
                name_property.set(player.value().user.name());
            } else {
                name_property.set("You");
            }

            std::string description;
            if (player.has_value()) {
                description += std::format("Game: {}\n", multiplayer_universe().multiverse_info()->id());
                description += std::format("Universe: {}\n", player->universe.name());
            }

            description += std::format("Seed: {}\n", game_seed().info().name);
            description += "Flags:";
            for (auto flag: game_seed().info().flags) {
                description += std::format("\n   - {}", flag);
            }

            description_property.set(description);
        }

        auto last_state = online::NetworkClient::State::Closed;
        void on_network_status(const online::NetworkClient::State state) {
            if (state == online::NetworkClient::State::Closed) {
                status_property.set("Offline");
            } else if (state == online::NetworkClient::State::Authenticating) {
                status_property.set("Authenticating");
            } else if (state == online::NetworkClient::State::Reconnecting) {
                status_property.set("Reconnecting");
            } else if (state == online::NetworkClient::State::Connected) {
                status_property.set("Connected");
            }

            last_state = state;
        }

        auto on_scene_load_handle = core::api::scenes::event_bus().register_handler(on_scene_load);
        auto on_ready_handle = modloader::event_bus().register_handler(ModloaderEvent::GameReady, on_ready);
        auto on_seed_loaded_handle = event_bus().register_handler(RandomizerEvent::SeedLoaded, EventTiming::After, [](auto, auto) { update_text(); });
        auto on_network_status_handle = network_client().event_bus().register_handler(on_network_status);
        auto on_multiverse_update_handle = multiplayer_universe().event_bus().register_handler(
            online::MultiplayerUniverse::Event::MultiverseUpdated,
            EventTiming::After,
            [](auto, auto) { update_text(); }
        );
    } // namespace

    void notify_online_status_changed() {}
} // namespace randomizer::online_indicator

#include <Randomizer/ui/main_menu_seed_info.h>
#include <Modloader/il2cpp_helpers.h>

#include <Common/event_bus.h>
#include <Common/variant_cast.h>
#include <Core/api/game/debug_menu.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/graphics/sprite.h>
#include <Core/api/messages/text_style.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/utils/misc.h>
#include <Modloader/app/methods/CleverMenuItem.h>
#include <Modloader/app/methods/GameStateMachine.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/methods/SaveGameController.h>
#include <Modloader/app/methods/SaveSlotsManager.h>
#include <Modloader/app/methods/SaveSlotsUI.h>
#include <Modloader/app/methods/SetTitleScreenAction.h>
#include <Modloader/app/methods/System/IO/File.h>
#include <Modloader/app/types/CleverMenuItem.h>
#include <Modloader/app/types/GameStateMachine.h>
#include <Modloader/app/types/MessageBox.h>
#include <Modloader/app/types/TitleScreenManager.h>
#include <Modloader/app/types/XboxLiveIdentityUI.h>
#include <Modloader/modloader.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/seed/legacy_parser/parser.h>
#include <magic_enum.hpp>

using namespace utils;
using namespace app::classes;

namespace randomizer::main_menu_seed_info {
    namespace {
        using generic_error_t = std::string;

        constexpr int MAX_DISPLAYED_SEED_PATH_LENGTH = 32;

        bool is_in_main_menu = false;
        bool is_in_save_slots_ui_on_enable = false;

        std::vector<std::shared_ptr<core::reactivity::ReactiveEffect>> reactive_effects;

        il2cpp::WeakGCRef<app::MessageBox> name_message_box;
        il2cpp::WeakGCRef<app::MessageBox> status_message_box;
        il2cpp::WeakGCRef<app::MessageBox> description_message_box;
        il2cpp::WeakGCRef<app::GameObject> separator_go;
        std::unique_ptr<core::api::graphics::Sprite> sprite;

        std::optional<il2cpp::WeakGCRef<app::CleverMenuItem>> easy_mode_menu_item_handle;
        std::optional<il2cpp::WeakGCRef<app::CleverMenuItem>> normal_mode_menu_item_handle;
        std::optional<il2cpp::WeakGCRef<app::CleverMenuItem>> hard_mode_menu_item_handle;

        core::Property<std::string> name_property;
        core::Property<std::string> status_property("Offline");
        core::Property<std::string> description_property;

        common::registration_handle_t on_seed_loaded_handle;
        common::registration_handle_t on_network_status_handle;
        common::registration_handle_t on_multiverse_update_handle;
        common::registration_handle_t on_should_enforce_seed_difficulty_update_handle;

        bool poll_current_seed_source_until_not_loading = false;
        std::shared_ptr<seed::SeedSource> current_seed_source = nullptr;
        std::variant<seed::Seed::SeedMetaData, seed::legacy_parser::ParserError, generic_error_t> current_seed_meta_data_result = std::string("No seed loaded");
        auto current_network_state = online::NetworkClient::State::Closed;

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

            current_network_state = state;
        }

        void set_text(app::MessageBox* box, std::string const& text) {
            text_style::create_styles(box->fields.TextBox, text);
            box->fields.MessageProvider = core::api::system::create_message_provider(text);
            MessageBox::RefreshText_1(box);
        }

        template<typename... Alts, typename... Ts>
        constexpr bool holds_any_of(std::variant<Ts...> const& v) noexcept {
            return (std::holds_alternative<Alts>(v) || ...);
        }

        void update_text() {
            auto const& player = multiplayer_universe().local_player();

            const auto seed_metadata = std::holds_alternative<seed::Seed::SeedMetaData>(current_seed_meta_data_result)
                ? std::make_optional(std::get<seed::Seed::SeedMetaData>(current_seed_meta_data_result))
                : std::nullopt;

            const auto should_display_network_info = player.has_value() && seed_metadata.has_value() && current_seed_source != nullptr &&
                current_seed_source->get_multiverse_id().has_value();

            if (should_display_network_info) {
                name_property.set(player.value().user.name());
            } else {
                name_property.set("You");
            }

            std::string description;
            if (should_display_network_info) {
                description += std::format("Game: {}\n", multiplayer_universe().multiverse_info()->id());
                description += std::format("Universe: {}\n", player->universe.name());
            }

            if (current_seed_source != nullptr) {
                const auto current_seed_source_description = current_seed_source->get_description();
                description += std::format(
                    "Seed: {}\n",
                    current_seed_source_description.size() > MAX_DISPLAYED_SEED_PATH_LENGTH
                        ? std::format("...{}", current_seed_source_description.substr(current_seed_source_description.size() - MAX_DISPLAYED_SEED_PATH_LENGTH, MAX_DISPLAYED_SEED_PATH_LENGTH))
                        : current_seed_source_description
                );
            }

            if (seed_metadata.has_value()) {
                const auto meta = seed_metadata.value();
                description += std::format("Slug: <hex_9ee2f7ff>{}</>\n", meta.slug);
                description += "Flags:";
                for (auto flag: meta.flags) {
                    description += std::format("\n   - {}", flag);
                }
            } else if (current_seed_source != nullptr && current_seed_source->get_error().has_value()) {
                description += "Error loading seed:\n";
                description += current_seed_source->get_error().value();
            } else if (poll_current_seed_source_until_not_loading) {
                description += "Loading seed...";
            } else if (holds_any_of<seed::legacy_parser::ParserError, generic_error_t>(current_seed_meta_data_result)) {
                description += "Error parsing seed:\n";

                if (std::holds_alternative<seed::legacy_parser::ParserError>(current_seed_meta_data_result)) {
                    description += magic_enum::enum_name(std::get<seed::legacy_parser::ParserError>(current_seed_meta_data_result));
                } else if (std::holds_alternative<std::string>(current_seed_meta_data_result)) {
                    description += std::get<std::string>(current_seed_meta_data_result);
                }
            }

            description_property.set(description);
        }

        template<typename T>
        void do_if_valid(std::optional<il2cpp::WeakGCRef<T>> object, const std::function<void(T*)> action) {
            if (object.has_value() && **object != nullptr) {
                action(**object);
            }
        }

        void set_current_multiverse(std::optional<long> multiverse_id) {
            if (multiverse_id.has_value()) {
                randomizer::server_connect(*multiverse_id);
            } else {
                randomizer::server_disconnect();
                multiplayer_universe().set_should_block_starting_new_game(false);
                multiplayer_universe().set_enforce_seed_difficulty(false);
                multiplayer_universe().set_restrict_to_save_guid(std::nullopt);
                multiplayer_universe().set_should_restrict_to_save_guid(false);
                core::api::game::debug_menu::set_should_prevent_cheats(false);
            }
        }

        void on_ready(ModloaderEvent) {
            core::reactivity::watch_effect()
                .effect(name_property)
                .after([]() {
                    if (name_message_box.is_valid()) {
                        set_text(*name_message_box, name_property.get());
                    }
                })
                .finalize(reactive_effects);

            core::reactivity::watch_effect()
                .effect(status_property)
                .after([]() {
                    if (status_message_box.is_valid()) {
                        set_text(*status_message_box, status_property.get());
                    }
                })
                .finalize(reactive_effects);

            core::reactivity::watch_effect()
                .effect(description_property)
                .after([]() {
                    if (description_message_box.is_valid()) {
                        set_text(*description_message_box, description_property.get());
                    }
                })
                .finalize(reactive_effects);
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

                    const auto profile_selected_go = il2cpp::unity::find_child(
                        scene_root_go, std::vector<std::string>{"titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu"}
                    );

                    il2cpp::unity::set_parent(online_ui_go, profile_selected_go);

                    const auto xbox_live_ui_component = il2cpp::unity::get_component<app::XboxLiveIdentityUI>(
                        online_ui_go, types::XboxLiveIdentityUI::get_class()
                    );
                    il2cpp::unity::destroy_object(xbox_live_ui_component);
                    auto online_group = il2cpp::unity::find_child(online_ui_go, "onlineGroup");

                    // "Press X to sign in/out" hints at the bottom left of the screen, we don't need these
                    il2cpp::unity::destroy_object(il2cpp::unity::find_child(online_ui_go, "onlineHint"));
                    il2cpp::unity::destroy_object(il2cpp::unity::find_child(online_ui_go, "offlineHint"));
                    il2cpp::unity::destroy_object(il2cpp::unity::find_child(online_group, std::vector<std::string>{"onlineStatus", "sharedCircleGlowB"}));
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
                    il2cpp::unity::set_local_position(online_status_container_go, app::Vector3{-85.5f, -39.6f, -0.5f});
                    il2cpp::unity::set_local_position(separator_go, app::Vector3{-69.8f, -32.4f, 0.3f});
                    il2cpp::unity::set_local_position(switch_profile_textbox_go, app::Vector3{-74.3f, -32.6f, -0.5f});

                    (*description_message_box)->fields.TextBox->fields.maxHeight = 9999999;
                    set_text(*name_message_box, name_property.get());
                    set_text(*status_message_box, status_property.get());
                    set_text(*description_message_box, description_property.get());

                    sprite = std::make_unique<core::api::graphics::Sprite>(online_group);
                    sprite->enabled(true);
                    sprite->local_scale({24, 20, 1});
                    sprite->local_position({-72, -40, 0});

                    sprite->texture(core::api::graphics::textures::get_texture("file:assets/textures/gradient_transparent_dark.png"));

                    easy_mode_menu_item_handle = il2cpp::WeakGCRef(il2cpp::unity::get_component<app::CleverMenuItem>(
                            il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{"titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "0. easyMode"}), types::CleverMenuItem::get_class()));
                    normal_mode_menu_item_handle = il2cpp::WeakGCRef(il2cpp::unity::get_component<app::CleverMenuItem>(
                            il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{"titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "0. normalMode"}), types::CleverMenuItem::get_class()));
                    hard_mode_menu_item_handle = il2cpp::WeakGCRef(il2cpp::unity::get_component<app::CleverMenuItem>(
                            il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{"titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "0. hardMode"}), types::CleverMenuItem::get_class()));

                    is_in_main_menu = true;

                    on_network_status_handle = network_client().event_bus().register_handler(on_network_status);
                    on_multiverse_update_handle = multiplayer_universe().event_bus().register_handler(
                        online::MultiplayerUniverse::Event::MultiverseUpdated, EventTiming::After, [](auto, auto) { update_text(); }
                    );
                    on_should_enforce_seed_difficulty_update_handle = multiplayer_universe().event_bus().register_handler(
                        online::MultiplayerUniverse::Event::ShouldEnforceSeedDifficultyChanged, EventTiming::After, [](auto, auto) { update_difficulty_menu_items(); }
                    );
                    break;
                }
                case app::SceneState__Enum::Disabling:
                case app::SceneState__Enum::Disabled:
                case app::SceneState__Enum::Unloading: {
                    sprite = nullptr;
                    is_in_main_menu = false;
                    on_seed_loaded_handle = nullptr;
                    on_network_status_handle = nullptr;
                    on_multiverse_update_handle = nullptr;
                    break;
                }
                default: {
                }
            }
        }

        [[maybe_unused]]
        auto on_scene_load_handle = core::api::scenes::event_bus().register_handler(on_scene_load);

        [[maybe_unused]]
        auto on_ready_handle = modloader::event_bus().register_handler(ModloaderEvent::GameReady, on_ready);

        IL2CPP_INTERCEPT(SaveSlotsManager, void, set_CurrentSlotIndex, (int index)) {
            next::SaveSlotsManager::set_CurrentSlotIndex(index);

            // Don't run the logic if we are currently in SaveSlotsUI::OnEnable
            if (is_in_save_slots_ui_on_enable) {
                return;
            }

            if (SaveSlotsManager::SaveFileExists(index)) {
                on_seed_loaded_handle = nullptr;

                const auto save_controller = core::api::game::save_controller();
                const auto save_info = SaveGameController::GetSaveFileInfo(save_controller, index, -1);

                const auto data = System::IO::File::ReadAllBytes(save_info->fields.m_FullSaveFilePath);

                auto seed_meta_data = std::make_shared<seed::SaveSlotSeedMetaData>();
                const auto read_slots = core::save_meta::read_save_meta_slots_from_byte_array(
                    data,
                    {
                        {SaveMetaSlot::SeedMetaData, seed_meta_data}
                    }
                );

                std::optional<long> connect_to_multiverse_id = std::nullopt;

                if (read_slots.contains(SaveMetaSlot::SeedMetaData)) {
                    const auto meta = randomizer::seed::legacy_parser::parse_meta_data(seed_meta_data->seed_content);
                    current_seed_meta_data_result = variant_cast(meta);
                    current_seed_source = seed_meta_data->get_source();

                    if (std::holds_alternative<seed::Seed::SeedMetaData>(meta)) {
                        connect_to_multiverse_id = current_seed_source->get_multiverse_id();
                    }
                } else {
                    current_seed_source = nullptr;
                    current_seed_meta_data_result = "Error reading save metadata.\nThis might be a vanilla save.";
                }

                poll_current_seed_source_until_not_loading = false;
                set_current_multiverse(connect_to_multiverse_id);

                update_text();
            } else {
                load_new_game_source();

                static auto update = [] {
                    current_seed_source = get_new_game_seed_source();
                    current_seed_meta_data_result = std::string("Loading...");

                    poll_current_seed_source_until_not_loading = true;

                    set_current_multiverse(current_seed_source->get_multiverse_id());

                    update_text();
                };

                on_seed_loaded_handle = event_bus().register_handler(RandomizerEvent::NewGameSeedSourceUpdated, EventTiming::After, [](auto, auto) {
                    update();
                });

                update();
            }
        }

        IL2CPP_INTERCEPT(SetTitleScreenAction, void, Perform, (app::SetTitleScreenAction * this_ptr, app::IContext* context)) {
            next::SetTitleScreenAction::Perform(this_ptr, context);

            if (this_ptr->fields.Screen == app::TitleScreenManager_Screen__Enum::ProfileSelected) {
                update_difficulty_menu_items();
            }
        }

        [[maybe_unused]]
        auto on_fixed_update = core::api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, [](auto, auto) {
            if (!poll_current_seed_source_until_not_loading) {
                return;
            }

            const auto [source_status, source_seed_content] = get_new_game_seed_source()->poll();

            if (source_status == seed::SourceStatus::Loading) {
                return;
            }

            poll_current_seed_source_until_not_loading = false;

            if (source_seed_content.has_value()) {
                const auto meta = randomizer::seed::legacy_parser::parse_meta_data(*source_seed_content);
                current_seed_meta_data_result = variant_cast(meta);
            } else if (get_new_game_seed_source()->get_error().has_value()) {
                current_seed_meta_data_result = get_new_game_seed_source()->get_error().value();
            } else {
                throw std::exception("Seed source did neither supply content nor an error. Please fix this.");
            }

            update_text();
            update_difficulty_menu_items();
        });

        IL2CPP_INTERCEPT(SaveSlotsUI, void, OnEnable, (app::SaveSlotsUI * this_ptr)) {
            modloader::ScopedSetter setter(is_in_save_slots_ui_on_enable, true);
            next::SaveSlotsUI::OnEnable(this_ptr);
        }
    } // namespace

    void update_difficulty_menu_items() {
        auto allow_easy = false;
        auto allow_normal = false;
        auto allow_hard = false;

        if (
            GameStateMachine::IsInExtendedTitleScreen(types::GameStateMachine::get_class()->static_fields->m_instance) &&
            SaveSlotsManager::SlotByIndex(SaveSlotsManager::get_CurrentSlotIndex()) == nullptr // Selected save file is empty
        ) {
            if (randomizer::multiplayer_universe().should_enforce_seed_difficulty()) {
                const auto seed_metadata = std::holds_alternative<seed::Seed::SeedMetaData>(current_seed_meta_data_result)
                ? std::make_optional(std::get<seed::Seed::SeedMetaData>(current_seed_meta_data_result))
                : std::nullopt;

                if (seed_metadata.has_value()) {
                    allow_easy = seed_metadata->intended_difficulty == app::GameController_GameDifficultyModes__Enum::Easy;
                    allow_normal = seed_metadata->intended_difficulty == app::GameController_GameDifficultyModes__Enum::Normal;
                    allow_hard = seed_metadata->intended_difficulty == app::GameController_GameDifficultyModes__Enum::Hard;
                }
            } else {
                allow_easy = true;
                allow_normal = true;
                allow_hard = true;
            }
        }

        do_if_valid<app::CleverMenuItem>(easy_mode_menu_item_handle, [&](auto menu_item) { il2cpp::unity::set_active(menu_item, allow_easy); });
        do_if_valid<app::CleverMenuItem>(normal_mode_menu_item_handle, [&](auto menu_item) { il2cpp::unity::set_active(menu_item, allow_normal); });
        do_if_valid<app::CleverMenuItem>(hard_mode_menu_item_handle, [&](auto menu_item) { il2cpp::unity::set_active(menu_item, allow_hard); });
    }
} // namespace randomizer::main_menu_seed_info

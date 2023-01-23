#include <Modloader/il2cpp_helpers.h>

#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/utils/event_bus.h>
#include <Core/utils/misc.h>
#include <Modloader/app/methods/UnityEngine/Transform.h>
#include <Modloader/app/types/XBoxLiveIdentityUI.h>
#include <Modloader/app/types/TextBox.h>
#include <Modloader/common.h>

using namespace utils;
using namespace app::classes;

namespace randomizer::online_indicator {
    namespace {
        bool is_in_main_menu = false;

        app::TextBox* online_status_textbox = nullptr;
        app::TextBox* handle_textbox = nullptr;
        app::GameObject* separator_go = nullptr;

        void update_online_indicator() {

        }

        void on_scene_load(scenes::SceneLoadEventMetadata* metadata, EventTiming timing) {
            if (metadata->scene_name != "wotwTitleScreen") {
                return;
            }

            switch (metadata->state) {
                case app::SceneState__Enum::Loaded: {
                    auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

                    auto online_ui_go = il2cpp::unity::find_child(
                            scene_root_go,
                            std::vector<std::string>{
                                    "titleScreen (new)",
                                    "ui",
                                    "group",
                                    "II. startGame",
                                    "2. fullGameMainMenu",
                                    "OnlineProfileIdentityUI" }
                    );

                    auto xbox_live_ui_component = il2cpp::unity::get_component<app::XboxLiveIdentityUI>(online_ui_go, types::XboxLiveIdentityUI::get_class());
                    il2cpp::unity::destroy_object(xbox_live_ui_component);

                    // "Press X to sign in/out" hints at the bottom left of the screen, we don't need these
                    il2cpp::unity::destroy_object(il2cpp::unity::find_child(online_ui_go, "onlineHint"));
                    il2cpp::unity::destroy_object(il2cpp::unity::find_child(online_ui_go, "offlineHint"));

                    /*
                    auto handle_textbox_go = il2cpp::unity::find_child(online_ui_go, "handle");
                    handle_textbox = il2cpp::unity::get_component<app::TextBox>(handle_textbox_go, types::TextBox::get_class());

                    auto online_status_textbox_go = il2cpp::unity::find_child(online_ui_go, std::vector<std::string>{"onlineStatus", "onlineStatus"});
                    online_status_textbox = il2cpp::unity::get_component<app::TextBox>(online_status_textbox_go, types::TextBox::get_class());
                    */

                    is_in_main_menu = true;
                    break;
                }
                case app::SceneState__Enum::Disabling:
                case app::SceneState__Enum::Disabled:
                case app::SceneState__Enum::Unloading: {
                    is_in_main_menu = false;
                    break;
                }
                default: {}
            }
        }

        void initialize() {
            // TODO: Enable once online flag is removed from seeds
            // scenes::event_bus().register_handler(&on_scene_load);
        }

        CALL_ON_INIT(initialize);
    } // namespace

    void notify_online_status_changed() {

    }
}

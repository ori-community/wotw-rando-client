#include <Modloader/il2cpp_helpers.h>

#include <Common/event_bus.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/utils/misc.h>
#include <Modloader/app/methods/UnityEngine/Transform.h>
#include <Modloader/app/types/XBoxLiveIdentityUI.h>
#include <Modloader/app/types/TextBox.h>
#include <Modloader/app/types/XboxLiveIdentityUI.h>
#include <Modloader/modloader.h>

using namespace utils;
using namespace app::classes;

namespace randomizer::online_indicator {
    namespace {
        bool is_in_main_menu = false;

        il2cpp::WeakGCRef<app::TextBox> online_status_textbox;
        il2cpp::WeakGCRef<app::TextBox> handle_textbox;
        il2cpp::WeakGCRef<app::GameObject> separator_go;

        void on_scene_load(core::api::scenes::SceneLoadEventMetadata* metadata, EventTiming timing) {
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
                default: {
                }
            }
        }

        // TODO: Enable once online flag is removed from seeds
        // auto on_scene_load_handle = scenes::event_bus().register_handler(EventTiming::After, &on_scene_load);
    } // namespace

    void notify_online_status_changed() {
    }
} // namespace randomizer::online_indicator

#include <Il2CppModLoader/app/methods/UnityEngine/GameObject.h>
#include <Il2CppModLoader/app/methods/UnityEngine/Transform.h>
#include <Il2CppModLoader/il2cpp_helpers.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/windows_api/console.h>
#include <enums/game_event.h>
#include <event_bus.h>
#include <features/scenes/scene_load.h>
#include <game/game.h>

using namespace app::methods;

namespace {
    int open_door_in_frames = 2;
    app::Transform* left_door_transform = nullptr;
    app::Transform* right_door_transform = nullptr;
    app::GameObject* keyrings_go = nullptr;

    void open_door() {
        if (
                scenes::scene_is_loaded("lumaPoolsC") ||
                !il2cpp::unity::is_valid(left_door_transform) ||
                !il2cpp::unity::is_valid(right_door_transform) ||
                !il2cpp::unity::is_valid(keyrings_go)
        ) {
            return;
        }

        UnityEngine::Transform::set_position(left_door_transform, app::Vector3{-0.9f, 8.0f, 0.0f});
        UnityEngine::Transform::set_position(right_door_transform, app::Vector3{0.7f, -8.0f, 0.0f});
        UnityEngine::GameObject::SetActive(keyrings_go, false);

        modloader::win::console::console_send("Opened lagoon door");
    }

    void on_scene_load(scenes::SceneLoadEventMetadata* metadata, EventTiming timing) {
        if (metadata->state != app::SceneState__Enum::Enabled) {
            return;
        }

        if (metadata->scene_name == "lumaPoolsC") {
            auto scene_root_go = il2cpp::unity::get_game_object(metadata->scene->fields.SceneRoot);

            auto door_go = il2cpp::unity::find_child(
                    scene_root_go,
                    std::vector<std::string>{
                            "arenaSetup",
                            "doors",
                            "enemyDoorVisualsLagoonLs",
                            "enemyDoorVisualsLagoonL",
                            "doorVisualsA",
                            "sidewaysDoor",
                            "door" }
            );

            if (il2cpp::unity::is_valid(door_go)) {
                auto left_door_go = il2cpp::unity::find_child(door_go, "lagoonEnemyDoorLeft");
                auto right_door_go = il2cpp::unity::find_child(door_go, "lagoonEnemyDoorRight");
                keyrings_go = il2cpp::unity::find_child(door_go, "keyrings");
                left_door_transform = il2cpp::unity::get_transform(left_door_go);
                right_door_transform = il2cpp::unity::get_transform(right_door_go);
                open_door_in_frames = 2;
            }
        }
    }

    void on_respawn(GameEvent game_event, EventTiming timing) {
        open_door_in_frames = 2;
    }

    void on_fixed_update(GameEvent game_event, EventTiming timing) {
        if (open_door_in_frames == 0) {
            open_door();
        }

        if (open_door_in_frames >= 0) {
            open_door_in_frames--;
        }
    }

    void initialize() {
        game::event_bus().register_handler(GameEvent::Respawn, EventTiming::End, &on_respawn);
        game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::End, &on_fixed_update);
        scenes::event_bus().register_handler(&on_scene_load);
    }

    CALL_ON_INIT(initialize);
} // namespace
#include <Core/api/scenes/create_objects.h>

// #include <constants.h>
#include <Core/api/game/game.h>
#include <Core/api/graphics/shaders.h>
#include <Core/api/scenes/scene_load.h>

#include <Common/ext.h>
#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/methods/UnityEngine/Quaternion.h>
#include <Modloader/app/methods/UnityEngine/Transform.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>

#include <algorithm>
#include <chrono>
#include <fstream>
#include <queue>
#include <regex>
#include <unordered_map>
#include <unordered_set>
#include <utility>

using namespace modloader;
using namespace app::classes;
using namespace app::classes::UnityEngine;

namespace core::api::scenes {
    namespace {
        struct ObjectSpawn {
            std::string name;
            std::string scene;
            std::vector<std::string> path;
            app::Vector3 position;
            std::optional<app::Vector3> rotation;
            std::optional<app::Vector3> scale;
        };

        std::unordered_map<std::string, ObjectSpawn> object_spawns;
        std::unordered_map<std::string, std::unordered_set<ObjectSpawn*>> pending_object_spawns_by_scene;

        [[maybe_unused]]
        auto on_scene_loaded = event_bus().on<events::SceneStateChanged>([](auto scene_name, auto event) {
            if (event.state != app::SceneState__Enum::Loaded || event.scene->fields.SceneRoot == nullptr) {
                return;
            }

            for (auto spawn: pending_object_spawns_by_scene[scene_name]) {
                auto prefab = il2cpp::unity::find_child(event.scene->fields.SceneRoot, spawn->path);
                if (!il2cpp::unity::is_valid(prefab)) {
                    return;
                }

                const auto go = il2cpp::unity::instantiate_object(prefab);
                il2cpp::invoke(go, "set_name", il2cpp::string_new(spawn->name));
                core::api::game::add_to_container(core::api::game::GameObjectContainer::Miscellaneous, go);
                auto transform = il2cpp::unity::get_transform(go);
                Transform::set_position(transform, spawn->position);
                if (spawn->scale.has_value()) {
                    Transform::set_localScale(transform, spawn->scale.value());
                }

                if (spawn->rotation.has_value()) {
                    auto& rot = spawn->rotation.value();
                    auto quat = Quaternion::Euler_1(rot.x, rot.y, rot.z);
                    Transform::set_rotation(transform, quat);
                }

                core::api::graphics::shaders::duplicate_materials(go);
            }

            pending_object_spawns_by_scene.erase(scene_name);
        });

        [[maybe_unused]]
        auto on_fixed_update = core::api::game::event_bus().on<core::api::game::events::FixedUpdate>([](auto) {
            for (const auto& scene_name: pending_object_spawns_by_scene | std::views::keys) {
                force_load_scene(scene_name);
            }
        });
    } // namespace

    void add_item(const std::string& name, app::Vector3 position, std::optional<app::Vector3> rotation, std::optional<app::Vector3> scale, std::string_view scene, std::vector<std::string> path) {
        auto& obj = object_spawns[name];
        obj.name = name;
        obj.position = position;
        obj.rotation = rotation;
        obj.scale = scale;
        obj.scene = scene;
        obj.path = std::move(path);
        pending_object_spawns_by_scene[obj.scene].emplace(&obj);
    }
} // namespace core::api::scenes

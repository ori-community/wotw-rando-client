#include <features/scenes/create_objects.h>

#include <constants.h>
#include <dev/object_visualizer.h>
#include <features/scenes/scene_load.h>
#include <game/game.h>
#include <randomizer/render/shaders.h>

#include <Common/ext.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <algorithm>
#include <chrono>
#include <fstream>
#include <queue>
#include <regex>
#include <unordered_map>
#include <unordered_set>
#include <utility>

using namespace modloader;

namespace scenes {
    namespace {
        STATIC_IL2CPP_BINDING(UnityEngine, Quaternion, app::Quaternion, Euler, (float x, float y, float z));
        IL2CPP_BINDING(UnityEngine, Transform, void, set_parent, (app::Transform * this_ptr, app::Transform* parent));
        IL2CPP_BINDING(UnityEngine, Transform, void, set_position, (app::Transform * this_ptr, app::Vector3* position));
        IL2CPP_BINDING(UnityEngine, Transform, void, set_localScale, (app::Transform * this_ptr, app::Vector3* scale));
        IL2CPP_BINDING(UnityEngine, Transform, void, set_rotation, (app::Transform * this_ptr, app::Quaternion* rotation));

        struct ObjectSpawn {
            std::string name;
            std::string scene;
            std::vector<std::string> path;
            app::Vector3 position;
            std::optional<app::Vector3> rotation;
            std::optional<app::Vector3> scale;
            object_loaded_callback on_loaded = nullptr;

            app::GameObject* game_object = nullptr;
        };

        std::unordered_map<std::string, ObjectSpawn> object_spawns;
        std::unordered_map<std::string, std::unordered_set<ObjectSpawn*>> pending_object_spawns_by_scene;

        void on_load_callback(std::string_view scene_name, app::GameObject* scene_root) {
            auto scene_name_string = std::string(scene_name);

            for (auto spawn : pending_object_spawns_by_scene[scene_name_string]) {
                auto prefab = il2cpp::unity::find_child(scene_root, spawn->path);
                if (!il2cpp::unity::is_valid(prefab))
                    return;

                spawn->game_object = il2cpp::unity::instantiate_object(prefab);
                il2cpp::invoke(spawn->game_object, "set_name", il2cpp::string_new(spawn->name));
                game::add_to_container(game::RandoContainer::GameObjects, spawn->game_object);
                auto transform = il2cpp::unity::get_transform(spawn->game_object);
                Transform::set_position(transform, &spawn->position);
                if (spawn->scale.has_value())
                    Transform::set_localScale(transform, &spawn->scale.value());

                if (spawn->rotation.has_value()) {
                    auto& rot = spawn->rotation.value();
                    auto quat = Quaternion::Euler(rot.x, rot.y, rot.z);
                    Transform::set_rotation(transform, &quat);
                }

                randomizer::shaders::duplicate_materials(spawn->game_object);
                if (spawn->on_loaded != nullptr)
                    spawn->on_loaded(scene_name, spawn->name, scene_root, spawn->game_object);
            }

            pending_object_spawns_by_scene.erase(scene_name_string);
        }

        IL2CPP_INTERCEPT(, GameController, void, FixedUpdate, (app::GameController * this_ptr)) {
            GameController::FixedUpdate(this_ptr);

            for (const auto& object_spawn_by_scene : pending_object_spawns_by_scene)
                force_load_scene(object_spawn_by_scene.first, &on_load_callback);
        }

        void initialize() {
            add_item("double_jump_tree_spring", { -566.93634f, -4545.384766f, 0.f }, app::Vector3{ 0, PI, 0 }, std::optional<app::Vector3>(), "swampSpringIntroductionB", { "interactives", "springSunkenGlades" });
        }

        CALL_ON_INIT(initialize);
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
} // namespace scenes

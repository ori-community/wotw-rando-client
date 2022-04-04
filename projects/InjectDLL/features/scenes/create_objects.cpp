#include <features/scenes/create_objects.h>

#include <constants.h>
#include <dev/object_visualizer.h>
#include <features/scenes/scene_load.h>

#include <Common/ext.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/il2cpp_helpers.h>

#include <algorithm>
#include <chrono>
#include <fstream>
#include <queue>
#include <regex>
#include <unordered_set>
#include <unordered_map>

using namespace modloader;

namespace scenes
{
    namespace
    {
        STATIC_IL2CPP_BINDING(UnityEngine, Object, void, DontDestroyOnLoad, (void* obj));
        STATIC_IL2CPP_BINDING(UnityEngine, Quaternion, app::Quaternion, Euler, (float x, float y, float z));
        IL2CPP_BINDING(UnityEngine, Transform, void, set_parent, (app::Transform* this_ptr, app::Transform* parent));
        IL2CPP_BINDING(UnityEngine, Transform, void, set_position, (app::Transform* this_ptr, app::Vector3* position));
        IL2CPP_BINDING(UnityEngine, Transform, void, set_localScale, (app::Transform* this_ptr, app::Vector3* scale));
        IL2CPP_BINDING(UnityEngine, Transform, void, set_rotation, (app::Transform* this_ptr, app::Quaternion* rotation));

        using creation_callback = void(*)(int id, app::GameObject* obj);

        struct ObjectSpawn
        {
            int id;
            std::string scene;
            std::string root;
            std::vector<std::string> path;
            app::Vector3 position;
            std::optional<app::Vector3> rotation;
            std::optional<app::Vector3> scale;
            creation_callback callback = nullptr;

            app::GameObject* game_object = nullptr;
        };

        std::unordered_map<int, ObjectSpawn> objects;
        std::unordered_map<std::string, std::unordered_set<int>> spawn_queue;

        void on_load_callback(std::string_view scene_name, app::Scene scene)
        {
            auto& to_spawn = spawn_queue[std::string(scene_name)];
            std::unordered_map<std::string, std::vector<int>> root_to_ids;
            for (auto id : to_spawn)
            {
                auto& obj = objects[id];
                root_to_ids[obj.root].push_back(id);
            }

            auto roots = il2cpp::unity::get_root_game_objects(scene);
            for (auto root : roots)
            {
                auto root_name = il2cpp::unity::get_object_name(root);
                auto it = root_to_ids.find(root_name);
                if (it == root_to_ids.end())
                    continue;

                for (auto id : it->second)
                {
                    auto& obj = objects[id];
                    auto prefab = il2cpp::unity::find_child(root, obj.path);
                    if (!il2cpp::unity::is_valid(prefab))
                        continue;

                    obj.game_object = il2cpp::unity::instantiate_object(prefab);
                    Object::DontDestroyOnLoad(obj.game_object);
                    auto transform = il2cpp::unity::get_transform(obj.game_object);
                    Transform::set_parent(transform, nullptr);
                    Transform::set_position(transform, &obj.position);
                    if (obj.scale.has_value())
                        Transform::set_localScale(transform, &obj.scale.value());

                    if (obj.rotation.has_value())
                    {
                        auto& rot = obj.rotation.value();
                        auto quat = Quaternion::Euler(rot.x, rot.y, rot.z);
                        Transform::set_rotation(transform, &quat);
                    }

                    obj.callback(id, obj.game_object);
                }
            }

            to_spawn.clear();
        }

        IL2CPP_INTERCEPT(, GameController, void, FixedUpdate, (app::GameController* this_ptr))
        {
            GameController::FixedUpdate(this_ptr);
            for (auto spawn : spawn_queue)
                force_load_area(spawn.first, &on_load_callback);
        }

        void initialize()
        {
            //add_item(0, { -566.93634f, -4545.384766f, 0.f }, { 0, PI, 0 }, { 1, 1, 1 }, "swampSpringIntroductionB", { "springSunkenGlades" });
        }

        CALL_ON_INIT(initialize);
    }

    void remove_item(int id)
    {
        auto it = objects.find(id);
        if (it == objects.end())
            return;

        if (it->second.game_object != nullptr)
            il2cpp::unity::destroy_object(it->second.game_object);
        else
            spawn_queue[it->second.scene].erase(it->first);

        objects.erase(it);
    }

    void add_item(int id, app::Vector3 position, std::optional<app::Vector3> rotation,
        std::optional<app::Vector3> scale, std::string_view scene, std::vector<std::string> path)
    {
        remove_item(id);

        auto& obj = objects[id];
        obj.id = id;
        obj.position = position;
        obj.rotation = rotation;
        obj.scale = scale;
        obj.scene = scene;
        obj.path = path;
        obj.id = id;
    }

    void add_creation_callback(int id, creation_callback callback)
    {
        auto& obj = objects[id];
        obj.callback = callback;
    }
}

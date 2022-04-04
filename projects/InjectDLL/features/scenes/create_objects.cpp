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

/*
namespace
{
    STATIC_IL2CPP_BINDING(UnityEngine, Resources, app::Object__Array*, FindObjectsOfTypeAll, (app::Type* system_type));
    STATIC_IL2CPP_BINDING_OVERLOAD(UnityEngine, Object, app::Object*, Instantiate, (app::Object* object), (UnityEngine:Object));
    
    IL2CPP_BINDING(UnityEngine, GameObject, void, SetActive, (app::GameObject* this_ptr, bool value));
    
    STATIC_IL2CPP_BINDING_OVERLOAD(, InstantiateUtility, app::Object*, InstantiateImmediate,
        (app::Object* object, app::Vector3 position, app::Quaternion rotation, app::Transform* parent, app::Object* owner, bool record),
        (UnityEngine:GameObject, UnityEngine : Vector3, UnityEngine : Quaternion, UnityEngine : Transform, UnityEngine : Object, System : Boolean));
    STATIC_IL2CPP_BINDING_OVERLOAD(, InstantiateUtility, bool, IsDestroyed, (app::GameObject* object), (UnityEngine:GameObject));
    STATIC_IL2CPP_BINDING_OVERLOAD(, InstantiateUtility, void, Destroy, (app::GameObject* object, bool immediate), (UnityEngine:GameObject, System : Boolean));

    IL2CPP_BINDING_OVERLOAD(, ScenesManager, void, PreventUnloading, (app::ScenesManager* this_ptr, app::RuntimeSceneMetaData* meta, bool prevent_disabling), (RuntimeSceneMetaData, System:Boolean));
    IL2CPP_BINDING_OVERLOAD(, ScenesManager, void, PreloadScene, (app::ScenesManager* this_ptr, app::RuntimeSceneMetaData* data), (RuntimeSceneMetaData));
    IL2CPP_BINDING(, ScenesManager, app::RuntimeSceneMetaData*, GetSceneInformation, (app::ScenesManager* this_ptr, app::String* sceneName));
    IL2CPP_BINDING(, ScenesManager, app::SceneManagerScene*, GetSceneManagerScene, (app::ScenesManager* this_ptr, app::String* scene_name));
    IL2CPP_BINDING(, ScenesManager, void, EnableDisabledScene, (app::ScenesManager* this_ptr, app::SceneManagerScene* scene, bool async));
    IL2CPP_BINDING(, ScenesManager, bool, SceneIsLoading, (app::ScenesManager* this_ptr, app::MoonGuid* scene_guid));
    IL2CPP_BINDING(, ScenesManager, bool, SceneIsLoaded, (app::ScenesManager* this_ptr, app::MoonGuid* scene_guid));

    struct ObjectSpawn
    {
        bool spawned = false;
        std::string scene;
        std::string name;
        uint32_t handle;
        app::Vector3 position;
        app::Vector3 rotation;
    };

    std::regex replace_clone("(Clone)");
    std::unordered_map<std::string, std::unordered_set<std::string>> not_found_areas;
    std::unordered_map<std::string, uint32_t> entries;
    std::vector<ObjectSpawn> spawns;

    std::vector<std::string> preload_areas;
    std::unordered_set<std::string> preload_areas_wait;
    std::unordered_set<std::string> preload_areas_cache;
    std::unordered_map<std::string, std::vector<loaded_callback>> load_callbacks;

    void find_objects(app::GameObject* root)
    {
        auto area_name = il2cpp::unity::get_object_name(root);
        auto area = not_found_areas[area_name];
        if (area.empty())
            return;

        trace(MessageType::Info, 5, "instantiate", "searching scene: " + area_name);
        std::queue<app::GameObject*> objects;
        objects.push(root);
        while (!objects.empty() && !area.empty())
        {
            auto object = objects.front();
            objects.pop();

            auto name = il2cpp::unity::get_object_name(object);
            name = std::regex_replace(name, replace_clone, "");
            if (area.find(name) != area.end())
            {
                // Safeguard against object destruction.
                auto prefab = Object::Instantiate(reinterpret_cast<app::Object*>(object));
                if (entries[name] != 0)
                {
                    auto handle = entries[name];
                    auto go = reinterpret_cast<app::Object*>(il2cpp::gchandle_target(handle));
                    if (!il2cpp::unity::is_valid(go))
                        il2cpp::gchandle_free(handle);
                    else
                    {
                        il2cpp::unity::destroy_object(go);
                        il2cpp::gchandle_free(handle);
                    }
                }

                entries[name] = il2cpp::gchandle_new(prefab, false);
                area.erase(name);
                trace(MessageType::Info, 5, "instantiate", "found object through scene: " + name);
            }

            auto children = il2cpp::unity::get_children(object);
            for (auto child : children)
                objects.push(child);
        }

        trace(MessageType::Info, 5, "instantiate", "finished search");
    }
    
    IL2CPP_INTERCEPT(, SceneRoot, void, Awake, (app::SceneRoot* this_ptr)) {
        SceneRoot::Awake(this_ptr);
        find_objects(il2cpp::unity::get_game_object(this_ptr));
    }

    // Prevent unloading of our cached scenes.
    IL2CPP_INTERCEPT(, SceneRoot, void, Unload, (app::SceneRoot* this_ptr, bool instant)) {
        if (preload_areas_cache.find(il2cpp::unity::get_object_name(this_ptr)) == preload_areas_cache.end())
            SceneRoot::Unload(this_ptr, instant);
    }

    // Prevent unloading of our cached scenes.
    IL2CPP_INTERCEPT(, ScenesManager, void, RemoveScene, (app::ScenesManager* this_ptr, app::SceneManagerScene* scene, bool instant)) {
        if (preload_areas_cache.find(il2cpp::convert_csstring(scene->fields.MetaData->fields.Scene)) == preload_areas_cache.end())
            ScenesManager::RemoveScene(this_ptr, scene, instant);
    }

    // Prevent unloading of our cached scenes.
    IL2CPP_INTERCEPT(, ScenesManager, bool , CancelScene, (app::ScenesManager* this_ptr, app::SceneManagerScene* scene)) {
        if (preload_areas_cache.find(il2cpp::convert_csstring(scene->fields.MetaData->fields.Scene)) == preload_areas_cache.end())
            return ScenesManager::CancelScene(this_ptr, scene);
    
        return false;
    }

    void load_scene(app::ScenesManager* manager, std::string const& name)
    {
        auto cname = il2cpp::string_new(name);
        auto meta = ScenesManager::GetSceneInformation(manager, cname);
        if (!ScenesManager::SceneIsLoaded(manager, meta->fields.SceneMoonGuid) && !ScenesManager::SceneIsLoading(manager, meta->fields.SceneMoonGuid))
            ScenesManager::PreloadScene(manager, meta);
    }

    void preload_scenes(app::ScenesManager* manager)
    {
        for (auto name : preload_areas)
        {
            preload_areas_cache.emplace(name);
            preload_areas_wait.emplace(name);
            load_scene(manager, name);
        }

        preload_areas.clear();
    }

    void enable_scenes()
    {
        // Enable scenes we just preloaded.
        const auto scenes = il2cpp::get_class<app::Scenes__Class>("Core", "Scenes");
        auto it = preload_areas_wait.begin();
        while (it != preload_areas_wait.end())
        {
            auto cname = il2cpp::string_new(*it);
            auto meta = ScenesManager::GetSceneInformation(scenes->static_fields->Manager, cname);
            if (ScenesManager::SceneIsLoaded(scenes->static_fields->Manager, meta->fields.SceneMoonGuid))
            {
                auto scene = ScenesManager::GetSceneManagerScene(scenes->static_fields->Manager, cname);
                if (scene->fields.SceneRoot != nullptr)
                {
                    ScenesManager::EnableDisabledScene(scenes->static_fields->Manager, scene, true);
                    it = preload_areas_wait.erase(it);
                    continue;
                }
            }

            ++it;
        }
    }

    void spawn_spawns()
    {
        // Spawn spawns that haven't been spawned and we can spawn.
        const auto scenes = il2cpp::get_class<app::Scenes__Class>("Core", "Scenes");
        for (auto& spawn : spawns)
        {
            if (!spawn.spawned && (entries.find(spawn.name) != entries.end()))
            {
                auto prefab = reinterpret_cast<app::Object*>(il2cpp::gchandle_target(entries[spawn.name]));
                app::Quaternion quat;
                auto c1 = std::cos(spawn.rotation.x / 2);
                auto c2 = std::cos(spawn.rotation.y / 2);
                auto c3 = std::cos(spawn.rotation.z / 2);
                auto s1 = std::sin(spawn.rotation.x / 2);
                auto s2 = std::sin(spawn.rotation.y / 2);
                auto s3 = std::sin(spawn.rotation.z / 2);
                quat.x = c1 * c2 * c3 - s1 * s2 * s3;
                quat.y = s1 * s2 * c3 + c1 * c2 * s3;
                quat.z = s1 * c2 * c3 + c1 * s2 * s3;
                quat.w = c1 * s2 * c3 - s1 * c2 * s3;
                auto owner = il2cpp::unity::get_game_object(scenes->static_fields->Manager);
                auto object = InstantiateUtility::InstantiateImmediate(prefab, spawn.position, quat, il2cpp::unity::get_transform(owner), reinterpret_cast<app::Object*>(owner), true);
                spawn.spawned = true;
                spawn.handle = il2cpp::gchandle_new(object, false);
                GameObject::SetActive(reinterpret_cast<app::GameObject*>(object), true);
            }
        }
    }

    void handle_callbacks()
    {
        for (auto const& entry : load_callbacks)
        {
            if (preload_areas_wait.find(entry.first) == preload_areas_wait.end())
            {
                for (auto callback : entry.second)
                    callback();

                load_callbacks[entry.first].clear();
            }
        }
    }

    IL2CPP_INTERCEPT(, GameController, void, FixedUpdate, (app::GameController* this_ptr))
    {
        GameController::FixedUpdate(this_ptr);
        enable_scenes();
        spawn_spawns();
        handle_callbacks();
    }

    void visualizer_setup(dev::Visualizer& visualizer, std::vector<console::CommandParam> const& params, int default_level = 1, int default_depth = 200000)
    {
        int value = default_level;
        auto value_it = std::find_if(params.begin(), params.end(), [](auto p) -> bool { return p.name == "level"; });
        if (value_it != params.end())
            if (!console::try_get_int(*value_it, value) || value < 0 || value > 3)
                console::console_send("invalid value parameter not an int in range 0 - 3, using default level");

        visualizer.level = static_cast<dev::Visualizer::InfoLevel>(std::clamp(value, 0, 3));
        visualizer.initial_depth = -1;
        value_it = std::find_if(params.begin(), params.end(), [](auto p) -> bool { return p.name == "depth"; });
        if (value_it != params.end())
            if (!console::try_get_int(*value_it, visualizer.initial_depth) || visualizer.initial_depth < 0)
                console::console_send("invalid value parameter not a positive int, using default depth");

        if (visualizer.initial_depth < 0)
            visualizer.initial_depth = default_depth;
    }

    void output_visualizer(dev::Visualizer& visualizer, std::vector<console::CommandParam> const& params)
    {
        std::ofstream str;
        auto value_it = std::find_if(params.begin(), params.end(), [](auto p) -> bool { return p.name == "file"; });
        if (value_it != params.end())
            str.open(value_it->value);
        else
            str.open("C:\\moon\\find_objects.txt");

        if (str.is_open())
        {
            str << dev::visualize::get_string(visualizer) << std::endl;
            console::console_send("finished writing to file.");
            str.close();
        }
        else
            console::console_send(dev::visualize::get_string(visualizer));
    }

    void find_objects(std::string const& name, std::vector<console::CommandParam> const& params)
    {
        dev::Visualizer visualizer;
        visualizer_setup(visualizer, params, 1, 1);

        auto path = il2cpp::string_new("");
        auto type = il2cpp::unity::get_type("UnityEngine", "GameObject");
        console::console_send("find objects");
        auto object_array = Resources::FindObjectsOfTypeAll(type);
        console::console_send("start writing objects");
        console::console_flush();
        auto time = std::chrono::system_clock::now();
        auto interval = std::chrono::seconds(1);

        for (auto i = 0; i < object_array->max_length; ++i)
        {
            auto new_time = std::chrono::system_clock::now();
            if ((new_time - time) > interval)
            {
                console::console_send(format("iter [%d / %d]", i, object_array->max_length));
                console::console_flush();
                time = new_time;
            }

            auto object = object_array->vector[i];
            if (il2cpp::is_assignable(object, "UnityEngine", "GameObject"))
                dev::visualize::visualize_object(visualizer, object);
        }

        console::console_send("finished writing objects");
        output_visualizer(visualizer, params);
    }

    void add_item(std::string scene, std::string name, app::Vector3 position, app::Vector3 rotation)
    {
        if (entries.find(name) == entries.end())
        {
            preload_areas.push_back(scene);
            auto& area = not_found_areas[scene];
            area.emplace(name);
        }

        spawns.push_back(ObjectSpawn{
            false,
            scene,
            name,
            0,
            position,
            rotation
        });
    }

    void initialize()
    {
        console::register_command({ "debug", "find_objects" }, find_objects);

        // Jump pad on double jump tree.
        add_item("swampSpringIntroductionB", "springSunkenGlades", { -566.93634f, -4545.384766f, 0.f }, { 0, PI, 0 });
        //add_item("swampSpringIntroductionB", "springSunkenGlades", { -492.317291f, -4245.839844f, 0.f }, { 0, PI, 0 });
    }

    CALL_ON_INIT(initialize);
}

void force_load_area(std::string name, loaded_callback callback)
{
    preload_areas_cache.emplace(name);
    preload_areas_wait.emplace(name);
    auto* scenes = il2cpp::get_class<app::Scenes__Class>("Core", "Scenes");
    load_scene(scenes->static_fields->Manager, name);
    auto& entry = load_callbacks[name];
    entry.push_back(callback);
}

void perform_preload()
{
    auto* scenes = il2cpp::get_class<app::Scenes__Class>("Core", "Scenes");
    preload_scenes(scenes->static_fields->Manager);
}
*/
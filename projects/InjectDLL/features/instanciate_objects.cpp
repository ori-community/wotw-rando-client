#include <constants.h>
#include <dev/object_visualizer.h>

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

namespace
{
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

    STATIC_IL2CPP_BINDING(UnityEngine, Resources, app::Object__Array*, FindObjectsOfTypeAll, (app::Type* system_type));

    void find_objects(std::string const& name, std::vector<console::CommandParam> const& params)
    {
        dev::Visualizer visualizer;
        visualizer_setup(visualizer, params, 1, 1);

        auto path = reinterpret_cast<app::String*>(il2cpp::string_new(""));
        auto type = il2cpp::unity::get_type("UnityEngine", "GameObject");
        //auto objects1 = Resources::LoadAll_1(path);
        //auto objects2 = LoadAll(path, type);
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

    STATIC_IL2CPP_BINDING(UnityEngine, Object, bool, op_Implicit, (app::Object* this_ptr));

    struct ObjectSpawn
    {
        bool spawned = false;
        std::string scene;
        std::string name;
        uint32_t handle;
        app::Vector3 position;
        app::Vector3 rotation;
    };

    std::unordered_map<std::string, std::unordered_set<std::string>> not_found_areas;
    std::unordered_map<std::string, uint32_t> entries;
    void transform_hierarchy(std::string& output, app::Transform* transform)
    {
        output += il2cpp::unity::get_object_name(transform);
        auto parent = il2cpp::unity::get_parent(transform);
        if (parent != nullptr)
        {
            output += " -> ";
            transform_hierarchy(output, parent);
        }
    }

    STATIC_IL2CPP_BINDING_OVERLOAD(UnityEngine, Object, app::Object*, Instantiate, (app::Object* object), (UnityEngine:Object));
    STATIC_IL2CPP_BINDING_OVERLOAD(, InstantiateUtility, app::Object*, Instantiate, (app::Object* object, app::Vector3 position, app::Quaternion rotation, app::Transform* parent, app::Object* owner, bool record),
        (UnityEngine:GameObject, UnityEngine:Vector3, UnityEngine:Quaternion, UnityEngine:Transform, UnityEngine:Object, System:Boolean));
    STATIC_IL2CPP_BINDING(, InstantiateUtility, void, Destroy, (app::GameObject* object));
    STATIC_IL2CPP_BINDING_OVERLOAD(, InstantiateUtility, bool, IsDestroyed, (app::GameObject* object), (UnityEngine:GameObject));

    std::regex replace_clone("(Clone)");
    void find_objects(app::GameObject* root)
    {
        auto area_name = il2cpp::unity::get_object_name(root);
        auto area = not_found_areas[area_name];
        if (area.empty())
            return;

        console::console_send("searching scene: " + area_name);
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
                    if (!Object::op_Implicit(go))
                        il2cpp::gchandle_free(handle);
                    else
                    {
                        il2cpp::unity::destroy_object(go);
                        il2cpp::gchandle_free(handle);
                    }
                }

                entries[name] = il2cpp::gchandle_new(prefab, false);
                area.erase(name);
                console::console_send("found object through scene: " + name);
            }

            auto children = il2cpp::unity::get_children(object);
            for (auto child : children)
                objects.push(child);
        }

        console::console_send("finished search");
    }
    
    IL2CPP_INTERCEPT(, SceneRoot, void, Awake, (app::SceneRoot* this_ptr)) {
        SceneRoot::Awake(this_ptr);
        find_objects(il2cpp::unity::get_game_object(this_ptr));
    }

    std::unordered_set<std::string> respawn_areas;
    std::unordered_set<std::string> preload_areas_cache;
    std::vector<std::string> preload_areas;
    std::vector<std::string> waiting_preload_areas;

    IL2CPP_BINDING_OVERLOAD(, ScenesManager, void, PreventUnloading, (app::ScenesManager* this_ptr, app::RuntimeSceneMetaData* meta, bool prevent_disabling), (RuntimeSceneMetaData, System:Boolean));
    IL2CPP_BINDING(, ScenesManager, app::RuntimeSceneMetaData*, GetSceneInformation, (app::ScenesManager* this_ptr, app::String* sceneName));
    IL2CPP_BINDING_OVERLOAD(, ScenesManager, void, PreloadScene, (app::ScenesManager* this_ptr, app::RuntimeSceneMetaData* data), (RuntimeSceneMetaData));
    IL2CPP_BINDING(, ScenesManager, bool, SceneIsLoading, (app::ScenesManager* this_ptr, app::MoonGuid* scene_guid));
    IL2CPP_BINDING(, ScenesManager, bool, SceneIsLoaded, (app::ScenesManager* this_ptr, app::MoonGuid* scene_guid));
    IL2CPP_BINDING(, ScenesManager, app::SceneManagerScene*, GetSceneManagerScene, (app::ScenesManager* this_ptr, app::String* scene_name));
    IL2CPP_BINDING(, ScenesManager, void, EnableDisabledScene, (app::ScenesManager* this_ptr, app::SceneManagerScene* scene, bool async));

    // TODO: Test adding a rect to RuntimeSceneMetaData::SceneLoadingBoundaries
    void load_scene(app::ScenesManager* manager, std::string const& name, bool respawn = false)
    {
        auto cname = reinterpret_cast<app::String*>(il2cpp::string_new(name));
        auto meta = ScenesManager::GetSceneInformation(manager, cname);
        if (!ScenesManager::SceneIsLoaded(manager, meta->fields.SceneMoonGuid) && !ScenesManager::SceneIsLoading(manager, meta->fields.SceneMoonGuid))
        {
            ScenesManager::PreloadScene(manager, meta);
            ScenesManager::PreventUnloading(manager, meta, true);
            waiting_preload_areas.push_back(name);
            if (respawn)
                respawn_areas.emplace(name);
        }
    }

    void reload_preload_scenes_cache()
    {
        auto manager = il2cpp::get_class<app::Scenes__Class>("Core", "Scenes")->static_fields->Manager;
        for (auto name : preload_areas_cache)
            load_scene(manager, name, true);
    }

    void preload_scenes(app::ScenesManager* manager)
    {
        for (auto name : preload_areas)
        {
            preload_areas_cache.emplace(name);
            load_scene(manager, name);
        }

        preload_areas.clear();
    }

    void check_loaded_scenes(app::ScenesManager* manager)
    {
        auto it = waiting_preload_areas.begin();
        while (it != waiting_preload_areas.end())
        {
            auto cname = reinterpret_cast<app::String*>(il2cpp::string_new(*it));
            auto meta = ScenesManager::GetSceneInformation(manager, cname);
            if (ScenesManager::SceneIsLoaded(manager, meta->fields.SceneMoonGuid))
            {
                auto scene = ScenesManager::GetSceneManagerScene(manager, cname);
                ScenesManager::EnableDisabledScene(manager, scene, true);
                it = waiting_preload_areas.erase(it);
            }
            else
                ++it;
        }
    }

    // Want to try more with this.
    //public List<Rect> SceneLoadingBoundaries; // 0x30
    //public List<Rect> SceneBoundaries; // 0x38
    //public List<Rect> ScenePaddingBoundaries; // 0x40
    //IL2CPP_INTERCEPT(, ScenesManager, void, Awake, (app::ScenesManager* this_ptr)) {
    //    ScenesManager::Awake(this_ptr);
    //
    //    auto cname = reinterpret_cast<app::String*>(il2cpp::string_new("swampSpringIntroductionB"));
    //    auto meta = ScenesManager::GetSceneInformation(this_ptr, cname);
    //    app::Rect rect;
    //    rect.m_XMin = -570;
    //    rect.m_YMin = -4500;
    //    rect.m_Width = 50;
    //    rect.m_Height = 60;
    //    il2cpp::invoke(meta->fields.SceneLoadingBoundaries, "Add", &rect);
    //    il2cpp::invoke(meta->fields.SceneBoundaries, "Add", &rect);
    //    il2cpp::invoke(meta->fields.ScenePaddingBoundaries, "Add", &rect);
    //    meta->fields.m_totalRect = il2cpp::invoke<app::Rect__Boxed>(meta, "Encapsulate", &meta->fields.m_totalRect, &rect)->fields;
    //}

    IL2CPP_INTERCEPT(, ScenesManager, void, Update, (app::ScenesManager* this_ptr)) {
        ScenesManager::Update(this_ptr);
        preload_scenes(this_ptr);
        //reload_preload_scenes_cache();
        check_loaded_scenes(this_ptr);
    }

    std::chrono::seconds interval(15);
    std::chrono::system_clock::time_point time;
    std::vector<ObjectSpawn> spawns;
    IL2CPP_BINDING(UnityEngine, GameObject, void, SetActive, (app::GameObject* this_ptr, bool value));

    void destroy_spawn(ObjectSpawn& spawn, bool force_destroy)
    {
        auto go = reinterpret_cast<app::GameObject*>(il2cpp::gchandle_target(spawn.handle));
        if (InstantiateUtility::IsDestroyed(go))
        {
            il2cpp::gchandle_free(spawn.handle);
            spawn.spawned = false;
        }
        else if (force_destroy)
        {
            InstantiateUtility::Destroy(go);
            il2cpp::gchandle_free(spawn.handle);
            spawn.spawned = false;
        }
    }

    IL2CPP_INTERCEPT(, GameController, void, FixedUpdate, (app::GameController* this_ptr))
    {
        GameController::FixedUpdate(this_ptr);
        auto scenes = il2cpp::get_class<app::Scenes__Class>("Core", "Scenes");
        for (auto& spawn : spawns)
        {
            if (respawn_areas.find(spawn.scene) != respawn_areas.end() && spawn.spawned)
                destroy_spawn(spawn, true);

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
                auto object = InstantiateUtility::Instantiate(prefab, spawn.position, quat, il2cpp::unity::get_transform(owner), reinterpret_cast<app::Object*>(owner), true);
                spawn.spawned = true;
                spawn.handle = il2cpp::gchandle_new(object, false);
                GameObject::SetActive(reinterpret_cast<app::GameObject*>(object), true);
            }
            else if (spawn.spawned && spawn.handle != 0)
                destroy_spawn(spawn, false);
        }

        respawn_areas.clear();
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
        time = std::chrono::system_clock::now();
        console::register_command("find_objects", find_objects);

        // Jump pad on double jump tree.
        add_item("swampSpringIntroductionB", "springSunkenGlades", { -566.93634f, -4545.384766f, 0.f }, { 0, PI, 0 });
        //add_item("swampSpringIntroductionB", "springSunkenGlades", { -492.317291f, -4245.839844f, 0.f }, { 0, PI, 0 });
    }

    CALL_ON_INIT(initialize);
}

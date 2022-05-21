#include <features/scenes/scene_load.h>

#include <game/game.h>
#include <game/player.h>

#include <Common/ext.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>

#include <unordered_set>
#include <Il2CppModLoader/console.h>

namespace scenes
{
    struct PendingScene {
        std::string scene_name;
        std::vector<scene_loaded_callback> on_loaded_callbacks;
        bool keep_preloaded = false;
    };

    std::unordered_map<std::string, PendingScene> scenes_to_load;

    namespace {
        IL2CPP_BINDING(UnityEngine, GameObject, app::Scene, get_scene, (app::GameObject* this_ptr));
        IL2CPP_BINDING_OVERLOAD(, ScenesManager, void, PreloadScene, (app::ScenesManager* this_ptr, app::RuntimeSceneMetaData* data), (RuntimeSceneMetaData));
        IL2CPP_BINDING(, ScenesManager, app::RuntimeSceneMetaData*, RequestAdditivelyLoadScene,
            (app::ScenesManager* this_ptr, app::RuntimeSceneMetaData* meta, bool async, bool keepPreloaded, bool forceLoad, bool loadDependantScenes, bool queueIncludedScenes));
        //ScenesManager_RequestAdditivelyLoadScene(this,a,fVar4 <= 2.00000000,true,true,true,false);
        IL2CPP_BINDING(, ScenesManager, app::RuntimeSceneMetaData*, GetSceneInformation, (app::ScenesManager* this_ptr, app::String* sceneName));
        IL2CPP_BINDING(, ScenesManager, app::SceneMetaData*, GetSceneMetaDataFromRuntimeMetaData, (app::ScenesManager* this_ptr, app::RuntimeSceneMetaData* runtime));
        IL2CPP_BINDING(, ScenesManager, app::SceneManagerScene*, GetSceneManagerScene, (app::ScenesManager* this_ptr, app::String* scene_name));
        IL2CPP_BINDING(, ScenesManager, void, EnableDisabledScene, (app::ScenesManager* this_ptr, app::SceneManagerScene* scene, bool async));
        IL2CPP_BINDING(, ScenesManager, bool, SceneIsLoading, (app::ScenesManager* this_ptr, app::MoonGuid* scene_guid));
        IL2CPP_BINDING(, ScenesManager, bool, SceneIsLoaded, (app::ScenesManager* this_ptr, app::MoonGuid* scene_guid));
        IL2CPP_BINDING_OVERLOAD(, ScenesManager, app::SceneManagerScene*, GetFromCurrentScenes,
            (app::ScenesManager* this_ptr, app::RuntimeSceneMetaData* meta), (:RuntimeSceneMetaData));

        IL2CPP_INTERCEPT(, GameController, void, FixedUpdate, (app::GameController* this_ptr))
        {
            const auto scenes = il2cpp::get_class<app::Scenes__Class>("Core", "Scenes");
            auto manager = scenes->static_fields->Manager;
            std::unordered_set<std::string> to_delete;

            for (const auto& scene_to_load : scenes_to_load)
            {
                auto cname = il2cpp::string_new(scene_to_load.first);
                auto meta = ScenesManager::GetSceneInformation(manager, cname);

                if (ScenesManager::SceneIsLoaded(manager, meta->fields.SceneMoonGuid))
                {
                    auto scene = ScenesManager::GetFromCurrentScenes(manager, meta);
                    auto go = il2cpp::unity::get_game_object(scene->fields.SceneRoot);

                    auto pending_scene = scene_to_load.second;

                    for (auto on_load_callback : pending_scene.on_loaded_callbacks)
                        on_load_callback(pending_scene.scene_name, go);

                    to_delete.emplace(scene_to_load.first);
                }
                else if (!ScenesManager::SceneIsLoading(manager, meta->fields.SceneMoonGuid))
                {
                    ScenesManager::RequestAdditivelyLoadScene(manager, meta, true, scene_to_load.second.keep_preloaded, true, true, false);
                }
            }

            for (const auto& d : to_delete)
                scenes_to_load.erase(d);

            GameController::FixedUpdate(this_ptr);
        }
    }

    void force_load_scene(std::string_view scene, scene_loaded_callback callback, bool keep_preloaded)
    {
        auto& scene_to_load = scenes_to_load[std::string(scene)];
        scene_to_load.scene_name = std::string(scene);
        scene_to_load.on_loaded_callbacks.push_back(callback);
        scene_to_load.keep_preloaded = scene_to_load.keep_preloaded || keep_preloaded;
    }

    app::GameObject* get_root(std::string_view name)
    {
        const auto scenes = il2cpp::get_class<app::Scenes__Class>("Core", "Scenes");
        auto manager = scenes->static_fields->Manager;
        auto cname = il2cpp::string_new(name);
        auto meta = ScenesManager::GetSceneInformation(manager, cname);
        if (meta == nullptr || !ScenesManager::SceneIsLoaded(manager, meta->fields.SceneMoonGuid))
        {
            auto container = game::container(game::RandoContainer::Randomizer);
            auto scene = GameObject::get_scene(container);
            auto dont_destroy_on_load = il2cpp::unity::get_root_game_objects(scene);
            for (auto game_object : dont_destroy_on_load)
                if (il2cpp::unity::get_object_name(game_object) == name)
                    return game_object;

            return nullptr;
        }

        auto scene = ScenesManager::GetFromCurrentScenes(manager, meta);
        return il2cpp::unity::get_game_object(scene->fields.SceneRoot);
    }

    std::vector<app::GameObject*> get_roots_from_active()
    {
        std::vector<app::GameObject*> game_objects;
        const auto scenes = il2cpp::get_class<app::Scenes__Class>("Core", "Scenes");
        auto manager = scenes->static_fields->Manager;
        for (auto i = 0; i < manager->fields.ActiveScenes->fields._size; ++i)
        {
            auto scene = manager->fields.ActiveScenes->fields._items->vector[i];
            game_objects.push_back(il2cpp::unity::get_game_object(scene->fields.SceneRoot));
        }

        auto container = game::container(game::RandoContainer::Randomizer);
        auto scene = GameObject::get_scene(container);
        auto dont_destroy_on_load = il2cpp::unity::get_root_game_objects(scene);
        game_objects.insert(game_objects.end(), dont_destroy_on_load.begin(), dont_destroy_on_load.end());

        return game_objects;
    }

    app::GameObject* get_game_object(std::string_view path)
    {
        if (path.empty())
            return nullptr;

        std::vector<std::string> split_path;
        std::string str(path);
        split_str(str, split_path, '/');
        auto game_object = get_root(split_path.front());
        split_path.erase(split_path.begin());
        return split_path.empty() ? game_object : il2cpp::unity::find_child(game_object, split_path);
    }

    app::SceneMetaData_SeinInitialValuesWotW* initial_values = nullptr;
    void load_default_values()
    {
        if (il2cpp::unity::is_valid(initial_values))
            il2cpp::invoke(initial_values, "ApplyInitialValues");
        else
            modloader::warn("scene_load", "Failed to set default wotw values.");
    }

    void on_load_spawn(std::string_view scene_name, app::GameObject* scene_root)
    {
        auto root = il2cpp::unity::get_component<app::SceneRoot>(scene_root, "", "SceneRoot");
        initial_values = root->fields.MetaData->fields.InitialValuesWisp;
    }

    void initialize()
    {
        force_load_scene("swampIntroTop", &on_load_spawn);
    }

    CALL_ON_INIT(initialize);
}

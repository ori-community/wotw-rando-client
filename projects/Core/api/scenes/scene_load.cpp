#include <Core/api/scenes/scene_load.h>

#include <Core/api/game/game.h>

#include <Common/ext.h>

#include <Modloader/app/methods/SceneManagerScene.h>
#include <Modloader/app/methods/ScenesManager.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/types/Scenes.h>
#include <Modloader/common.h>
#include <Modloader/interception_macros.h>

#include <Modloader/windows_api/console.h>
#include <set>
#include <unordered_set>

using namespace app::classes;
using namespace modloader::win;

namespace scenes {
    struct PendingScene {
        std::string scene_name;
        std::vector<scene_loading_callback> scene_loading_callbacks;
        bool keep_preloaded = false;
    };

    std::unordered_map<std::string, PendingScene> scenes_to_load;
    TimedEventBus<SceneLoadEventMetadata*> scenes_event_bus;
    bool scene_loader_debug_logging = false;

    app::ScenesManager* get_scenes_manager() {
        return types::Scenes::get_class()->static_fields->Manager;
    }

    namespace {
        IL2CPP_INTERCEPT(SceneManagerScene, void, ChangeState, (app::SceneManagerScene * this_ptr, app::SceneState__Enum state)) {
            next::SceneManagerScene::ChangeState(this_ptr, state);

            auto scene_name_csstring = this_ptr->fields.MetaData->fields.Scene;
            auto scene_name = il2cpp::convert_csstring(scene_name_csstring);
            auto scenes_manager = get_scenes_manager();
            auto scene_meta = ScenesManager::GetSceneInformation(scenes_manager, scene_name_csstring);
            auto scene_manager_scene = ScenesManager::GetFromCurrentScenes_1(scenes_manager, scene_meta);

            if (scene_loader_debug_logging) {
                console::console_send(fmt::format("{} -> {}", scene_name, static_cast<int>(state)));
            }

            SceneLoadEventMetadata event{
                .scene_name = scene_name,
                .state = state,
                .scene = scene_manager_scene,
            };
            scenes_event_bus.trigger_event(&event);

            if (scenes_to_load.contains(scene_name)) {
                auto pending_scene = scenes_to_load[scene_name];

                app::GameObject* scene_root_go = nullptr;

                if (
                        state == app::SceneState__Enum::Loaded ||
                        state == app::SceneState__Enum::Enabling ||
                        state == app::SceneState__Enum::Enabled ||
                        state == app::SceneState__Enum::Disabling ||
                        state == app::SceneState__Enum::Disabled
                ) {
                    scene_root_go = il2cpp::unity::get_game_object(scene_manager_scene->fields.SceneRoot);
                    scene_manager_scene->fields.PreventUnloading = pending_scene.keep_preloaded;
                }

                if (
                        state == app::SceneState__Enum::Loaded ||
                        state == app::SceneState__Enum::LoadingCancelled
                ) {
                    scenes_to_load.erase(scene_name);
                }

                for (auto on_load_callback : pending_scene.scene_loading_callbacks) {
                    on_load_callback(pending_scene.scene_name, state, scene_root_go);
                }
            }
        }

        IL2CPP_INTERCEPT(ScenesManager, bool, CancelScene, (app::ScenesManager * this_ptr, app::SceneManagerScene* scene)) {
            auto scene_name_csstring = scene->fields.MetaData->fields.Scene;
            auto scene_name = il2cpp::convert_csstring(scene_name_csstring);

            if (scenes_to_load.contains(scene_name)) {
                return false;
            }

            return next::ScenesManager::CancelScene(this_ptr, scene);
        }
    } // namespace

    TimedEventBus<SceneLoadEventMetadata*>& event_bus() {
        return scenes_event_bus;
    }

    app::RuntimeSceneMetaData* get_scene_metadata(std::string_view scene) {
        auto scenes_manager = get_scenes_manager();
        auto scene_name_csstring = il2cpp::string_new(scene);
        return ScenesManager::GetSceneInformation(scenes_manager, scene_name_csstring);
    }

    bool scene_is_loading(std::string_view scene) {
        auto metadata = get_scene_metadata(scene);
        return ScenesManager::SceneIsLoading(get_scenes_manager(), metadata->fields.SceneMoonGuid);
    }

    bool scene_is_loaded(std::string_view scene) {
        auto metadata = get_scene_metadata(scene);
        return ScenesManager::SceneIsLoaded(get_scenes_manager(), metadata->fields.SceneMoonGuid);
    }

    bool scene_is_enabled(std::string_view scene) {
        auto metadata = get_scene_metadata(scene);
        return ScenesManager::SceneIsEnabled_2(get_scenes_manager(), metadata->fields.SceneMoonGuid);
    }

    app::SceneState__Enum scene_state(std::string_view scene) {
        auto metadata = get_scene_metadata(scene);
        auto scene_manager_scene = ScenesManager::GetFromCurrentScenes_1(get_scenes_manager(), metadata);

        if (scene_manager_scene == nullptr) {
            return app::SceneState__Enum::LoadingCancelled;
        }

        return scene_manager_scene->fields.m_currentState;
    }

    void enable_scene(std::string_view scene, bool async) {
        auto metadata = get_scene_metadata(scene);
        auto scene_manager_scene = ScenesManager::GetFromCurrentScenes_1(get_scenes_manager(), metadata);

        if (scene_manager_scene == nullptr) {
            return;
        }

        return ScenesManager::EnableDisabledScene(get_scenes_manager(), scene_manager_scene, async);
    }

    void force_load_scene(std::string_view scene, scene_loading_callback callback, bool keep_preloaded, bool async) {
        auto& scene_to_load = scenes_to_load[std::string(scene)];
        scene_to_load.scene_name = std::string(scene);
        scene_to_load.keep_preloaded = scene_to_load.keep_preloaded || keep_preloaded;

        if (callback != nullptr)
            scene_to_load.scene_loading_callbacks.push_back(callback);

        auto scenes_manager = get_scenes_manager();
        auto scene_name_csstring = il2cpp::string_new(scene_to_load.scene_name);
        auto scene_meta = ScenesManager::GetSceneInformation(scenes_manager, scene_name_csstring);

        if (ScenesManager::SceneIsLoaded(scenes_manager, scene_meta->fields.SceneMoonGuid)) {
            auto scene_manager_scene = ScenesManager::GetFromCurrentScenes_1(scenes_manager, scene_meta);
            auto scene_root_go = il2cpp::unity::get_game_object(scene_manager_scene->fields.SceneRoot);
            scene_manager_scene->fields.PreventUnloading = keep_preloaded;
            callback(scene, scene_manager_scene->fields.m_currentState, scene_root_go);
        } else if (!ScenesManager::SceneIsLoading(scenes_manager, scene_meta->fields.SceneMoonGuid)) {
            ScenesManager::RequestAdditivelyLoadScene(scenes_manager, scene_meta, async, true, true, true, false);
        }
    }

    /**
     * Use with caution, can destroy things
     */
    void unload_all_scenes() {
        ScenesManager::UnloadAllScenes(get_scenes_manager());
    }

    void allow_unload_scene(std::string_view scene_name) {
        auto scene_metadata = get_scene_metadata(scene_name);
        if (scene_metadata != nullptr) {
            ScenesManager::UnsetPreventUnloading_2(get_scenes_manager(), scene_metadata);
        }
    }

    void unload_scene(std::string_view scene_name, bool instant) {
        auto scene = ScenesManager::GetSceneManagerScene(get_scenes_manager(), il2cpp::string_new(scene_name));
        if (scene != nullptr) {
            ScenesManager::UnloadScene(get_scenes_manager(), scene, true, instant);
        }
    }

    void remove_scene(std::string_view scene_name, bool instant) {
        auto scene = ScenesManager::GetSceneManagerScene(get_scenes_manager(), il2cpp::string_new(scene_name));
        if (scene != nullptr) {
            ScenesManager::RemoveScene(get_scenes_manager(), scene, instant);
        }
    }

    std::set<std::string> get_scenes_at_position(app::Vector3 position) {
        auto scenes_manager = get_scenes_manager();

        auto scenes = ScenesManager::ListAllScenesAtPosition(scenes_manager, position);
        std::set<std::string> scene_names;

        for (auto i = 0; i < scenes->fields._size; i++) {
            auto scene_metadata = scenes->fields._items->vector[i];
            scene_names.emplace(il2cpp::convert_csstring(scene_metadata->fields.Scene));
        }

        return scene_names;
    }

    app::GameObject* get_root(std::string_view name) {
        const auto scenes = types::Scenes::get_class();
        auto manager = scenes->static_fields->Manager;
        auto cname = il2cpp::string_new(name);
        auto meta = ScenesManager::GetSceneInformation(manager, cname);
        if (meta == nullptr || !ScenesManager::SceneIsLoaded(manager, meta->fields.SceneMoonGuid)) {
            auto container = game::container(game::RandoContainer::Randomizer);
            auto scene = UnityEngine::GameObject::get_scene(container);
            auto dont_destroy_on_load = il2cpp::unity::get_root_game_objects(scene);
            for (auto game_object : dont_destroy_on_load)
                if (il2cpp::unity::get_object_name(game_object) == name)
                    return game_object;

            return nullptr;
        }

        auto scene = ScenesManager::GetFromCurrentScenes_1(manager, meta);
        return il2cpp::unity::get_game_object(scene->fields.SceneRoot);
    }

    std::vector<app::GameObject*> get_roots_from_active() {
        std::vector<app::GameObject*> game_objects;
        const auto scenes = types::Scenes::get_class();
        auto manager = scenes->static_fields->Manager;
        for (auto i = 0; i < manager->fields.ActiveScenes->fields._size; ++i) {
            auto scene = manager->fields.ActiveScenes->fields._items->vector[i];
            game_objects.push_back(il2cpp::unity::get_game_object(scene->fields.SceneRoot));
        }

        auto container = game::container(game::RandoContainer::Randomizer);
        auto scene = UnityEngine::GameObject::get_scene(container);
        auto dont_destroy_on_load = il2cpp::unity::get_root_game_objects(scene);
        game_objects.insert(game_objects.end(), dont_destroy_on_load.begin(), dont_destroy_on_load.end());

        return game_objects;
    }

    app::GameObject* get_game_object(std::string_view path) {
        if (path.empty())
            return nullptr;

        std::vector<std::string> split_path;
        std::string str(path);
        split_str(str, split_path, '/');
        auto root_go = get_root(split_path.front());
        split_path.erase(split_path.begin());

        if (split_path.empty()) {
            return root_go;
        }

        return il2cpp::unity::find_child(root_go, split_path);
    }

    gchandle initial_values_handle = 0;

    void load_default_values() {
        auto initial_values = il2cpp::gchandle_target<app::SceneMetaData_SeinInitialValuesWotW>(initial_values_handle);
        if (il2cpp::unity::is_valid(initial_values))
            il2cpp::invoke(initial_values, "ApplyInitialValues");
        else
            modloader::warn("scene_load", "Failed to set default wotw values.");
    }

    void on_load_spawn(std::string_view scene_name, app::SceneState__Enum state, app::GameObject* scene_root) {
        if (state == app::SceneState__Enum::Loaded && scene_root != nullptr) {
            auto root = il2cpp::unity::get_component<app::SceneRoot>(scene_root, "", "SceneRoot");
            initial_values_handle = il2cpp::gchandle_new(root->fields.MetaData->fields.InitialValuesWisp, false);
        }
    }

    void set_debug_logging(std::string const& command, std::vector<console::CommandParam> const& params) {
        if (params.size() != 1) {
            console::console_send("Invalid number of arguments. Expected 1");
            return;
        }

        if (!console::try_get_bool(params[0], scene_loader_debug_logging)) {
            console::console_send("Invalid argument. Expected boolean (on/off)");
            return;
        }

        console::console_send(fmt::format("Debug logging {}", scene_loader_debug_logging ? "enabled" : "disabled"));
    }

    void initialize() {
        force_load_scene("swampIntroTop", &on_load_spawn);
        console::register_command({ "scenes", "set_debug" }, set_debug_logging);
    }

    CALL_ON_INIT(initialize);
} // namespace scenes

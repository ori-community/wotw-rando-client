#include <Core/api/game/game.h>
#include <Core/api/scenes/scene_load.h>

#include <Common/ext.h>

#include <Modloader/app/methods/SceneManagerScene.h>
#include <Modloader/app/methods/ScenesManager.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/RuntimeSceneMetaData.h>
#include <Modloader/app/types/GameController.h>
#include <Modloader/app/types/GameStateMachine.h>
#include <Modloader/app/types/Scenes.h>
#include <Modloader/app/types/ScenesManager.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>

#include <Modloader/app/methods/SceneRoot.h>
#include <set>
#include <unordered_set>

using namespace app::classes;
using namespace modloader::win;

namespace core::api::scenes {
    struct PendingScene {
        std::string scene_name;
        std::vector<scene_loading_callback> scene_loading_callbacks;
        bool keep_preloaded = false;
    };

    std::unordered_map<std::string, PendingScene> scenes_to_load;
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
                console::console_send(std::format("{} -> {}", scene_name, static_cast<int>(state)));
            }

            SceneLoadEventMetadata event{
                .scene_name = scene_name,
                .state = state,
                .scene = scene_manager_scene,
            };

            event_bus().trigger_event(&event);
            single_event_bus().trigger_event(scene_name, &event);

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

                for (auto on_load_callback: pending_scene.scene_loading_callbacks) {
                    on_load_callback(&event);
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

    common::EventBus<SceneLoadEventMetadata*>& event_bus() {
        static common::EventBus<SceneLoadEventMetadata*> bus;
        return bus;
    }

    common::EventBus<SceneLoadEventMetadata*, std::string>& single_event_bus() {
        static common::EventBus<SceneLoadEventMetadata*, std::string> bus;
        return bus;
    }

    app::RuntimeSceneMetaData* get_runtime_scene_metadata(std::string_view scene) {
        auto scenes_manager = get_scenes_manager();
        auto scene_name_csstring = il2cpp::string_new(scene);
        return ScenesManager::GetSceneInformation(scenes_manager, scene_name_csstring);
    }

    app::RuntimeSceneMetaData* current_scene() {
        const auto scenes_manager = types::Scenes::get_class()->static_fields->Manager;
        return ScenesManager::get_CurrentScene(scenes_manager);
    }

    std::string current_scene_name() {
        const auto scene = current_scene();
        return scene == nullptr ? "" : il2cpp::convert_csstring(scene->fields.Scene);
    }

    bool is_in_game() {
        auto controller_klass = types::GameController::get_class();
        auto controller = controller_klass->static_fields->Instance;
        if (controller_klass->static_fields->FreezeFixedUpdate || controller->fields.m_isLoadingGame) {
            return false;
        }

        auto scenes_manager = types::Scenes::get_class()->static_fields->Manager;
        auto scene = scenes_manager->fields.m_currentScene;
        if (scene == nullptr) {
            return false;
        }

        auto scene_name = il2cpp::convert_csstring(scene->fields.Scene);
        auto game_state_machine = types::GameStateMachine::get_class()->static_fields->m_instance;
        return game_state_machine->fields._CurrentState_k__BackingField != app::GameStateMachine_State__Enum::Game ||
            (scene_name != "wotwTitleScreen" && scene_name != "kuFlyAway");
    }

    bool scene_is_loading(std::string_view scene) {
        auto metadata = get_runtime_scene_metadata(scene);
        return ScenesManager::SceneIsLoading(get_scenes_manager(), metadata->fields.SceneMoonGuid);
    }

    bool scene_is_loaded(std::string_view scene) {
        auto metadata = get_runtime_scene_metadata(scene);
        return ScenesManager::SceneIsLoaded(get_scenes_manager(), metadata->fields.SceneMoonGuid);
    }

    bool scene_is_enabled(std::string_view scene) {
        auto metadata = get_runtime_scene_metadata(scene);
        return ScenesManager::SceneIsEnabled_2(get_scenes_manager(), metadata->fields.SceneMoonGuid);
    }

    app::SceneState__Enum scene_state(std::string_view scene) {
        auto metadata = get_runtime_scene_metadata(scene);
        auto scene_manager_scene = ScenesManager::GetFromCurrentScenes_1(get_scenes_manager(), metadata);

        if (scene_manager_scene == nullptr) {
            return app::SceneState__Enum::LoadingCancelled;
        }

        return scene_manager_scene->fields.m_currentState;
    }

    void enable_scene(std::string_view scene, bool async) {
        auto metadata = get_runtime_scene_metadata(scene);
        auto scene_manager_scene = ScenesManager::GetFromCurrentScenes_1(get_scenes_manager(), metadata);

        if (scene_manager_scene == nullptr) {
            return;
        }

        return ScenesManager::EnableDisabledScene(get_scenes_manager(), scene_manager_scene, async);
    }

    void force_enable_scene(std::string_view scene_name) {
        const auto scene_manager_scene = get_scene_manager_scene(scene_name);

        if (!il2cpp::unity::is_valid(scene_manager_scene)) {
            return;
        }

        SceneManagerScene::PreEnableScene(scene_manager_scene);
        SceneRoot::EnableSceneImmediate(scene_manager_scene->fields.SceneRoot);
        SceneManagerScene::PostEnableScene(scene_manager_scene);
    }

    void force_load_scene(std::string_view scene, scene_loading_callback callback, bool keep_preloaded, bool async, bool load_dependant, bool queue_included) {
        auto& scene_to_load = scenes_to_load[std::string(scene)];
        scene_to_load.scene_name = std::string(scene);
        scene_to_load.keep_preloaded = scene_to_load.keep_preloaded || keep_preloaded;

        if (callback != nullptr) {
            scene_to_load.scene_loading_callbacks.push_back(callback);
        }

        auto scenes_manager = get_scenes_manager();
        auto scene_name_csstring = il2cpp::string_new(scene_to_load.scene_name);
        auto scene_meta = ScenesManager::GetSceneInformation(scenes_manager, scene_name_csstring);

        if (ScenesManager::SceneIsLoaded(scenes_manager, scene_meta->fields.SceneMoonGuid)) {
            auto scene_manager_scene = ScenesManager::GetFromCurrentScenes_1(scenes_manager, scene_meta);
            auto scene_root_go = il2cpp::unity::get_game_object(scene_manager_scene->fields.SceneRoot);
            scene_manager_scene->fields.PreventUnloading = keep_preloaded;

            if (callback != nullptr) {
                SceneLoadEventMetadata metadata{
                    std::string(scene), scene_manager_scene->fields.m_currentState, scene_manager_scene,
                };
                callback(&metadata);
            }
        } else if (!ScenesManager::SceneIsLoading(scenes_manager, scene_meta->fields.SceneMoonGuid)) {
            ScenesManager::RequestAdditivelyLoadScene(scenes_manager, scene_meta, async, true, true, load_dependant, queue_included);
        }
    }

    /**
     * Use with caution, can destroy things
     */
    void unload_all_scenes() {
        ScenesManager::UnloadAllScenes(get_scenes_manager());
    }

    void allow_unload_scene(std::string_view scene_name) {
        auto scene_metadata = get_runtime_scene_metadata(scene_name);
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

    std::set<int> get_scene_ids_at_position(app::Vector3 position) {
        const auto scenes_manager = get_scenes_manager();
        ScenesManager::QueryQuadTreeFast_1(scenes_manager, position, types::ScenesManager::get_class()->static_fields->m_tempHashList);
        std::set<int> scene_ids;

        constexpr float RECT_WIDTH = 80.f;
        constexpr float RECT_HEIGHT = 80.f;
        const app::Rect rect {
            position.x - RECT_WIDTH / 2.f,
            position.x + RECT_WIDTH / 2.f,
            position.y - RECT_HEIGHT / 2.f,
            position.y + RECT_HEIGHT / 2.f,
        };

        for (const auto id: il2cpp::ListIterator(types::ScenesManager::get_class()->static_fields->m_tempHashList)) {
            const auto scene_meta = ScenesManager::GetSceneFromLinearArray(scenes_manager, id);

            if (
                RuntimeSceneMetaData::IsInsideSceneBounds_3(scene_meta, rect) ||
                RuntimeSceneMetaData::IsInsideScenePaddingBounds_5(scene_meta, rect) ||
                RuntimeSceneMetaData::IsInsideSceneLoadingZone_2(scene_meta, rect)
            ) {
                scene_ids.emplace(id);
            }
        }

        return scene_ids;
    }

    std::set<std::string> get_scenes_at_position(app::Vector3 position) {
        const auto scenes_manager = get_scenes_manager();
        std::set<std::string> scene_names;

        for (const auto scene_id: get_scene_ids_at_position(position)) {
            scene_names.emplace(il2cpp::convert_csstring(scenes_manager->fields.m_linearScenesArray->vector[scene_id]->fields.Scene));
        }

        return scene_names;
    }

    app::GameObject* get_root(std::string_view name) {
        const auto scenes = types::Scenes::get_class();
        auto manager = scenes->static_fields->Manager;
        auto cname = il2cpp::string_new(name);
        auto meta = ScenesManager::GetSceneInformation(manager, cname);
        if (meta == nullptr || !ScenesManager::SceneIsLoaded(manager, meta->fields.SceneMoonGuid)) {
            auto container = core::api::game::container(core::api::game::RandoContainer::Randomizer);
            auto scene = UnityEngine::GameObject::get_scene(container);
            auto dont_destroy_on_load = il2cpp::unity::get_root_game_objects(scene);
            for (auto game_object: dont_destroy_on_load) {
                if (il2cpp::unity::get_object_name(game_object) == name) {
                    return game_object;
                }
            }

            return nullptr;
        }

        auto scene = ScenesManager::GetFromCurrentScenes_1(manager, meta);
        return il2cpp::unity::get_game_object(scene->fields.SceneRoot);
    }

    app::SceneManagerScene* get_scene_manager_scene(std::string_view name) {
        return ScenesManager::GetSceneManagerScene(get_scenes_manager(), il2cpp::string_new(name));
    }

    app::SceneRoot* get_scene_root(std::string_view name) {
        const auto scenes_manager_scene = get_scene_manager_scene(name);

        if (!il2cpp::unity::is_valid(scenes_manager_scene)) {
            return nullptr;
        }

        return scenes_manager_scene->fields.SceneRoot;
    }

    std::vector<app::GameObject*> get_roots_from_active() {
        std::vector<app::GameObject*> game_objects;
        const auto scenes = types::Scenes::get_class();
        auto manager = scenes->static_fields->Manager;
        for (auto scene: il2cpp::ListIterator(manager->fields.ActiveScenes)) {
            game_objects.push_back(il2cpp::unity::get_game_object(scene->fields.SceneRoot));
        }

        auto container = core::api::game::container(core::api::game::RandoContainer::Randomizer);
        auto scene = UnityEngine::GameObject::get_scene(container);
        auto dont_destroy_on_load = il2cpp::unity::get_root_game_objects(scene);
        game_objects.insert(game_objects.end(), dont_destroy_on_load.begin(), dont_destroy_on_load.end());

        return game_objects;
    }

    app::GameObject* get_game_object(std::string_view path) {
        if (path.empty()) {
            return nullptr;
        }

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

    GCHandleId initial_values_handle = 0;

    void load_default_values() {
        auto initial_values = il2cpp::gchandle_target<app::SceneMetaData_SeinInitialValuesWotW>(initial_values_handle);
        if (il2cpp::unity::is_valid(initial_values)) {
            il2cpp::invoke(initial_values, "ApplyInitialValues");
        } else {
            modloader::warn("scene_load", "Failed to set default wotw values.");
        }
    }

    void on_load_spawn(SceneLoadEventMetadata* metadata) {
        if (metadata->state == app::SceneState__Enum::Loaded && metadata->scene->fields.SceneRoot != nullptr) {
            initial_values_handle = il2cpp::gchandle_new(metadata->scene->fields.SceneRoot->fields.MetaData->fields.InitialValuesWisp, false);
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

        console::console_send(std::format("Debug logging {}", scene_loader_debug_logging ? "enabled" : "disabled"));
    }

    auto on_game_ready = modloader::event_bus().register_handler(
        ModloaderEvent::GameReady,
        [](auto) {
            force_load_scene("swampIntroTop", &on_load_spawn);
            console::register_command({"scenes", "set_debug"}, set_debug_logging);
        }
    );
} // namespace core::api::scenes

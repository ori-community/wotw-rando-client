#pragma once

#include <Common/event_bus.h>
#include <Core/macros.h>

#include <Modloader/app/structs/SceneManagerScene.h>
#include <Modloader/app/structs/SceneState__Enum.h>
#include <Modloader/app/structs/ScenesManager.h>

#include <set>
#include <string>
#include <unordered_map>

namespace core::api::scenes {
    struct CORE_DLLEXPORT SceneLoadEventMetadata {
        std::string scene_name;
        app::SceneState__Enum state;
        app::SceneManagerScene* scene;
    };

    using scene_loading_callback = void (*)(SceneLoadEventMetadata* metadata);

    CORE_DLLEXPORT app::ScenesManager* get_scenes_manager();

    CORE_DLLEXPORT common::EventBus<SceneLoadEventMetadata*>& event_bus();
    CORE_DLLEXPORT common::EventBus<SceneLoadEventMetadata*, std::string>& single_event_bus();

    CORE_DLLEXPORT app::RuntimeSceneMetaData* get_runtime_scene_metadata(std::string_view scene);

    CORE_DLLEXPORT bool is_in_game();
    CORE_DLLEXPORT app::RuntimeSceneMetaData* current_scene();
    CORE_DLLEXPORT std::string current_scene_name();

    CORE_DLLEXPORT bool scene_is_loading(std::string_view scene);
    CORE_DLLEXPORT bool scene_is_loaded(std::string_view scene);
    CORE_DLLEXPORT bool scene_is_enabled(std::string_view scene);
    CORE_DLLEXPORT app::SceneState__Enum scene_state(std::string_view scene);
    CORE_DLLEXPORT void enable_scene(std::string_view scene, bool async = false);

    CORE_DLLEXPORT void force_enable_scene(std::string_view scene);
    CORE_DLLEXPORT void force_load_scene(std::string_view scene, scene_loading_callback callback, bool keep_preloaded = false, bool async = true, bool load_dependant = true, bool queue_included = true);
    CORE_DLLEXPORT void unload_all_scenes();
    CORE_DLLEXPORT void allow_unload_scene(std::string_view scene_name);
    CORE_DLLEXPORT void unload_scene(std::string_view scene, bool instant = true);
    CORE_DLLEXPORT void remove_scene(std::string_view scene, bool instant = true);

    CORE_DLLEXPORT std::set<int> get_scene_ids_at_position(app::Vector3 position);
    CORE_DLLEXPORT std::set<std::string> get_scenes_at_position(app::Vector3 position);

    CORE_DLLEXPORT app::SceneManagerScene* get_scene_manager_scene(std::string_view name);
    CORE_DLLEXPORT app::GameObject* get_root(std::string_view name);
    CORE_DLLEXPORT app::SceneRoot* get_scene_root(std::string_view name);
    CORE_DLLEXPORT std::vector<app::GameObject*> get_roots_from_active();
    CORE_DLLEXPORT app::GameObject* get_game_object(std::string_view path);
    CORE_DLLEXPORT void load_default_values();
} // namespace core::api::scenes

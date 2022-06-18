#pragma once

#include <macros.h>

#include <event_bus.h>
#include <set>
#include <string>
#include <unordered_map>

// TODO: Move this elsewhere.
INJECT_C_DLLEXPORT void teleport(float x, float y, bool wait_for_load);

namespace scenes {
    struct SceneLoadEventMetadata {
        std::string scene_name;
        app::SceneState__Enum state;
        app::SceneManagerScene* scene;
    };

    using scene_loading_callback = void (*)(std::string_view scene_name, app::SceneState__Enum state, app::GameObject* scene_root);

    app::ScenesManager* get_scenes_manager();

    EventBus<SceneLoadEventMetadata*>& event_bus();

    app::RuntimeSceneMetaData* get_scene_metadata(std::string_view scene);

    bool scene_is_loading(std::string_view scene);
    bool scene_is_loaded(std::string_view scene);

    void force_load_scene(std::string_view scene, scene_loading_callback callback, bool keep_preloaded = false, bool async = true);
    void unload_all_scenes();
    void allow_unload_scene(std::string_view scene_name);
    void unload_scene(std::string_view scene, bool instant = true);
    void remove_scene(std::string_view scene, bool instant = true);

    std::set<std::string> get_scenes_at_position(app::Vector3 position);

    app::GameObject* get_root(std::string_view name);
    std::vector<app::GameObject*> get_roots_from_active();
    app::GameObject* get_game_object(std::string_view path);
    void load_default_values();
} // namespace scenes

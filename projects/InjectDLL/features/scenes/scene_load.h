#pragma once

#include <macros.h>

#include <string>
#include <unordered_map>

// TODO: Move this elsewhere.
INJECT_C_DLLEXPORT void teleport(float x, float y, bool wait_for_load);

namespace scenes
{
    using scene_loaded_callback = void(*)(std::string_view scene_name, app::GameObject* scene_root);

    void force_load_scene(std::string_view scene, scene_loaded_callback callback, bool keep_preloaded = false);
    app::GameObject* get_root(std::string_view name);
    std::vector<app::GameObject*> get_roots_from_active();
    app::GameObject* get_game_object(std::string_view path);
    void load_default_values();
}

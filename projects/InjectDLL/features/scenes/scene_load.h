#pragma once

#include <macros.h>

#include <string>
#include <unordered_map>

// TODO: Move this elsewhere.
INJECT_C_DLLEXPORT void teleport(float x, float y, bool wait_for_load);

namespace scenes
{
    using loaded_callback = void(*)(std::string_view scene_name, int id, app::GameObject* scene_root);

    void force_load_area(std::string scene, int id, loaded_callback callback);
}

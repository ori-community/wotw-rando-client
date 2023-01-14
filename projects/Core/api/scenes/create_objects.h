#include <Core/macros.h>

#include <optional>
#include <string>
#include <vector>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Vector3.h>

namespace core::api::scenes {
    using object_loaded_callback = void (*)(std::string_view scene_name, std::string_view object_name, app::GameObject* scene_root, app::GameObject* go);

    CORE_DLLEXPORT void add_item(const std::string& name, app::Vector3 position, std::optional<app::Vector3> rotation, std::optional<app::Vector3> scale, std::string_view scene, std::vector<std::string> path);
} // namespace core::api::scenes

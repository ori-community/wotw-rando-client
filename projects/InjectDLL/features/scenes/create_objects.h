#include <macros.h>

#include <optional>
#include <string>
#include <vector>

namespace scenes
{
    void add_item(int id, app::Vector3 position, std::optional<app::Vector3> rotation,
        std::optional<app::Vector3> scale, std::string_view scene, std::vector<std::string> path);
}

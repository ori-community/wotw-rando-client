#pragma once

#include <Modloader/il2cpp_helpers.h>

namespace randomizer::game::teleportation {
    void teleport_instantly(app::Vector3 position);
    void teleport(app::Vector2 position);
    bool is_teleporting();
}

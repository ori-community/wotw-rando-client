#pragma once

#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace randomizer::game::teleportation {
    void teleport_instantly(app::Vector3 position);
    void teleport(app::Vector2 position);
    bool is_teleporting();
}

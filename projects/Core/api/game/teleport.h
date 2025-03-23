#pragma once

#include <Core/macros.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace core::api::game::teleportation {
    CORE_DLLEXPORT void teleport_instantly(app::Vector3 position);
    CORE_DLLEXPORT void teleport(app::Vector2 position);
    CORE_DLLEXPORT bool is_teleporting();
}

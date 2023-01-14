#pragma once

#include <Modloader/app/structs/Vector3.h>
#include <Modloader/modloader.h>

#include <Randomizer/macros.h>

#include <optional>

namespace randomizer::game {
    void teleport(app::Vector3 position, bool wait_for_load);
} // namespace randomizer::game

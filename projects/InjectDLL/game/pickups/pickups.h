#pragma once

#include <Il2CppModLoader/common.h>

#include <memory>

namespace game {
    namespace pickups {
        bool should_collect_pickup();
        std::unique_ptr<modloader::ScopedSetter<bool>> collect_pickup();
    } // namespace pickups
} // namespace game

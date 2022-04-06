#pragma once

#include <Il2CppModLoader/common.h>

namespace game
{
    namespace pickups
    {
        bool should_collect_pickup();
        modloader::ScopedSetter<bool>&& collect_pickup();
    }
}

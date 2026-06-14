#pragma once

#include <Core/property.h>

namespace randomizer::uber_states {
    namespace readonly {
        core::Property<int>& player_current_map_area();
        core::Property<bool>& player_is_teleporting();
    }
}

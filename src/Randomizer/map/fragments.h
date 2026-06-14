#pragma once

#include <Modloader/app/structs/GameWorldAreaID__Enum.h>


namespace randomizer::map::fragments {
    bool has_been_visited(app::GameWorldAreaID__Enum area, int index);
}

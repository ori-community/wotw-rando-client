#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WaterSerpentPlaceholder.h>

namespace app::classes::WaterSerpentPlaceholder {
    IL2CPP_REGISTER_METHOD(0x008E0980, void, ctor, app::WaterSerpentPlaceholder* this_ptr)
}

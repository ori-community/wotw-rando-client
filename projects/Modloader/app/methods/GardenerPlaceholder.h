#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GardenerPlaceholder.h>

namespace app::classes::GardenerPlaceholder {
    IL2CPP_REGISTER_METHOD(0x004181F0, void, ctor, (app::GardenerPlaceholder * this_ptr))
}

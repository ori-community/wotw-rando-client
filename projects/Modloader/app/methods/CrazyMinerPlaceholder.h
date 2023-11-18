#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CrazyMinerPlaceholder.h>

namespace app::classes::CrazyMinerPlaceholder {
    IL2CPP_REGISTER_METHOD(0x00DB7120, void, ctor, (app::CrazyMinerPlaceholder * this_ptr))
}

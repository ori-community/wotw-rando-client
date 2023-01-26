#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ZonesProperties.h>

namespace app::classes::ZonesProperties {
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::ZonesProperties * this_ptr))
}

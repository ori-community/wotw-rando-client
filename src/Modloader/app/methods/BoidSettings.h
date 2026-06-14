#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BoidSettings.h>

namespace app::classes::BoidSettings {
    IL2CPP_REGISTER_METHOD(0x00D36640, void, ctor, app::BoidSettings* this_ptr)
}

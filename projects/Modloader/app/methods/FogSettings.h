#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FogSettings.h>

namespace app::classes::FogSettings {
    IL2CPP_REGISTER_METHOD(0x0127C020, void, ctor, app::FogSettings* this_ptr)
}

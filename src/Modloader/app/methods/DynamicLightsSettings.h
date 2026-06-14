#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicLightsSettings.h>

namespace app::classes::DynamicLightsSettings {
    IL2CPP_REGISTER_METHOD(0x00BECEC0, void, ctor, app::DynamicLightsSettings* this_ptr)
}

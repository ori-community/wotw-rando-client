#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/VolumetricConfig.h>

namespace app::classes::Moon::Rendering::VolumetricConfig {
    IL2CPP_REGISTER_METHOD(0x00EC07E0, void, ctor, app::VolumetricConfig* this_ptr)
}

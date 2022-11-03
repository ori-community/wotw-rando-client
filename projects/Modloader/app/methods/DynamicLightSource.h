#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DynamicLightSource {
    IL2CPP_REGISTER_METHOD(0x00BEC580, void, Update, (app::DynamicLightSource * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BEC830, void, ctor, (app::DynamicLightSource * this_ptr))
} // namespace app::classes::DynamicLightSource

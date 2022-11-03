#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ContrastProvider {
    IL2CPP_REGISTER_METHOD(0x011E7C10, float, GetFloatValue, (app::ContrastProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ContrastProvider * this_ptr))
} // namespace app::classes::ContrastProvider

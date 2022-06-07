#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ChangeProtectiveLightRadius {
    IL2CPP_REGISTER_METHOD(0x01045F60, void, FixedUpdate, (app::ChangeProtectiveLightRadius * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01045F60, void, ChangeRadius, (app::ChangeProtectiveLightRadius * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ChangeProtectiveLightRadius * this_ptr))
}

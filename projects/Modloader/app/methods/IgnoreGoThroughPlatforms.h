#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IgnoreGoThroughPlatforms.h>

namespace app::classes::IgnoreGoThroughPlatforms {
    IL2CPP_REGISTER_METHOD(0x00627270, void, OnEnable, (app::IgnoreGoThroughPlatforms * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IgnoreCollision, (app::IgnoreGoThroughPlatforms * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00627280, void, set_IgnoreCollision, (app::IgnoreGoThroughPlatforms * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00627550, void, OnDisable, (app::IgnoreGoThroughPlatforms * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IgnoreGoThroughPlatforms * this_ptr))
} // namespace app::classes::IgnoreGoThroughPlatforms

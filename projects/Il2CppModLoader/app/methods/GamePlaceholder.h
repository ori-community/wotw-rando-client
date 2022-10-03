#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::GamePlaceholder {
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, Start, (app::GamePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8EA0, void, FixedUpdate, (app::GamePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8F90, void, Awake, (app::GamePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::GamePlaceholder * this_ptr))
} // namespace app::classes::GamePlaceholder

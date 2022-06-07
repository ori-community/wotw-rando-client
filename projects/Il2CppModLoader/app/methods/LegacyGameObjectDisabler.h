#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LegacyGameObjectDisabler {
    IL2CPP_REGISTER_METHOD(0x00443C10, void, Awake, (app::LegacyGameObjectDisabler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LegacyGameObjectDisabler * this_ptr))
}

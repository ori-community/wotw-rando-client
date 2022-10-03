#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::InGameUIEnabler {
    IL2CPP_REGISTER_METHOD(0x00627EC0, void, Awake, (app::InGameUIEnabler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00627F60, void, Initialize, (app::InGameUIEnabler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::InGameUIEnabler * this_ptr))
} // namespace app::classes::InGameUIEnabler

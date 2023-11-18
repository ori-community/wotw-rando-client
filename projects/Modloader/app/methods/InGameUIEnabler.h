#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InGameUIEnabler.h>

namespace app::classes::InGameUIEnabler {
    IL2CPP_REGISTER_METHOD(0x00627EC0, void, Awake, (app::InGameUIEnabler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00627F60, void, Initialize, (app::InGameUIEnabler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::InGameUIEnabler * this_ptr))
} // namespace app::classes::InGameUIEnabler

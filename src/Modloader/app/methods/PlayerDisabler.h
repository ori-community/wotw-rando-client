#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerDisabler.h>

namespace app::classes::PlayerDisabler {
    IL2CPP_REGISTER_METHOD(0x0140E520, void, OnEnable, app::PlayerDisabler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0140E5D0, void, OnDisable, app::PlayerDisabler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::PlayerDisabler* this_ptr)
} // namespace app::classes::PlayerDisabler

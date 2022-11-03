#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PlayerUberStateGroup {
    IL2CPP_REGISTER_METHOD(0x0142FA90, void, Awake, (app::PlayerUberStateGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PlayerUberStateGroup * this_ptr))
} // namespace app::classes::PlayerUberStateGroup

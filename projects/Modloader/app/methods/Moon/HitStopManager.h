#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HitStop.h>

namespace app::classes::Moon::HitStopManager {
    IL2CPP_REGISTER_METHOD(0x010FA1D0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x010FA550, void, OnPreRestore, )
    IL2CPP_REGISTER_METHOD(0x010FA680, void, FixedUpdate, )
    IL2CPP_REGISTER_METHOD(0x010FA7B0, void, RegisterHitStop, app::HitStop* hit_stop)
    IL2CPP_REGISTER_METHOD(0x010FA870, void, UnregisterHitStop, app::HitStop* hit_stop)
} // namespace app::classes::Moon::HitStopManager

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::HitStopManager {
    IL2CPP_REGISTER_METHOD(0x010FA1D0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x010FA550, void, OnPreRestore, ())
    IL2CPP_REGISTER_METHODINFO(0x04700AF8, HitStopManager_OnPreRestore__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010FA680, void, FixedUpdate, ())
    IL2CPP_REGISTER_METHODINFO(0x04772080, HitStopManager_FixedUpdate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010FA7B0, void, RegisterHitStop, (app::HitStop * hit_stop))
    IL2CPP_REGISTER_METHOD(0x010FA870, void, UnregisterHitStop, (app::HitStop * hit_stop))
} // namespace app::classes::Moon::HitStopManager

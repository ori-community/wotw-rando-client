#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ForceLightTorchStopChasingZone {
    IL2CPP_REGISTER_METHOD(0x01281250, void, Awake, (app::ForceLightTorchStopChasingZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01281420, void, OnEnable, (app::ForceLightTorchStopChasingZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012814E0, void, OnDisable, (app::ForceLightTorchStopChasingZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012815A0, bool, IsInside, (app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ForceLightTorchStopChasingZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01281790, void, cctor, ())
}

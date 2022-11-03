#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ValleyOfTheWindKuroDeathZone {
    IL2CPP_REGISTER_METHOD(0x013B7DD0, void, Start, (app::ValleyOfTheWindKuroDeathZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013B7DD0, void, FixedUpdate, (app::ValleyOfTheWindKuroDeathZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013B8050, void, OnEnable, (app::ValleyOfTheWindKuroDeathZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013B8110, void, OnDisable, (app::ValleyOfTheWindKuroDeathZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013B81D0, void, OnDrawGizmos, (app::ValleyOfTheWindKuroDeathZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ValleyOfTheWindKuroDeathZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013B82D0, void, cctor, ())
} // namespace app::classes::ValleyOfTheWindKuroDeathZone

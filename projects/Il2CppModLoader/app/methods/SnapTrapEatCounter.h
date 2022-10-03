#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SnapTrapEatCounter {
    IL2CPP_REGISTER_METHOD(0x006D6050, void, Awake, (app::SnapTrapEatCounter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006D60E0, void, EnemyEaten, (app::SnapTrapEatCounter * this_ptr, app::MoonTimeline* closed_timeline))
    IL2CPP_REGISTER_METHOD(0x00443C10, void, Die, (app::SnapTrapEatCounter * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04724320, SnapTrapEatCounter_Die__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SnapTrapEatCounter * this_ptr))
} // namespace app::classes::SnapTrapEatCounter

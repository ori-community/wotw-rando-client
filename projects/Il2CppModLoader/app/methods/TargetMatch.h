#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TargetMatch {
    IL2CPP_REGISTER_METHOD(0x031B6D90, void, Awake, (app::TargetMatch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B6E20, void, Match, (app::TargetMatch * this_ptr, float weight, app::Vector3 anchor))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TargetMatch * this_ptr))
}

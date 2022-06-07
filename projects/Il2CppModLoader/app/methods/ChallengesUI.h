#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ChallengesUI {
    IL2CPP_REGISTER_METHOD(0x010453E0, app::ChallengesUI *, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x004BE040, app::Rect, PushDown, (app::Rect * rect, float offset))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ChallengesUI * this_ptr))
}

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ChallengesUI.h>
#include <Modloader/app/structs/Rect.h>

namespace app::classes::ChallengesUI {
    IL2CPP_REGISTER_METHOD(0x010453E0, app::ChallengesUI*, get_Instance, )
    IL2CPP_REGISTER_METHOD(0x004BE040, app::Rect, PushDown, app::Rect* rect, float offset)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::ChallengesUI* this_ptr)
} // namespace app::classes::ChallengesUI

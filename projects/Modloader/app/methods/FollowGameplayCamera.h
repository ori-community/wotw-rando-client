#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::FollowGameplayCamera {
    IL2CPP_REGISTER_METHOD(0x0127C1B0, void, Update, (app::FollowGameplayCamera * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::FollowGameplayCamera * this_ptr))
} // namespace app::classes::FollowGameplayCamera

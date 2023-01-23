#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TweenConstantSpeedProvider.h>

namespace app::classes::Moon::TweenConstantSpeedProvider {
    IL2CPP_REGISTER_METHOD(0x01E93630, float, GetTweenSpeed, (app::TweenConstantSpeedProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TweenConstantSpeedProvider * this_ptr))
} // namespace app::classes::Moon::TweenConstantSpeedProvider

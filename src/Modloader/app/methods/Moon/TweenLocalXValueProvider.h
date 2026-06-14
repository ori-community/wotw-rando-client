#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TweenLocalXValueProvider.h>

namespace app::classes::Moon::TweenLocalXValueProvider {
    IL2CPP_REGISTER_METHOD(0x01E93690, float, GetTweenNormalizedValue, app::TweenLocalXValueProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::TweenLocalXValueProvider* this_ptr)
} // namespace app::classes::Moon::TweenLocalXValueProvider

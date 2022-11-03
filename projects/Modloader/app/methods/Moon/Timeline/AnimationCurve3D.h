#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Timeline::AnimationCurve3D {
    IL2CPP_REGISTER_METHOD(0x010C7790, float, get_Duration, (app::AnimationCurve3D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C7930, void, ctor, (app::AnimationCurve3D * this_ptr))
} // namespace app::classes::Moon::Timeline::AnimationCurve3D

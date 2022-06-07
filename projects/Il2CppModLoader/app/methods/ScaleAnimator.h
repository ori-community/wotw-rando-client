#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ScaleAnimator {
    IL2CPP_REGISTER_METHOD(0x00932DC0, void, CacheOriginals, (app::ScaleAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00932F30, void, SampleValue, (app::ScaleAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x009331B0, void, RestoreToOriginalState, (app::ScaleAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (app::ScaleAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00933260, app::Vector3, get_OriginalScale, (app::ScaleAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (app::ScaleAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00933280, void, ctor, (app::ScaleAnimator * this_ptr))
}

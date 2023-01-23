#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SetSpriteAnimator.h>

namespace app::classes::SetSpriteAnimator {
    IL2CPP_REGISTER_METHOD(0x005A48A0, void, CacheOriginals, (app::SetSpriteAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A48D0, void, SampleValue, (app::SetSpriteAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x005A4A40, void, RestoreToOriginalState, (app::SetSpriteAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A4AB0, float, get_Duration, (app::SetSpriteAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (app::SetSpriteAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A4BA0, void, ctor, (app::SetSpriteAnimator * this_ptr))
} // namespace app::classes::SetSpriteAnimator

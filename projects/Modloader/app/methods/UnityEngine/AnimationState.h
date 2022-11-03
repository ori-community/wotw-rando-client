#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::AnimationState {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AnimationState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0307C040, void, set_time, (app::AnimationState * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0307C0A0, void, set_normalizedTime, (app::AnimationState * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0307C100, void, set_layer, (app::AnimationState * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0307C160, app::AnimationClip*, get_clip, (app::AnimationState * this_ptr))
} // namespace app::classes::UnityEngine::AnimationState

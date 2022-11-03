#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Timeline::PathTweenAnimator {
    IL2CPP_REGISTER_METHOD(0x00778090, float, get_CurrentNormalizedPosition, (app::PathTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007780D0, app::GameObject*, get_ExternalTarget, (app::PathTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (app::PathTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00778180, app::Transform*, get_EffectiveTransform, (app::PathTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00778240, void, OnStartPlayback, (app::PathTweenAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00778590, void, OnStopPlayback, (app::PathTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (app::PathTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007785A0, void, OnUpdateEntity, (app::PathTweenAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00405F50, bool, HasFinished, (app::PathTweenAnimator * this_ptr, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x00778D60, float, get_Duration, (app::PathTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00778DC0, app::Vector3, GetPoint, (app::PathTweenAnimator * this_ptr, app::Matrix4x4* world_to_local, float time))
    IL2CPP_REGISTER_METHOD(0x00778EC0, app::Matrix4x4, GetWorldToLocal, (app::PathTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00778F30, void, ctor, (app::PathTweenAnimator * this_ptr))
} // namespace app::classes::Moon::Timeline::PathTweenAnimator

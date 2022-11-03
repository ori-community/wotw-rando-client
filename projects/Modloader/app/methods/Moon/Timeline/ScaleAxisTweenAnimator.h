#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Timeline::ScaleAxisTweenAnimator {
    IL2CPP_REGISTER_METHOD(0x01E7F860, app::Transform*, get_TransformTarget, (app::ScaleAxisTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E7F8F0, app::Transform*, get_EffectiveTransform, (app::ScaleAxisTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E7F9C0, app::GameObject*, get_ExternalTarget, (app::ScaleAxisTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (app::ScaleAxisTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E7FA70, void, OnStartPlayback, (app::ScaleAxisTweenAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01E7FB40, void, SetupInitialValues, (app::ScaleAxisTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470C748, ScaleAxisTweenAnimator_SetupInitialValues__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (app::ScaleAxisTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E7FD90, void, OnUpdateEntity, (app::ScaleAxisTweenAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01E801F0, void, OnStopPlayback, (app::ScaleAxisTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E80200, bool, HasFinished, (app::ScaleAxisTweenAnimator * this_ptr, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x01E80210, void, OnDrawGizmos, (app::ScaleAxisTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E80600, void, SynchronizeData, (app::ScaleAxisTweenAnimator * this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record))
    IL2CPP_REGISTER_METHOD(0x01E808E0, bool, ApproximateEvent, (app::ScaleAxisTweenAnimator * this_ptr, int32_t evt, float* time))
    IL2CPP_REGISTER_METHOD(0x01E80B30, void, ctor, (app::ScaleAxisTweenAnimator * this_ptr))
} // namespace app::classes::Moon::Timeline::ScaleAxisTweenAnimator

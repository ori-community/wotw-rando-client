#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Timeline::EulerZRotationTweenAnimator {
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::Transform*, get_TransformTarget, (app::EulerZRotationTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BBBA10, app::Transform*, get_EffectiveTransform, (app::EulerZRotationTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BBBAE0, void, OnStartPlayback, (app::EulerZRotationTweenAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01BBBAF0, void, SetupInitialValues, (app::EulerZRotationTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04736DD0, EulerZRotationTweenAnimator_SetupInitialValues__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01BBBD90, void, SetRotation, (app::EulerZRotationTweenAnimator * this_ptr, float angle))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (app::EulerZRotationTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BBBEE0, void, OnUpdateEntity, (app::EulerZRotationTweenAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01BBC000, void, OnDrawGizmos, (app::EulerZRotationTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008519A0, bool, HasFinished, (app::EulerZRotationTweenAnimator * this_ptr, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x01BBC490, void, ctor, (app::EulerZRotationTweenAnimator * this_ptr))
} // namespace app::classes::Moon::Timeline::EulerZRotationTweenAnimator

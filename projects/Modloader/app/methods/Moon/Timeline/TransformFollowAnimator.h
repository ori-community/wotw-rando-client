#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/TransformFollowAnimator.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::Timeline::TransformFollowAnimator {
    IL2CPP_REGISTER_METHOD(0x01E90020, app::Transform*, get_TransformTarget, (app::TransformFollowAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E90040, app::Transform*, get_EffectiveTransform, (app::TransformFollowAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStartPlayback, (app::TransformFollowAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01E90110, void, OnDrawGizmos, (app::TransformFollowAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E90490, void, ctor, (app::TransformFollowAnimator * this_ptr))
} // namespace app::classes::Moon::Timeline::TransformFollowAnimator

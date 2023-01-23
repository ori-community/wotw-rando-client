#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/ScaleTweenAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::Timeline::ScaleTweenAnimator {
    IL2CPP_REGISTER_METHOD(0x01E80FB0, app::Transform*, get_TransformTarget, (app::ScaleTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E81040, app::GameObject*, get_ExternalTarget, (app::ScaleTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (app::ScaleTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E810F0, app::Transform*, get_EffectiveTransform, (app::ScaleTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E811C0, void, OnStartPlayback, (app::ScaleTweenAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01E812A0, void, SetupInitialValues, (app::ScaleTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475CE88, ScaleTweenAnimator_SetupInitialValues__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E81520, void, OnUpdateEntity, (app::ScaleTweenAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01E81800, void, OnDrawGizmos, (app::ScaleTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00601090, bool, HasFinished, (app::ScaleTweenAnimator * this_ptr, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x01E81B60, void, ctor, (app::ScaleTweenAnimator * this_ptr))
} // namespace app::classes::Moon::Timeline::ScaleTweenAnimator

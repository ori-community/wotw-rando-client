#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Timeline::BreakPhysicsSystemAnimator {
    IL2CPP_REGISTER_METHOD(0x010C84A0, app::GameObject*, get_ExternalTarget, (app::BreakPhysicsSystemAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (app::BreakPhysicsSystemAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C8550, void, OnStartPlayback, (app::BreakPhysicsSystemAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x010C8690, void, OnStopPlayback, (app::BreakPhysicsSystemAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::MoonReference_1_UnityEngine_Transform_*, GetTransformTarget, (app::BreakPhysicsSystemAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDrawGizmosSelected, (app::BreakPhysicsSystemAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010C87E0, void, ctor, (app::BreakPhysicsSystemAnimator * this_ptr))
} // namespace app::classes::Moon::Timeline::BreakPhysicsSystemAnimator

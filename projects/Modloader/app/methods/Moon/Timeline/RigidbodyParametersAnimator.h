#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Timeline::RigidbodyParametersAnimator {
    IL2CPP_REGISTER_METHOD(0x007808F0, app::GameObject*, get_ExternalTarget, (app::RigidbodyParametersAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (app::RigidbodyParametersAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007809A0, void, OnStartPlayback, (app::RigidbodyParametersAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopPlayback, (app::RigidbodyParametersAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::MoonReference_1_UnityEngine_Transform_*, GetTransformTarget, (app::RigidbodyParametersAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDrawGizmosSelected, (app::RigidbodyParametersAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00780D60, void, ctor, (app::RigidbodyParametersAnimator * this_ptr))
} // namespace app::classes::Moon::Timeline::RigidbodyParametersAnimator

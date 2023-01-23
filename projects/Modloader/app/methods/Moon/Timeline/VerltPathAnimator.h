#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/VerltPathAnimator.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::Timeline::VerltPathAnimator {
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::MoonReference_1_UnityEngine_Transform_*, GetTransformTarget, (app::VerltPathAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D1D2E0, app::Transform*, get_EffectiveTransform, (app::VerltPathAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D1D3B0, void, InitJointNumbers, (app::VerltPathAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00778590, void, OnStartPlayback, (app::VerltPathAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00778590, void, OnStopPlayback, (app::VerltPathAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUpdate, (app::VerltPathAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, OnUpdateEntity, (app::VerltPathAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00405F50, bool, HasFinished, (app::VerltPathAnimator * this_ptr, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x00D1D480, void, ctor, (app::VerltPathAnimator * this_ptr))
} // namespace app::classes::Moon::Timeline::VerltPathAnimator

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::KuDashPuppet {
    IL2CPP_REGISTER_METHOD(0x012345B0, app::MoonAnimator*, get_KuAnimator, (app::KuDashPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01234640, void, Awake, (app::KuDashPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012347D0, float, GetGravity, (app::KuDashPuppet * this_ptr, app::MoonTimeline* timeline, float default_value))
    IL2CPP_REGISTER_METHOD(0x00E40150, int32_t, get_Id, (app::KuDashPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012348F0, void, ctor, (app::KuDashPuppet * this_ptr))
} // namespace app::classes::KuDashPuppet

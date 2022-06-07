#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::ClipAnimation_RootMotionData {
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsDirty, (app::ClipAnimation_RootMotionData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_IsDirty, (app::ClipAnimation_RootMotionData * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01B0D2A0, app::Vector3, SampleRootMotionData, (app::ClipAnimation_RootMotionData * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x01B0D3F0, app::Quaternion, SampleRootMotionRotationData, (app::ClipAnimation_RootMotionData * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x01B0D560, bool, CurvesEquals, (app::ClipAnimation_RootMotionData * this_ptr, app::AnimationCurve * curve_a, app::AnimationCurve * curve_b))
    IL2CPP_REGISTER_METHOD(0x01B0D730, bool, KeyEqualsNonAlloc, (app::ClipAnimation_RootMotionData * this_ptr, app::Keyframe key_a, app::Keyframe key_b))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ClipAnimation_RootMotionData * this_ptr))
}

#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AnimationType__Enum.h>
#include <Modloader/app/structs/ClipAnimation.h>
#include <Modloader/app/structs/AnimationParameterSet.h>
#include <Modloader/app/structs/HashSet_1_UnityEngine_AnimationClip_.h>
#include <Modloader/app/structs/MoonAnimation_RootMotionSample.h>

namespace app::classes::Moon::ClipAnimation {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::AnimationType__Enum, get_Type, (app::ClipAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_BlendTreeSize, (app::ClipAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B0C920, float, get_ClampedSpeed, (app::ClipAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B0C9E0, bool, IsLooping, (app::ClipAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CollectParameters, (app::ClipAnimation * this_ptr, app::AnimationParameterSet* parameter_set))
    IL2CPP_REGISTER_METHOD(0x01B0CB00, void, CollectAnimationClips, (app::ClipAnimation * this_ptr, app::HashSet_1_UnityEngine_AnimationClip_* clips))
    IL2CPP_REGISTER_METHOD(0x01B0CBF0, float, GetDuration, (app::ClipAnimation * this_ptr, app::AnimationParameterSet* parameter_set))
    IL2CPP_REGISTER_METHOD(0x01B0CD20, float, GetFrameRate, (app::ClipAnimation * this_ptr, app::AnimationParameterSet* parameter_set))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PrepareRootMotionEvaluation, (app::ClipAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B0CE50, app::MoonAnimation_RootMotionSample, EvaluateRootMotion, (app::ClipAnimation * this_ptr, float time, app::AnimationParameterSet* parameter_set))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RefreshRootMotionData, (app::ClipAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B0D070, void, ctor, (app::ClipAnimation * this_ptr))
} // namespace app::classes::Moon::ClipAnimation

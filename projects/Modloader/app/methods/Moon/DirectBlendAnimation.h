#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::DirectBlendAnimation {
    IL2CPP_REGISTER_METHOD(0x01B0D7A0, int32_t, get_ValidInputCount, (app::DirectBlendAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B0D840, int32_t, get_BlendTreeSize, (app::DirectBlendAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::AnimationType__Enum, get_Type, (app::DirectBlendAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B0D950, bool, IsLooping, (app::DirectBlendAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B0DA00, void, CollectParameters, (app::DirectBlendAnimation * this_ptr, app::AnimationParameterSet* parameter_set))
    IL2CPP_REGISTER_METHOD(0x01B0DC30, void, CollectAnimationClips, (app::DirectBlendAnimation * this_ptr, app::HashSet_1_UnityEngine_AnimationClip_* clips))
    IL2CPP_REGISTER_METHOD(0x01B0DD30, void, CollectAnimations, (app::DirectBlendAnimation * this_ptr, app::HashSet_1_Moon_MoonAnimation_* animations))
    IL2CPP_REGISTER_METHOD(0x01B0DE40, float, GetDuration, (app::DirectBlendAnimation * this_ptr, app::AnimationParameterSet* parameter_set))
    IL2CPP_REGISTER_METHOD(0x01B0DEB0, float, GetFrameRate, (app::DirectBlendAnimation * this_ptr, app::AnimationParameterSet* parameter_set))
    IL2CPP_REGISTER_METHOD(0x01B0DF20, void, PrepareRootMotionEvaluation, (app::DirectBlendAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B0E050, app::MoonAnimation_RootMotionSample, EvaluateRootMotion, (app::DirectBlendAnimation * this_ptr, float time, app::AnimationParameterSet* parameter_set))
    IL2CPP_REGISTER_METHOD(0x01B0E1C0, void, ctor, (app::DirectBlendAnimation * this_ptr))
} // namespace app::classes::Moon::DirectBlendAnimation

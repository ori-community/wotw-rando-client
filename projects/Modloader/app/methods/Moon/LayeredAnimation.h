#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationType__Enum.h>
#include <Modloader/app/structs/AnimationParameterSet.h>
#include <Modloader/app/structs/HashSet_1_Moon_MoonAnimation_.h>
#include <Modloader/app/structs/HashSet_1_UnityEngine_AnimationClip_.h>
#include <Modloader/app/structs/LayeredAnimation.h>
#include <Modloader/app/structs/LayeredAnimation_Input__Array.h>
#include <Modloader/app/structs/MoonAnimation_RootMotionSample.h>

namespace app::classes::Moon::LayeredAnimation {
    IL2CPP_REGISTER_METHOD(0x008E77B0, app::AnimationType__Enum, get_Type, (app::LayeredAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B16490, int32_t, get_BlendTreeSize, (app::LayeredAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B165A0, int32_t, get_ValidInputCount, (app::LayeredAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B16640, app::LayeredAnimation_Input__Array*, get_ValidInputs, (app::LayeredAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B16800, bool, IsLooping, (app::LayeredAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CollectParameters, (app::LayeredAnimation * this_ptr, app::AnimationParameterSet* parameter_set))
    IL2CPP_REGISTER_METHOD(0x01B16810, void, CollectAnimationClips, (app::LayeredAnimation * this_ptr, app::HashSet_1_UnityEngine_AnimationClip_* clips))
    IL2CPP_REGISTER_METHOD(0x01B16910, void, CollectAnimations, (app::LayeredAnimation * this_ptr, app::HashSet_1_Moon_MoonAnimation_* animations))
    IL2CPP_REGISTER_METHOD(0x01B16A20, float, GetFrameRate, (app::LayeredAnimation * this_ptr, app::AnimationParameterSet* parameter_set))
    IL2CPP_REGISTER_METHOD(0x01B16B80, float, GetDuration, (app::LayeredAnimation * this_ptr, app::AnimationParameterSet* parameter_set))
    IL2CPP_REGISTER_METHOD(0x01B16DE0, void, PrepareRootMotionEvaluation, (app::LayeredAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B16F10, app::MoonAnimation_RootMotionSample, EvaluateRootMotion, (app::LayeredAnimation * this_ptr, float time, app::AnimationParameterSet* parameter_set))
    IL2CPP_REGISTER_METHOD(0x01B17000, bool, AllInputsAreLooping, (app::LayeredAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B170B0, void, ctor, (app::LayeredAnimation * this_ptr))
} // namespace app::classes::Moon::LayeredAnimation

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationParameterSet.h>
#include <Modloader/app/structs/AnimationType__Enum.h>
#include <Modloader/app/structs/BlendAnimation.h>
#include <Modloader/app/structs/BlendAnimationMode__Enum.h>
#include <Modloader/app/structs/BlendAnimation_Input__Array.h>
#include <Modloader/app/structs/HashSet_1_Moon_MoonAnimation_.h>
#include <Modloader/app/structs/HashSet_1_UnityEngine_AnimationClip_.h>
#include <Modloader/app/structs/MoonAnimation_RootMotionSample.h>

namespace app::classes::Moon::BlendAnimation {
    IL2CPP_REGISTER_METHOD(0x00417920, app::AnimationType__Enum, get_Type, app::BlendAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B06B20, int32_t, get_BlendTreeSize, app::BlendAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B06C40, int32_t, get_ValidInputCount, app::BlendAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B06CF0, app::BlendAnimation_Input__Array*, get_ValidInputs, app::BlendAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B06EC0, bool, IsLooping, app::BlendAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B06FE0, void, CollectParameters, app::BlendAnimation* this_ptr, app::AnimationParameterSet* parameter_set)
    IL2CPP_REGISTER_METHOD(0x01B071A0, void, CollectAnimationClips, app::BlendAnimation* this_ptr, app::HashSet_1_UnityEngine_AnimationClip_* clips)
    IL2CPP_REGISTER_METHOD(0x01B072B0, void, CollectAnimations, app::BlendAnimation* this_ptr, app::HashSet_1_Moon_MoonAnimation_* animations)
    IL2CPP_REGISTER_METHOD(0x01B073D0, float, GetFrameRate, app::BlendAnimation* this_ptr, app::AnimationParameterSet* parameter_set)
    IL2CPP_REGISTER_METHOD(0x01B07670, float, GetDuration, app::BlendAnimation* this_ptr, app::AnimationParameterSet* parameter_set)
    IL2CPP_REGISTER_METHOD(0x01B07910, void, PrepareRootMotionEvaluation, app::BlendAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01B079A0,
        app::MoonAnimation_RootMotionSample,
        EvaluateRootMotion,
        app::BlendAnimation* this_ptr,
        float time,
        app::AnimationParameterSet* parameter_set
    )
    IL2CPP_REGISTER_METHOD(0x01B07C60, float, ResolveParameterValue, app::BlendAnimation* this_ptr, app::AnimationParameterSet* parameter_set)
    IL2CPP_REGISTER_METHOD(
        0x01B07CD0,
        void,
        ComputeCurrentBlendNodes,
        app::BlendAnimation_Input__Array* inputs,
        float parameter_value,
        app::BlendAnimationMode__Enum mode,
        float* current_blend_weight,
        int32_t* current_blend_node_index
    )
    IL2CPP_REGISTER_METHOD(0x01B07F50, void, ctor, app::BlendAnimation* this_ptr)
} // namespace app::classes::Moon::BlendAnimation

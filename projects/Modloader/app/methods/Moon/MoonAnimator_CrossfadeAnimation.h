#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonAnimator_CrossfadeAnimation.h>
#include <Modloader/app/structs/AnimationType__Enum.h>
#include <Modloader/app/structs/HashSet_1_UnityEngine_AnimationClip_.h>
#include <Modloader/app/structs/AnimationParameterSet.h>
#include <Modloader/app/structs/MoonAnimation_RootMotionSample.h>

namespace app::classes::Moon::MoonAnimator_CrossfadeAnimation {
    IL2CPP_REGISTER_METHOD(0x02115460, app::MoonAnimator_CrossfadeAnimation*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_BlendTreeSize, (app::MoonAnimator_CrossfadeAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00910BD0, app::AnimationType__Enum, get_Type, (app::MoonAnimator_CrossfadeAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02115540, void, CollectAnimationClips, (app::MoonAnimator_CrossfadeAnimation * this_ptr, app::HashSet_1_UnityEngine_AnimationClip_* clips))
    IL2CPP_REGISTER_METHODINFO(0x04751478, MoonAnimator_CrossfadeAnimation_CollectAnimationClips__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02115590, void, CollectParameters, (app::MoonAnimator_CrossfadeAnimation * this_ptr, app::AnimationParameterSet* parameter_set))
    IL2CPP_REGISTER_METHODINFO(0x04772DD0, MoonAnimator_CrossfadeAnimation_CollectParameters__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021155E0, float, GetDuration, (app::MoonAnimator_CrossfadeAnimation * this_ptr, app::AnimationParameterSet* parameter_set))
    IL2CPP_REGISTER_METHODINFO(0x04704C20, MoonAnimator_CrossfadeAnimation_GetDuration__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02115630, bool, IsLooping, (app::MoonAnimator_CrossfadeAnimation * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476AF38, MoonAnimator_CrossfadeAnimation_IsLooping__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02115680, float, GetFrameRate, (app::MoonAnimator_CrossfadeAnimation * this_ptr, app::AnimationParameterSet* parameter_set))
    IL2CPP_REGISTER_METHODINFO(0x04775308, MoonAnimator_CrossfadeAnimation_GetFrameRate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021156D0, void, PrepareRootMotionEvaluation, (app::MoonAnimator_CrossfadeAnimation * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04748288, MoonAnimator_CrossfadeAnimation_PrepareRootMotionEvaluation__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02115720, app::MoonAnimation_RootMotionSample, EvaluateRootMotion, (app::MoonAnimator_CrossfadeAnimation * this_ptr, float time, app::AnimationParameterSet* parameter_set))
    IL2CPP_REGISTER_METHODINFO(0x04743F80, MoonAnimator_CrossfadeAnimation_EvaluateRootMotion__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02115770, void, ctor, (app::MoonAnimator_CrossfadeAnimation * this_ptr))
} // namespace app::classes::Moon::MoonAnimator_CrossfadeAnimation

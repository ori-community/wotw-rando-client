#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::PetrifiedOwlSideStepBehaviour {
    IL2CPP_REGISTER_METHOD(0x00C396A0, void, Awake, (app::PetrifiedOwlSideStepBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C39740, void, OnStartBehaviour, (app::PetrifiedOwlSideStepBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C39A50, void, OnEndBehaviour, (app::PetrifiedOwlSideStepBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B5650, float, GetScore, (app::PetrifiedOwlSideStepBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C39BF0, bool, EndCondition, (app::PetrifiedOwlSideStepBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C39C80, void, ResetBehaviour, (app::PetrifiedOwlSideStepBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C39D60, bool, IsSeinToTheRight, (app::PetrifiedOwlSideStepBehaviour * this_ptr, app::Transform* t))
    IL2CPP_REGISTER_METHOD(0x00C39E90, bool, IsSeinToTheLeft, (app::PetrifiedOwlSideStepBehaviour * this_ptr, app::Transform* t))
    IL2CPP_REGISTER_METHOD(0x00C39EB0, app::BaseAnimator*, GetRandomStepAnimator, (app::PetrifiedOwlSideStepBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C39FA0, void, OnProcessRootMotion, (app::PetrifiedOwlSideStepBehaviour * this_ptr, app::Vector3 root_velocity))
    IL2CPP_REGISTER_METHODINFO(0x047631B0, PetrifiedOwlSideStepBehaviour_OnProcessRootMotion__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C3A1C0, void, ctor, (app::PetrifiedOwlSideStepBehaviour * this_ptr))
} // namespace app::classes::Moon::PetrifiedOwlSideStepBehaviour

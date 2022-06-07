#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PetrifiedOwlPhaseABrain {
    IL2CPP_REGISTER_METHOD(0x014E3D60, void, Awake, (app::PetrifiedOwlPhaseABrain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E42A0, void, OnPreRestore, (app::PetrifiedOwlPhaseABrain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E42F0, void, OnStartPlay, (app::PetrifiedOwlPhaseABrain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E4660, void, OnStopPlay, (app::PetrifiedOwlPhaseABrain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E46D0, void, OnReceiveDamageLeftLeg, (app::PetrifiedOwlPhaseABrain * this_ptr, app::Damage * damage))
    IL2CPP_REGISTER_METHODINFO(0x0477F768, PetrifiedOwlPhaseABrain_OnReceiveDamageLeftLeg__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x014E4A60, void, OnReceiveDamageRightLeg, (app::PetrifiedOwlPhaseABrain * this_ptr, app::Damage * damage))
    IL2CPP_REGISTER_METHODINFO(0x0477AAE0, PetrifiedOwlPhaseABrain_OnReceiveDamageRightLeg__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x014E4DF0, void, OnBrainBehaviourStarted, (app::PetrifiedOwlPhaseABrain * this_ptr, app::BrainBehaviour * behaviour))
    IL2CPP_REGISTER_METHODINFO(0x04773C30, PetrifiedOwlPhaseABrain_OnBrainBehaviourStarted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x014E4F40, void, OnBrainBehaviourEnded, (app::PetrifiedOwlPhaseABrain * this_ptr, app::BrainBehaviour * behaviour))
    IL2CPP_REGISTER_METHODINFO(0x047046B8, PetrifiedOwlPhaseABrain_OnBrainBehaviourEnded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x014E50D0, void, OnFixedUpdate, (app::PetrifiedOwlPhaseABrain * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x014E5310, void, ctor, (app::PetrifiedOwlPhaseABrain * this_ptr))
}

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PetrifiedOwlPhaseBBrain {
    IL2CPP_REGISTER_METHOD(0x014E5330, void, Awake, (app::PetrifiedOwlPhaseBBrain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E5740, void, OnDestroy, (app::PetrifiedOwlPhaseBBrain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E5A30, void, OnPreRestore, (app::PetrifiedOwlPhaseBBrain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E5B20, void, OnStartPlay, (app::PetrifiedOwlPhaseBBrain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E5DD0, void, OnStopPlay, (app::PetrifiedOwlPhaseBBrain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E5E10, void, OnLeftHornDamageReceived, (app::PetrifiedOwlPhaseBBrain * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHODINFO(0x04771360, PetrifiedOwlPhaseBBrain_OnLeftHornDamageReceived__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x014E6060, void, OnRightHornDamageReceived, (app::PetrifiedOwlPhaseBBrain * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHODINFO(0x047449F0, PetrifiedOwlPhaseBBrain_OnRightHornDamageReceived__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x014E62B0, void, OnBehaviourEnded, (app::PetrifiedOwlPhaseBBrain * this_ptr, app::BrainBehaviour* behaviour))
    IL2CPP_REGISTER_METHODINFO(0x047172C0, PetrifiedOwlPhaseBBrain_OnBehaviourEnded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x014E63E0, void, OnFixedUpdate, (app::PetrifiedOwlPhaseBBrain * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x014E6500, void, ctor, (app::PetrifiedOwlPhaseBBrain * this_ptr))
} // namespace app::classes::PetrifiedOwlPhaseBBrain

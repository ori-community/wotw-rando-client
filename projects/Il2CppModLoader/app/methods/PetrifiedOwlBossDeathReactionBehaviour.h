#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PetrifiedOwlBossDeathReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::PetrifiedOwlBossDeathReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0049E8D0, void, OnEnterTask, (app::PetrifiedOwlBossDeathReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0049EB60, app::BehaviourStatus__Enum, OnExecuteTask, (app::PetrifiedOwlBossDeathReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0049ECC0, void, OnExitTask, (app::PetrifiedOwlBossDeathReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDeathTimelineEnded, (app::PetrifiedOwlBossDeathReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04756950, PetrifiedOwlBossDeathReactionBehaviour_OnDeathTimelineEnded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0049F0F0, void, UpdateOriLogc, (app::PetrifiedOwlBossDeathReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0049F220, void, ctor, (app::PetrifiedOwlBossDeathReactionBehaviour * this_ptr))
} // namespace app::classes::PetrifiedOwlBossDeathReactionBehaviour

#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SpiderBossTimelineBehaviourBase {
    IL2CPP_REGISTER_METHOD(0x011BADD0, void, OnEnter, (app::SpiderBossTimelineBehaviourBase * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011BB080, void, OnProcessRootMotion, (app::SpiderBossTimelineBehaviourBase * this_ptr, app::Vector3 root_velocity))
    IL2CPP_REGISTER_METHODINFO(0x04732AA8, SpiderBossTimelineBehaviourBase_OnProcessRootMotion__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldPauseLocomotionIsConstant, (app::SpiderBossTimelineBehaviourBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011BB150, bool, ShouldPauseLocomotion, (app::SpiderBossTimelineBehaviourBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011BB230, app::BehaviourStatus__Enum, OnExecute, (app::SpiderBossTimelineBehaviourBase * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011BB390, void, OnExit, (app::SpiderBossTimelineBehaviourBase * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011B1480, void, ctor, (app::SpiderBossTimelineBehaviourBase * this_ptr))
} // namespace app::classes::SpiderBossTimelineBehaviourBase

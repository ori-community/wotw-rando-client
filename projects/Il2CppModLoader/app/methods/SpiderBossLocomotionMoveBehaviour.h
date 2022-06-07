#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SpiderBossLocomotionMoveBehaviour {
    IL2CPP_REGISTER_METHOD(0x00A1FBC0, app::Vector3, get_TargetPosition, (app::SpiderBossLocomotionMoveBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A1FBE0, void, set_TargetPosition, (app::SpiderBossLocomotionMoveBehaviour * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x003FC020, float, get_TraversalSpeed, (app::SpiderBossLocomotionMoveBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FC030, void, set_TraversalSpeed, (app::SpiderBossLocomotionMoveBehaviour * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x011B6380, bool, get_HasArrivedAtZone, (app::SpiderBossLocomotionMoveBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B6510, bool, get_HasArrivedAtTarget, (app::SpiderBossLocomotionMoveBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B6630, void, OnEnterTask, (app::SpiderBossLocomotionMoveBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x011B6740, void, OnFinishedMoveBehaviour, (app::SpiderBossLocomotionMoveBehaviour * this_ptr, app::EntityTask * task, app::BehaviourStatus__Enum reason))
    IL2CPP_REGISTER_METHOD(0x011B6750, app::BehaviourStatus__Enum, OnExecuteTask, (app::SpiderBossLocomotionMoveBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x011B6770, void, OnExitTask, (app::SpiderBossLocomotionMoveBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x011B6810, bool, IsInSameZone, (app::SpiderBossLocomotionMoveBehaviour * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x011B6980, bool, IsAtPoint, (app::SpiderBossLocomotionMoveBehaviour * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (app::SpiderBossLocomotionMoveBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B6AB0, void, ctor, (app::SpiderBossLocomotionMoveBehaviour * this_ptr))
}

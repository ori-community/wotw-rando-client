#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::TentacleIdleBehaviour {
    IL2CPP_REGISTER_METHOD(0x010AD3F0, app::Vector2, get_EffectiveRandomTargetCenter, (app::TentacleIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010AD5A0, void, OnEnterTask, (app::TentacleIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x010AD750, void, NextRandomTarget, (app::TentacleIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010AD930, app::BehaviourStatus__Enum, OnExecuteTask, (app::TentacleIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x010ADBA0, void, OnExitTask, (app::TentacleIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (app::TentacleIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010ADBF0, void, OnDrawGizmos, (app::TentacleIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010ADCC0, void, ctor, (app::TentacleIdleBehaviour * this_ptr))
} // namespace app::classes::Moon::TentacleIdleBehaviour

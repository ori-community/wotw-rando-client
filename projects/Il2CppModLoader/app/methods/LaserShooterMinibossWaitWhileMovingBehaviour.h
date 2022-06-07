#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LaserShooterMinibossWaitWhileMovingBehaviour {
    IL2CPP_REGISTER_METHOD(0x00F1E150, void, OnEnter, (app::LaserShooterMinibossWaitWhileMovingBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00F1E1C0, void, OnExit, (app::LaserShooterMinibossWaitWhileMovingBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00F1E1F0, app::BehaviourStatus__Enum, OnExecute, (app::LaserShooterMinibossWaitWhileMovingBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00F1E2A0, void, StartTimeline, (app::LaserShooterMinibossWaitWhileMovingBehaviour * this_ptr, app::MoonTimeline * timeline, app::Action * on_stop))
    IL2CPP_REGISTER_METHOD(0x00F1E1C0, void, StopCurrentTimeline, (app::LaserShooterMinibossWaitWhileMovingBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F1E2E0, void, ctor, (app::LaserShooterMinibossWaitWhileMovingBehaviour * this_ptr))
}

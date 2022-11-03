#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::LaserShooterChangePositionBehaviour {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityInitialized, (app::LaserShooterChangePositionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F12B40, void, OnEnter, (app::LaserShooterChangePositionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00417920, app::BehaviourStatus__Enum, OnExecute, (app::LaserShooterChangePositionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00F12E70, void, ctor, (app::LaserShooterChangePositionBehaviour * this_ptr))
} // namespace app::classes::LaserShooterChangePositionBehaviour

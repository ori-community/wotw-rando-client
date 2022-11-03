#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::LaserShooterChangeShieldBehaviour {
    IL2CPP_REGISTER_METHOD(0x00F12F00, void, SetSettings, (app::LaserShooterChangeShieldBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F13020, void, OnEntityInitialized, (app::LaserShooterChangeShieldBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F130C0, void, OnEnter, (app::LaserShooterChangeShieldBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00417920, app::BehaviourStatus__Enum, OnExecute, (app::LaserShooterChangeShieldBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00F131F0, void, ctor, (app::LaserShooterChangeShieldBehaviour * this_ptr))
} // namespace app::classes::LaserShooterChangeShieldBehaviour

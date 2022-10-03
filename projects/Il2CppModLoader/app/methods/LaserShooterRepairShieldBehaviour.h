#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LaserShooterRepairShieldBehaviour {
    IL2CPP_REGISTER_METHOD(0x00F1F8E0, void, OnEnter, (app::LaserShooterRepairShieldBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00F1FD80, void, OnExit, (app::LaserShooterRepairShieldBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00F1FFB0, app::BehaviourStatus__Enum, OnExecute, (app::LaserShooterRepairShieldBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00F20460, void, ApplyOscilation, (app::LaserShooterRepairShieldBehaviour * this_ptr, float strength))
    IL2CPP_REGISTER_METHOD(0x00F205F0, void, ctor, (app::LaserShooterRepairShieldBehaviour * this_ptr))
} // namespace app::classes::LaserShooterRepairShieldBehaviour

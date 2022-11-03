#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::LaserShooterMinibossSpawn {
    IL2CPP_REGISTER_METHOD(0x00F1DC30, void, OnEnterTask, (app::LaserShooterMinibossSpawn * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00F1DE30, app::BehaviourStatus__Enum, OnExecuteTask, (app::LaserShooterMinibossSpawn * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00F1E070, void, OnExitTask, (app::LaserShooterMinibossSpawn * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::LaserShooterMinibossSpawn * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F1E0B0, void, ctor, (app::LaserShooterMinibossSpawn * this_ptr))
} // namespace app::classes::LaserShooterMinibossSpawn

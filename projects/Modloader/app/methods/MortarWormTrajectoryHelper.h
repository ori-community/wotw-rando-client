#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MortarWormTrajectoryHelper.h>
#include <Modloader/app/structs/MortarWormEnemy.h>

namespace app::classes::MortarWormTrajectoryHelper {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::MortarWormTrajectoryHelper * this_ptr, app::MortarWormEnemy* enemy))
    IL2CPP_REGISTER_METHOD(0x00863E90, float, get_RemainingWaitTime, (app::MortarWormTrajectoryHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00863EA0, void, set_RemainingWaitTime, (app::MortarWormTrajectoryHelper * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0052B580, bool, get_CanHitTarget, (app::MortarWormTrajectoryHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EC6C0, void, set_CanHitTarget, (app::MortarWormTrajectoryHelper * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00863EB0, void, UpdateProjectileSpawner, (app::MortarWormTrajectoryHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00864610, void, UpdateMortarTrajectory, (app::MortarWormTrajectoryHelper * this_ptr))
} // namespace app::classes::MortarWormTrajectoryHelper

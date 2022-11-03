#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SimpleIKSolver {
    IL2CPP_REGISTER_METHOD(0x00748750, void, Start, (app::SimpleIKSolver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00748840, void, Solve, (app::SimpleIKSolver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00749100, void, CheckAngleRestrictions, (app::SimpleIKSolver * this_ptr, app::SimpleIKSolver_JointEntity* joint_entity))
    IL2CPP_REGISTER_METHOD(0x00749430, void, ResetJoints, (app::SimpleIKSolver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00749500, void, ctor, (app::SimpleIKSolver * this_ptr))
} // namespace app::classes::SimpleIKSolver

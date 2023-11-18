#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IKSolverAim.h>
#include <Modloader/app/structs/IKSolver_Bone.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RootMotion::FinalIK::IKSolverAim {
    IL2CPP_REGISTER_METHOD(0x02BE78A0, float, GetAngle, (app::IKSolverAim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BE7A30, app::Vector3, get_transformAxis, (app::IKSolverAim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BE7BA0, app::Vector3, get_transformPoleAxis, (app::IKSolverAim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BE7D10, void, OnInitiate, (app::IKSolverAim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BE8110, void, OnUpdate, (app::IKSolverAim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_minBones, (app::IKSolverAim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BE8960, void, Solve, (app::IKSolverAim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BE8AC0, app::Vector3, GetClampedIKPosition, (app::IKSolverAim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BE9180, void, RotateToTarget, (app::IKSolverAim * this_ptr, app::Vector3 target_position, app::IKSolver_Bone* bone, float weight))
    IL2CPP_REGISTER_METHOD(0x02BEA020, app::Vector3, get_localDirection, (app::IKSolverAim * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BEA170, void, ctor, (app::IKSolverAim * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::IKSolverAim

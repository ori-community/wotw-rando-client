#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FBIKChain.h>
#include <Modloader/app/structs/IKSolverFullBody.h>
#include <Modloader/app/structs/IKSolver_Node.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Transform__Array.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RootMotion::FinalIK::FBIKChain {
    IL2CPP_REGISTER_METHOD(0x0205C2B0, void, ctor_1, (app::FBIKChain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0205C450, void, ctor_2, (app::FBIKChain * this_ptr, float pin, float pull, app::Transform__Array* node_transforms))
    IL2CPP_REGISTER_METHOD(0x0205C640, void, SetNodes, (app::FBIKChain * this_ptr, app::Transform__Array* bone_transforms))
    IL2CPP_REGISTER_METHOD(0x0205C8E0, int32_t, GetNodeIndex, (app::FBIKChain * this_ptr, app::Transform* bone_transform))
    IL2CPP_REGISTER_METHOD(0x0205CA20, bool, IsValid, (app::FBIKChain * this_ptr, app::String** message))
    IL2CPP_REGISTER_METHOD(0x0205CB70, void, Initiate, (app::FBIKChain * this_ptr, app::IKSolverFullBody* solver))
    IL2CPP_REGISTER_METHOD(0x0205CE90, void, ReadPose, (app::FBIKChain * this_ptr, app::IKSolverFullBody* solver, bool full_body))
    IL2CPP_REGISTER_METHOD(0x0205D890, void, CalculateBoneLengths, (app::FBIKChain * this_ptr, app::IKSolverFullBody* solver))
    IL2CPP_REGISTER_METHOD(0x0205E1E0, void, Reach, (app::FBIKChain * this_ptr, app::IKSolverFullBody* solver))
    IL2CPP_REGISTER_METHOD(0x0205E910, app::Vector3, Push, (app::FBIKChain * this_ptr, app::IKSolverFullBody* solver))
    IL2CPP_REGISTER_METHOD(0x0205EF20, void, SolveTrigonometric, (app::FBIKChain * this_ptr, app::IKSolverFullBody* solver, bool calculate_bend_direction))
    IL2CPP_REGISTER_METHOD(0x0205F4B0, void, Stage1, (app::FBIKChain * this_ptr, app::IKSolverFullBody* solver))
    IL2CPP_REGISTER_METHOD(0x0205FC40, void, Stage2, (app::FBIKChain * this_ptr, app::IKSolverFullBody* solver, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x0205FE80, void, SolveConstraintSystems, (app::FBIKChain * this_ptr, app::IKSolverFullBody* solver))
    IL2CPP_REGISTER_METHOD(0x02060060, app::Vector3, SolveFABRIKJoint, (app::FBIKChain * this_ptr, app::Vector3 pos1, app::Vector3 pos2, float length))
    IL2CPP_REGISTER_METHOD(0x02060270, app::Vector3, GetDirToBendPoint, (app::FBIKChain * this_ptr, app::Vector3 direction, app::Vector3 bend_direction, float direction_magnitude))
    IL2CPP_REGISTER_METHOD(0x020605B0, void, SolveChildConstraints, (app::FBIKChain * this_ptr, app::IKSolverFullBody* solver))
    IL2CPP_REGISTER_METHOD(0x02060650, void, SolveLinearConstraint, (app::FBIKChain * this_ptr, app::IKSolver_Node* node1, app::IKSolver_Node* node2, float cross_fade, float distance))
    IL2CPP_REGISTER_METHOD(0x020608C0, void, ForwardReach, (app::FBIKChain * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x02060A80, void, BackwardReach, (app::FBIKChain * this_ptr, app::Vector3 position))
} // namespace app::classes::RootMotion::FinalIK::FBIKChain

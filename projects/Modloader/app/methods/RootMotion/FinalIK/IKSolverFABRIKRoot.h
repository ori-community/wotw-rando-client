#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RootMotion::FinalIK::IKSolverFABRIKRoot {
    IL2CPP_REGISTER_METHOD(0x02BF0350, bool, IsValid, (app::IKSolverFABRIKRoot * this_ptr, app::String** message))
    IL2CPP_REGISTER_METHOD(0x02BF1120, void, StoreDefaultLocalState, (app::IKSolverFABRIKRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF1250, void, FixTransforms, (app::IKSolverFABRIKRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF1380, void, OnInitiate, (app::IKSolverFABRIKRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF1680, bool, IsRoot, (app::IKSolverFABRIKRoot * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02BF1780, void, OnUpdate, (app::IKSolverFABRIKRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF1B30, app::IKSolver_Point__Array*, GetPoints, (app::IKSolverFABRIKRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF1C30, app::IKSolver_Point*, GetPoint, (app::IKSolverFABRIKRoot * this_ptr, app::Transform* transform))
    IL2CPP_REGISTER_METHOD(0x02BF1D00, void, AddPointsToArray, (app::IKSolverFABRIKRoot * this_ptr, app::IKSolver_Point__Array** array, app::FABRIKChain* chain))
    IL2CPP_REGISTER_METHOD(0x02BF1ED0, app::Vector3, GetCentroid, (app::IKSolverFABRIKRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF24D0, void, ctor, (app::IKSolverFABRIKRoot * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::IKSolverFABRIKRoot

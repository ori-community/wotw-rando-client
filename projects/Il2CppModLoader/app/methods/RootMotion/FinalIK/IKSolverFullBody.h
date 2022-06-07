#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RootMotion::FinalIK::IKSolverFullBody {
    IL2CPP_REGISTER_METHOD(0x02BF2590, app::IKEffector *, GetEffector, (app::IKSolverFullBody * this_ptr, app::Transform * t))
    IL2CPP_REGISTER_METHOD(0x02BF2700, app::FBIKChain *, GetChain, (app::IKSolverFullBody * this_ptr, app::Transform * transform))
    IL2CPP_REGISTER_METHOD(0x02BF2760, int32_t, GetChainIndex, (app::IKSolverFullBody * this_ptr, app::Transform * transform))
    IL2CPP_REGISTER_METHOD(0x02BF2940, app::IKSolver_Node *, GetNode, (app::IKSolverFullBody * this_ptr, int32_t chain_index, int32_t node_index))
    IL2CPP_REGISTER_METHOD(0x02BF29B0, void, GetChainAndNodeIndexes, (app::IKSolverFullBody * this_ptr, app::Transform * transform, int32_t * chain_index, int32_t * node_index))
    IL2CPP_REGISTER_METHOD(0x02BF2B60, app::IKSolver_Point__Array *, GetPoints, (app::IKSolverFullBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF2DA0, app::IKSolver_Point *, GetPoint, (app::IKSolverFullBody * this_ptr, app::Transform * transform))
    IL2CPP_REGISTER_METHOD(0x02BF2FE0, bool, IsValid, (app::IKSolverFullBody * this_ptr, app::String * * message))
    IL2CPP_REGISTER_METHOD(0x02BF33B0, void, StoreDefaultLocalState, (app::IKSolverFullBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF36A0, void, FixTransforms, (app::IKSolverFullBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF3920, void, OnInitiate, (app::IKSolverFullBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF3B30, void, OnUpdate, (app::IKSolverFullBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF3EF0, void, ReadPose, (app::IKSolverFullBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF4530, void, Solve, (app::IKSolverFullBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF4A70, void, ApplyBendConstraints, (app::IKSolverFullBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF4AC0, void, WritePose, (app::IKSolverFullBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF4C40, void, ctor, (app::IKSolverFullBody * this_ptr))
}

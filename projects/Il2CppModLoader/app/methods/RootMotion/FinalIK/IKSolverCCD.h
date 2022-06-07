#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RootMotion::FinalIK::IKSolverCCD {
    IL2CPP_REGISTER_METHOD(0x02BEA260, void, FadeOutBoneWeights, (app::IKSolverCCD * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BEA360, void, OnInitiate, (app::IKSolverCCD * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BEA450, void, OnUpdate, (app::IKSolverCCD * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BEA8C0, void, Solve, (app::IKSolverCCD * this_ptr, app::Vector3 target_position))
    IL2CPP_REGISTER_METHOD(0x02BEB3B0, void, SolveVirtual, (app::IKSolver_Bone__Array * bones, app::Vector3 target_position, float weight))
    IL2CPP_REGISTER_METHOD(0x02BEB780, void, ctor, (app::IKSolverCCD * this_ptr))
}

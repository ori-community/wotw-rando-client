#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::IkChainSolver {
    IL2CPP_REGISTER_METHOD(0x01B0E560, app::Vector3, get_LocalDirection, (app::IkChainSolver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B0E830, int32_t, AddJoint, (app::IkChainSolver * this_ptr, app::IkChainSolver_JointData joint_data))
    IL2CPP_REGISTER_METHOD(0x01B0EA90, void, Clear, (app::IkChainSolver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B0EB20, void, Initialize, (app::IkChainSolver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B0EC60, void, UpdateSegmentsLength, (app::IkChainSolver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B0EF20, void, Solve, (app::IkChainSolver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B0FF60, app::Vector3, ComputeSingularityOffset, (app::IkChainSolver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B103D0, bool, CheckForSingularity, (app::IkChainSolver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B10790, app::Quaternion, LimitSwing, (app::Vector3 axis, app::Quaternion rotation, float limit))
    IL2CPP_REGISTER_METHOD(0x01B10D90, app::Quaternion, LimitTwist, (app::Quaternion rotation, app::Vector3 axis, app::Vector3 ortho_axis, float twist_limit))
    IL2CPP_REGISTER_METHOD(0x01B11230, void, ctor, (app::IkChainSolver * this_ptr))
} // namespace app::classes::Moon::IkChainSolver

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RootMotion::FinalIK::IKEffector {
    IL2CPP_REGISTER_METHOD(0x02BD8120, app::IKSolver_Node*, GetNode, (app::IKEffector * this_ptr, app::IKSolverFullBody* solver))
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_isEndEffector, (app::IKEffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_isEndEffector, (app::IKEffector * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02BD81B0, void, PinToBone, (app::IKEffector * this_ptr, float position_weight, float rotation_weight))
    IL2CPP_REGISTER_METHOD(0x02BD83B0, void, ctor_1, (app::IKEffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BD8540, void, ctor_2, (app::IKEffector * this_ptr, app::Transform* bone, app::Transform__Array* child_bones))
    IL2CPP_REGISTER_METHOD(0x02BD86F0, bool, IsValid, (app::IKEffector * this_ptr, app::IKSolver* solver, app::String** message))
    IL2CPP_REGISTER_METHOD(0x02BD8A70, void, Initiate, (app::IKEffector * this_ptr, app::IKSolverFullBody* solver))
    IL2CPP_REGISTER_METHOD(0x02BD8ED0, void, ResetOffset, (app::IKEffector * this_ptr, app::IKSolverFullBody* solver))
    IL2CPP_REGISTER_METHOD(0x02BD90D0, void, SetToTarget, (app::IKEffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BD9270, void, OnPreSolve, (app::IKEffector * this_ptr, app::IKSolverFullBody* solver))
    IL2CPP_REGISTER_METHOD(0x02BD9D40, void, OnPostWrite, (app::IKEffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BD9DF0, app::Quaternion, GetPlaneRotation, (app::IKEffector * this_ptr, app::IKSolverFullBody* solver))
    IL2CPP_REGISTER_METHOD(0x02BDA160, void, Update, (app::IKEffector * this_ptr, app::IKSolverFullBody* solver))
    IL2CPP_REGISTER_METHOD(0x02BDA700, app::Vector3, GetPosition, (app::IKEffector * this_ptr, app::IKSolverFullBody* solver, app::Quaternion* plane_rotation_offset))
} // namespace app::classes::RootMotion::FinalIK::IKEffector

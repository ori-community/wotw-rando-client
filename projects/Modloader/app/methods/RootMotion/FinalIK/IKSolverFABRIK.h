#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IKSolverFABRIK.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RootMotion::FinalIK::IKSolverFABRIK {
    IL2CPP_REGISTER_METHOD(0x02BEB790, void, SolveForward, app::IKSolverFABRIK* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x02BEB880, void, SolveBackward, app::IKSolverFABRIK* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x02BEB9B0, app::Vector3, GetIKPosition, app::IKSolverFABRIK* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BEBAF0, void, OnInitiate, app::IKSolverFABRIK* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BEC050, void, OnUpdate, app::IKSolverFABRIK* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_boneLengthCanBeZero, app::IKSolverFABRIK* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BEC4E0, app::Vector3, SolveJoint, app::IKSolverFABRIK* this_ptr, app::Vector3 pos1, app::Vector3 pos2, float length)
    IL2CPP_REGISTER_METHOD(0x02BEC710, void, OnPreSolve, app::IKSolverFABRIK* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BED320, void, OnPostSolve, app::IKSolverFABRIK* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BED370, void, Solve, app::IKSolverFABRIK* this_ptr, app::Vector3 target_position)
    IL2CPP_REGISTER_METHOD(0x02BED490, void, ForwardReach, app::IKSolverFABRIK* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x02BED870, void, SolverMove, app::IKSolverFABRIK* this_ptr, int32_t index, app::Vector3 offset)
    IL2CPP_REGISTER_METHOD(0x02BEDA00, void, SolverRotate, app::IKSolverFABRIK* this_ptr, int32_t index, app::Quaternion rotation, bool recursive)
    IL2CPP_REGISTER_METHOD(0x02BEDB90, void, SolverRotateChildren, app::IKSolverFABRIK* this_ptr, int32_t index, app::Quaternion rotation)
    IL2CPP_REGISTER_METHOD(0x02BEDD00, void, SolverMoveChildrenAroundPoint, app::IKSolverFABRIK* this_ptr, int32_t index, app::Quaternion rotation)
    IL2CPP_REGISTER_METHOD(0x02BEDFE0, app::Quaternion, GetParentSolverRotation, app::IKSolverFABRIK* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02BEE2C0, app::Vector3, GetParentSolverPosition, app::IKSolverFABRIK* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02BEE5C0, app::Quaternion, GetLimitedRotation, app::IKSolverFABRIK* this_ptr, int32_t index, app::Quaternion q, bool* changed)
    IL2CPP_REGISTER_METHOD(0x02BEE9C0, void, LimitForward, app::IKSolverFABRIK* this_ptr, int32_t rotate_bone, int32_t limit_bone)
    IL2CPP_REGISTER_METHOD(0x02BEF380, void, BackwardReach, app::IKSolverFABRIK* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x02BEF3C0, void, BackwardReachUnlimited, app::IKSolverFABRIK* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x02BEF560, void, BackwardReachLimited, app::IKSolverFABRIK* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x02BEFE20, void, MapToSolverPositions, app::IKSolverFABRIK* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BF00A0, void, MapToSolverPositionsLimited, app::IKSolverFABRIK* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BF02A0, void, ctor, app::IKSolverFABRIK* this_ptr)
} // namespace app::classes::RootMotion::FinalIK::IKSolverFABRIK

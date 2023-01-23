#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BipedIK.h>
#include <Modloader/app/structs/AvatarIKGoal__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/IKSolverLimb.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::RootMotion::FinalIK::BipedIK {
    IL2CPP_REGISTER_METHOD(0x0204ECD0, void, OpenUserManual, (app::BipedIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0204ED90, void, OpenScriptReference, (app::BipedIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0204EE50, void, SupportGroup, (app::BipedIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0204EF10, void, ASThread, (app::BipedIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0204EFD0, float, GetIKPositionWeight, (app::BipedIK * this_ptr, app::AvatarIKGoal__Enum goal))
    IL2CPP_REGISTER_METHOD(0x0204F000, float, GetIKRotationWeight, (app::BipedIK * this_ptr, app::AvatarIKGoal__Enum goal))
    IL2CPP_REGISTER_METHOD(0x0204F030, void, SetIKPositionWeight, (app::BipedIK * this_ptr, app::AvatarIKGoal__Enum goal, float weight))
    IL2CPP_REGISTER_METHOD(0x0204F070, void, SetIKRotationWeight, (app::BipedIK * this_ptr, app::AvatarIKGoal__Enum goal, float weight))
    IL2CPP_REGISTER_METHOD(0x0204F0B0, void, SetIKPosition, (app::BipedIK * this_ptr, app::AvatarIKGoal__Enum goal, app::Vector3 i_k_position))
    IL2CPP_REGISTER_METHOD(0x0204F0F0, void, SetIKRotation, (app::BipedIK * this_ptr, app::AvatarIKGoal__Enum goal, app::Quaternion i_k_rotation))
    IL2CPP_REGISTER_METHOD(0x0204F120, app::Vector3, GetIKPosition, (app::BipedIK * this_ptr, app::AvatarIKGoal__Enum goal))
    IL2CPP_REGISTER_METHOD(0x0204F180, app::Quaternion, GetIKRotation, (app::BipedIK * this_ptr, app::AvatarIKGoal__Enum goal))
    IL2CPP_REGISTER_METHOD(0x0204F1C0, void, SetLookAtWeight, (app::BipedIK * this_ptr, float weight, float body_weight, float head_weight, float eyes_weight, float clamp_weight, float clamp_weight_head, float clamp_weight_eyes))
    IL2CPP_REGISTER_METHOD(0x0204F380, void, SetLookAtPosition, (app::BipedIK * this_ptr, app::Vector3 look_at_position))
    IL2CPP_REGISTER_METHOD(0x0204F3C0, void, SetSpinePosition, (app::BipedIK * this_ptr, app::Vector3 spine_position))
    IL2CPP_REGISTER_METHOD(0x0204F400, void, SetSpineWeight, (app::BipedIK * this_ptr, float weight))
    IL2CPP_REGISTER_METHOD(0x0204F430, app::IKSolverLimb*, GetGoalIK, (app::BipedIK * this_ptr, app::AvatarIKGoal__Enum goal))
    IL2CPP_REGISTER_METHOD(0x00980110, void, InitiateBipedIK, (app::BipedIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC2AF0, void, UpdateBipedIK, (app::BipedIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0204F4B0, void, SetToDefaults, (app::BipedIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0204F750, void, FixTransforms, (app::BipedIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0204F850, void, InitiateSolver, (app::BipedIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0204FC40, void, UpdateSolver, (app::BipedIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02050110, void, LogWarning, (app::BipedIK * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x02050190, void, ctor, (app::BipedIK * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::BipedIK

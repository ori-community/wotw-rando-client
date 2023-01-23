#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IKEffector.h>
#include <Modloader/app/structs/IKSolverFullBodyBiped.h>
#include <Modloader/app/structs/FBIKChain.h>
#include <Modloader/app/structs/IKMappingLimb.h>
#include <Modloader/app/structs/IKMappingBone.h>
#include <Modloader/app/structs/FullBodyBipedChain__Enum.h>
#include <Modloader/app/structs/FullBodyBipedEffector__Enum.h>
#include <Modloader/app/structs/IKMappingSpine.h>
#include <Modloader/app/structs/IKConstraintBend.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/BipedReferences.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/BipedLimbOrientations.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/BipedLimbOrientations_LimbOrientation.h>
#include <Modloader/app/structs/Transform__Array.h>

namespace app::classes::RootMotion::FinalIK::IKSolverFullBodyBiped {
    IL2CPP_REGISTER_METHOD(0x02BF4E10, app::IKEffector*, get_bodyEffector, (app::IKSolverFullBodyBiped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF4E50, app::IKEffector*, get_leftShoulderEffector, (app::IKSolverFullBodyBiped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF4E90, app::IKEffector*, get_rightShoulderEffector, (app::IKSolverFullBodyBiped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF4ED0, app::IKEffector*, get_leftThighEffector, (app::IKSolverFullBodyBiped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF4F10, app::IKEffector*, get_rightThighEffector, (app::IKSolverFullBodyBiped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF4F50, app::IKEffector*, get_leftHandEffector, (app::IKSolverFullBodyBiped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF4F90, app::IKEffector*, get_rightHandEffector, (app::IKSolverFullBodyBiped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF4FD0, app::IKEffector*, get_leftFootEffector, (app::IKSolverFullBodyBiped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF5010, app::IKEffector*, get_rightFootEffector, (app::IKSolverFullBodyBiped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF5050, app::FBIKChain*, get_leftArmChain, (app::IKSolverFullBodyBiped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF5090, app::FBIKChain*, get_rightArmChain, (app::IKSolverFullBodyBiped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF50D0, app::FBIKChain*, get_leftLegChain, (app::IKSolverFullBodyBiped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF5110, app::FBIKChain*, get_rightLegChain, (app::IKSolverFullBodyBiped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF5150, app::IKMappingLimb*, get_leftArmMapping, (app::IKSolverFullBodyBiped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF5190, app::IKMappingLimb*, get_rightArmMapping, (app::IKSolverFullBodyBiped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF51D0, app::IKMappingLimb*, get_leftLegMapping, (app::IKSolverFullBodyBiped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF5210, app::IKMappingLimb*, get_rightLegMapping, (app::IKSolverFullBodyBiped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF5250, app::IKMappingBone*, get_headMapping, (app::IKSolverFullBodyBiped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF5290, void, SetChainWeights, (app::IKSolverFullBodyBiped * this_ptr, app::FullBodyBipedChain__Enum c, float pull, float reach))
    IL2CPP_REGISTER_METHOD(0x02BF5300, void, SetEffectorWeights, (app::IKSolverFullBodyBiped * this_ptr, app::FullBodyBipedEffector__Enum effector, float position_weight, float rotation_weight))
    IL2CPP_REGISTER_METHOD(0x02BF5450, app::FBIKChain*, GetChain_1, (app::IKSolverFullBodyBiped * this_ptr, app::FullBodyBipedChain__Enum c))
    IL2CPP_REGISTER_METHOD(0x02BF5530, app::FBIKChain*, GetChain_2, (app::IKSolverFullBodyBiped * this_ptr, app::FullBodyBipedEffector__Enum effector))
    IL2CPP_REGISTER_METHOD(0x02BF5760, app::IKEffector*, GetEffector, (app::IKSolverFullBodyBiped * this_ptr, app::FullBodyBipedEffector__Enum effector))
    IL2CPP_REGISTER_METHOD(0x02BF59A0, app::IKEffector*, GetEndEffector, (app::IKSolverFullBodyBiped * this_ptr, app::FullBodyBipedChain__Enum c))
    IL2CPP_REGISTER_METHOD(0x02BF5A80, app::IKMappingLimb*, GetLimbMapping_1, (app::IKSolverFullBodyBiped * this_ptr, app::FullBodyBipedChain__Enum chain))
    IL2CPP_REGISTER_METHOD(0x02BF5B70, app::IKMappingLimb*, GetLimbMapping_2, (app::IKSolverFullBodyBiped * this_ptr, app::FullBodyBipedEffector__Enum effector))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::IKMappingSpine*, GetSpineMapping, (app::IKSolverFullBodyBiped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF5250, app::IKMappingBone*, GetHeadMapping, (app::IKSolverFullBodyBiped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF5D80, app::IKConstraintBend*, GetBendConstraint, (app::IKSolverFullBodyBiped * this_ptr, app::FullBodyBipedChain__Enum limb))
    IL2CPP_REGISTER_METHOD(0x02BF5E90, bool, IsValid, (app::IKSolverFullBodyBiped * this_ptr, app::String** message))
    IL2CPP_REGISTER_METHOD(0x02BF6100, void, SetToReferences, (app::IKSolverFullBodyBiped * this_ptr, app::BipedReferences* references, app::Transform* root_node))
    IL2CPP_REGISTER_METHOD(0x02BF7D30, app::Transform*, DetectRootNodeBone, (app::BipedReferences * references))
    IL2CPP_REGISTER_METHOD(0x02BF8390, void, SetLimbOrientations, (app::IKSolverFullBodyBiped * this_ptr, app::BipedLimbOrientations* o))
    IL2CPP_REGISTER_METHOD(0x02BF8400, app::Vector3, get_pullBodyOffset, (app::IKSolverFullBodyBiped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF8420, void, set_pullBodyOffset, (app::IKSolverFullBodyBiped * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x02BF8440, void, SetLimbOrientation, (app::IKSolverFullBodyBiped * this_ptr, app::FullBodyBipedChain__Enum chain, app::BipedLimbOrientations_LimbOrientation* limb_orientation))
    IL2CPP_REGISTER_METHOD(0x02BF87D0, app::Transform*, GetLeftClavicle, (app::BipedReferences * references))
    IL2CPP_REGISTER_METHOD(0x02BF8970, app::Transform*, GetRightClavicle, (app::BipedReferences * references))
    IL2CPP_REGISTER_METHOD(0x02BF8B10, bool, Contains, (app::Transform__Array * array, app::Transform* transform))
    IL2CPP_REGISTER_METHOD(0x02BF8C10, void, ReadPose, (app::IKSolverFullBodyBiped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF8E80, void, PullBody, (app::IKSolverFullBodyBiped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF9110, app::Vector3, GetBodyOffset, (app::IKSolverFullBodyBiped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BF94D0, app::Vector3, GetHandBodyPull, (app::IKSolverFullBodyBiped * this_ptr, app::IKEffector* effector, app::FBIKChain* arm, app::Vector3 offset))
    IL2CPP_REGISTER_METHOD(0x02BF98D0, void, ApplyBendConstraints, (app::IKSolverFullBodyBiped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BFA000, void, WritePose, (app::IKSolverFullBodyBiped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BFA1F0, void, ctor, (app::IKSolverFullBodyBiped * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::IKSolverFullBodyBiped

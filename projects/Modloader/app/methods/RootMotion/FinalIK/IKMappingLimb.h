#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IKMappingLimb.h>
#include <Modloader/app/structs/IKMappingLimb_BoneMapType__Enum.h>
#include <Modloader/app/structs/IKMapping_BoneMap.h>
#include <Modloader/app/structs/IKSolver.h>
#include <Modloader/app/structs/IKSolverFullBody.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RootMotion::FinalIK::IKMappingLimb {
    IL2CPP_REGISTER_METHOD(0x02BDEE00, bool, IsValid, app::IKMappingLimb* this_ptr, app::IKSolver* solver, app::String** message)
    IL2CPP_REGISTER_METHOD(0x02BDEEA0, app::IKMapping_BoneMap*, GetBoneMap, app::IKMappingLimb* this_ptr, app::IKMappingLimb_BoneMapType__Enum bone_map)
    IL2CPP_REGISTER_METHOD(0x02BDEFB0, void, SetLimbOrientation, app::IKMappingLimb* this_ptr, app::Vector3 upper, app::Vector3 lower)
    IL2CPP_REGISTER_METHOD(0x02BDFA20, void, ctor_1, app::IKMappingLimb* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BDFE40,
        void,
        ctor_2,
        app::IKMappingLimb* this_ptr,
        app::Transform* bone1,
        app::Transform* bone2,
        app::Transform* bone3,
        app::Transform* parent_bone
    )
    IL2CPP_REGISTER_METHOD(
        0x02BE02A0,
        void,
        SetBones,
        app::IKMappingLimb* this_ptr,
        app::Transform* bone1,
        app::Transform* bone2,
        app::Transform* bone3,
        app::Transform* parent_bone
    )
    IL2CPP_REGISTER_METHOD(0x02BE02C0, void, StoreDefaultLocalState, app::IKMappingLimb* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BE03D0, void, FixTransforms, app::IKMappingLimb* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BE0610, void, Initiate, app::IKMappingLimb* this_ptr, app::IKSolverFullBody* solver)
    IL2CPP_REGISTER_METHOD(0x02BE0CA0, void, ReadPose, app::IKMappingLimb* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BE0DC0, void, WritePose, app::IKMappingLimb* this_ptr, app::IKSolverFullBody* solver, bool full_body)
} // namespace app::classes::RootMotion::FinalIK::IKMappingLimb

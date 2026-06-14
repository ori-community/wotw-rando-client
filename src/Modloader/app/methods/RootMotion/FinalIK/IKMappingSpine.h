#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IKMappingSpine.h>
#include <Modloader/app/structs/IKSolver.h>
#include <Modloader/app/structs/IKSolverFullBody.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Transform__Array.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RootMotion::FinalIK::IKMappingSpine {
    IL2CPP_REGISTER_METHOD(0x02BE0FA0, bool, IsValid, app::IKMappingSpine* this_ptr, app::IKSolver* solver, app::String** message)
    IL2CPP_REGISTER_METHOD(0x02BE1330, void, ctor_1, app::IKMappingSpine* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BE1770,
        void,
        ctor_2,
        app::IKMappingSpine* this_ptr,
        app::Transform__Array* spine_bones,
        app::Transform* left_upper_arm_bone,
        app::Transform* right_upper_arm_bone,
        app::Transform* left_thigh_bone,
        app::Transform* right_thigh_bone
    )
    IL2CPP_REGISTER_METHOD(
        0x00F70AB0,
        void,
        SetBones,
        app::IKMappingSpine* this_ptr,
        app::Transform__Array* spine_bones,
        app::Transform* left_upper_arm_bone,
        app::Transform* right_upper_arm_bone,
        app::Transform* left_thigh_bone,
        app::Transform* right_thigh_bone
    )
    IL2CPP_REGISTER_METHOD(0x02064960, void, StoreDefaultLocalState, app::IKMappingSpine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BE1BF0, void, FixTransforms, app::IKMappingSpine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BE1CA0, void, Initiate, app::IKMappingSpine* this_ptr, app::IKSolverFullBody* solver)
    IL2CPP_REGISTER_METHOD(0x02BE2D70, bool, UseFABRIK, app::IKMappingSpine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BE2DA0, void, ReadPose, app::IKMappingSpine* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BE3330, void, WritePose, app::IKMappingSpine* this_ptr, app::IKSolverFullBody* solver)
    IL2CPP_REGISTER_METHOD(0x02BE39F0, void, ForwardReach, app::IKMappingSpine* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x02BE3BC0, void, BackwardReach, app::IKMappingSpine* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x02BE3D60, void, MapToSolverPositions, app::IKMappingSpine* this_ptr, app::IKSolverFullBody* solver)
} // namespace app::classes::RootMotion::FinalIK::IKMappingSpine

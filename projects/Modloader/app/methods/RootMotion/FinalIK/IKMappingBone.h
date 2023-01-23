#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IKMappingBone.h>
#include <Modloader/app/structs/IKSolver.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/IKSolverFullBody.h>

namespace app::classes::RootMotion::FinalIK::IKMappingBone {
    IL2CPP_REGISTER_METHOD(0x02BDE790, bool, IsValid, (app::IKMappingBone * this_ptr, app::IKSolver* solver, app::String** message))
    IL2CPP_REGISTER_METHOD(0x02BDE860, void, ctor_1, (app::IKMappingBone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BDE9D0, void, ctor_2, (app::IKMappingBone * this_ptr, app::Transform* bone))
    IL2CPP_REGISTER_METHOD(0x02BDEB50, void, StoreDefaultLocalState, (app::IKMappingBone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BDEB70, void, FixTransforms, (app::IKMappingBone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BDEBF0, void, Initiate, (app::IKMappingBone * this_ptr, app::IKSolverFullBody* solver))
    IL2CPP_REGISTER_METHOD(0x02BDEDB0, void, ReadPose, (app::IKMappingBone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BDEDD0, void, WritePose, (app::IKMappingBone * this_ptr, float solver_weight))
} // namespace app::classes::RootMotion::FinalIK::IKMappingBone

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IKMapping.h>
#include <Modloader/app/structs/IKSolver.h>
#include <Modloader/app/structs/IKSolverFullBody.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Warning_Logger.h>

namespace app::classes::RootMotion::FinalIK::IKMapping {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsValid, app::IKMapping* this_ptr, app::IKSolver* solver, app::String** message)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Initiate, app::IKMapping* this_ptr, app::IKSolverFullBody* solver)
    IL2CPP_REGISTER_METHOD(
        0x02BDAF80,
        bool,
        BoneIsValid,
        app::IKMapping* this_ptr,
        app::Transform* bone,
        app::IKSolver* solver,
        app::String** message,
        app::Warning_Logger* logger
    )
    IL2CPP_REGISTER_METHOD(0x02BDB0E0, app::Vector3, SolveFABRIKJoint, app::IKMapping* this_ptr, app::Vector3 pos1, app::Vector3 pos2, float length)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::IKMapping* this_ptr)
} // namespace app::classes::RootMotion::FinalIK::IKMapping

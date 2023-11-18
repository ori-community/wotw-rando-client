#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GrounderQuadruped_Foot__Boxed.h>
#include <Modloader/app/structs/IKSolver.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::RootMotion::FinalIK::GrounderQuadruped_Foot {
    IL2CPP_REGISTER_METHOD(0x001DC120, void, ctor, (app::GrounderQuadruped_Foot__Boxed * this_ptr, app::IKSolver* solver, app::Transform* transform))
}

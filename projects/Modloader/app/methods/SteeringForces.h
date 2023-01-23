#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SteeringForces.h>
#include <Modloader/app/structs/SteeringForces_SteeringForcesBuilder.h>
#include <Modloader/app/structs/Predicate_1_UnityEngine_Collider_.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::SteeringForces {
    IL2CPP_REGISTER_METHOD(0x0064E550, void, Init, (app::SteeringForces * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0064E760, app::SteeringForces_SteeringForcesBuilder*, GetForcesBuilder, (app::SteeringForces * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0064E840, void, SetColliderValidation, (app::SteeringForces * this_ptr, app::Predicate_1_UnityEngine_Collider_* collider_validation))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DrawGizmos, (app::SteeringForces * this_ptr, app::Transform* target))
    IL2CPP_REGISTER_METHOD(0x0064E860, void, ctor, (app::SteeringForces * this_ptr))
} // namespace app::classes::SteeringForces

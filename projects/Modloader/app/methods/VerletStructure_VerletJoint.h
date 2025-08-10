#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/VerletStructure_VerletJoint.h>

namespace app::classes::VerletStructure_VerletJoint {
    IL2CPP_REGISTER_METHOD(0x013D00E0, app::Vector3, get_Velocity, app::VerletStructure_VerletJoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013D01E0, void, set_Velocity, app::VerletStructure_VerletJoint* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x013D02E0, app::Vector3, get_WorldAnchor, app::VerletStructure_VerletJoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013D0430, void, set_WorldAnchor, app::VerletStructure_VerletJoint* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x013D0580, void, ctor, app::VerletStructure_VerletJoint* this_ptr, app::Vector3 position, float mass)
    IL2CPP_REGISTER_METHOD(0x013D05A0, void, Update, app::VerletStructure_VerletJoint* this_ptr, float friction, app::Vector3 gravity)
    IL2CPP_REGISTER_METHOD(0x013D0930, void, Set_1, app::VerletStructure_VerletJoint* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x013D0950, void, Set_2, app::VerletStructure_VerletJoint* this_ptr, app::VerletStructure_VerletJoint* j)
    IL2CPP_REGISTER_METHOD(0x013D0990, void, LerpPosition, app::VerletStructure_VerletJoint* this_ptr, app::Vector3 target, float k)
    IL2CPP_REGISTER_METHOD(0x013D0B60, void, Init, app::VerletStructure_VerletJoint* this_ptr, app::Transform* transform)
} // namespace app::classes::VerletStructure_VerletJoint

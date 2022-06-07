#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Timeline::TransformAnimatorSystem_PositionModification {
    IL2CPP_REGISTER_METHOD(0x00246FD0, void, Apply, (app::TransformAnimatorSystem_PositionModification__Boxed * this_ptr, app::TransformAnimatorSystem_ObjectState * object_state, bool immediately_apply))
    IL2CPP_REGISTER_METHOD(0x00246FE0, void, ApplyRigidbody, (app::TransformAnimatorSystem_PositionModification__Boxed * this_ptr, app::Transform * transform, app::Rigidbody * rigidbody, bool immediately_apply))
    IL2CPP_REGISTER_METHOD(0x00246FF0, void, MoveBody, (app::TransformAnimatorSystem_PositionModification__Boxed * this_ptr, app::Rigidbody * rigidbody, app::Vector3 position))
}

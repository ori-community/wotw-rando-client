#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TransformAnimatorSystem_PositionModification__Boxed.h>
#include <Modloader/app/structs/TransformAnimatorSystem_ObjectState.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::Timeline::TransformAnimatorSystem_PositionModification {
    IL2CPP_REGISTER_METHOD(0x00246FD0, void, Apply, (app::TransformAnimatorSystem_PositionModification__Boxed * this_ptr, app::TransformAnimatorSystem_ObjectState* object_state, bool immediately_apply))
    IL2CPP_REGISTER_METHOD(0x00246FE0, void, ApplyRigidbody, (app::TransformAnimatorSystem_PositionModification__Boxed * this_ptr, app::Transform* transform, app::Rigidbody* rigidbody, bool immediately_apply))
    IL2CPP_REGISTER_METHOD(0x00246FF0, void, MoveBody, (app::TransformAnimatorSystem_PositionModification__Boxed * this_ptr, app::Rigidbody* rigidbody, app::Vector3 position))
} // namespace app::classes::Moon::Timeline::TransformAnimatorSystem_PositionModification

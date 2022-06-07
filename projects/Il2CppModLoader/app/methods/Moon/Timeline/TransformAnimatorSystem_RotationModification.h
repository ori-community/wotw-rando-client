#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Timeline::TransformAnimatorSystem_RotationModification {
    IL2CPP_REGISTER_METHOD(0x00247020, void, Apply, (app::TransformAnimatorSystem_RotationModification__Boxed * this_ptr, app::TransformAnimatorSystem_ObjectState * object_state, bool immediately_apply))
    IL2CPP_REGISTER_METHOD(0x00247030, void, ApplyRigidbody, (app::TransformAnimatorSystem_RotationModification__Boxed * this_ptr, app::TransformAnimatorSystem_ObjectState * object_state, bool immediately_apply))
    IL2CPP_REGISTER_METHOD(0x00247040, void, RotateBody, (app::TransformAnimatorSystem_RotationModification__Boxed * this_ptr, app::Rigidbody * rigidbody, app::Quaternion rotation))
}

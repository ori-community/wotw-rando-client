#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/IgnoreCollisionsHelper__Boxed.h>

namespace app::classes::IgnoreCollisionsHelper {
    IL2CPP_REGISTER_METHOD(0x00113420, bool, IsIgnorning, app::IgnoreCollisionsHelper__Boxed* this_ptr, app::Collider* other)
    IL2CPP_REGISTER_METHOD(0x001134D0, void, ctor, app::IgnoreCollisionsHelper__Boxed* this_ptr, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(0x001134E0, void, IgnoreCollision, app::IgnoreCollisionsHelper__Boxed* this_ptr, app::Collider* other, bool ignore)
    IL2CPP_REGISTER_METHOD(0x001134F0, void, ResetCollisions, app::IgnoreCollisionsHelper__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00113500, void, ApplyIgnoredColliders, app::IgnoreCollisionsHelper__Boxed* this_ptr)
} // namespace app::classes::IgnoreCollisionsHelper

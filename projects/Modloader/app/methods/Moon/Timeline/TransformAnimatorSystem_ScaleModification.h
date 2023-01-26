#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TransformAnimatorSystem_ScaleModification__Boxed.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::Moon::Timeline::TransformAnimatorSystem_ScaleModification {
    IL2CPP_REGISTER_METHOD(0x00247060, void, Apply, (app::TransformAnimatorSystem_ScaleModification__Boxed * this_ptr, app::Transform* transform))
}

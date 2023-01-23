#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/SpiderlingLocomotionMoveBehaviour.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SpiderlingLocomotionMoveBehaviour {
    IL2CPP_REGISTER_METHOD(0x011C6BA0, app::Vector2, DeltaToPoint, (app::SpiderlingLocomotionMoveBehaviour * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x00842340, void, ctor, (app::SpiderlingLocomotionMoveBehaviour * this_ptr))
} // namespace app::classes::SpiderlingLocomotionMoveBehaviour

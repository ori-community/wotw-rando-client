#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SpiderlingLocomotionMoveBehaviour {
    IL2CPP_REGISTER_METHOD(0x011C6BA0, app::Vector2, DeltaToPoint, (app::SpiderlingLocomotionMoveBehaviour * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x00842340, void, ctor, (app::SpiderlingLocomotionMoveBehaviour * this_ptr))
}

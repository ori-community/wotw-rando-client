#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MovingGroundHelper.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::MovingGroundHelper {
    IL2CPP_REGISTER_METHOD(0x0086D250, void, SetGround, (app::MovingGroundHelper * this_ptr, app::Transform* ground))
    IL2CPP_REGISTER_METHOD(0x0086D320, app::Vector2, CalculateDelta, (app::MovingGroundHelper * this_ptr, app::Transform* target))
    IL2CPP_REGISTER_METHOD(0x0086D6E0, void, Update, (app::MovingGroundHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0086D6F0, void, UpdateGroundMatrix, (app::MovingGroundHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MovingGroundHelper * this_ptr))
} // namespace app::classes::MovingGroundHelper

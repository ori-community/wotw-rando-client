#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RotateRoomAction {
    IL2CPP_REGISTER_METHOD(0x0136E940, void, Perform, (app::RotateRoomAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0136E980, void, ctor, (app::RotateRoomAction * this_ptr))
} // namespace app::classes::RotateRoomAction

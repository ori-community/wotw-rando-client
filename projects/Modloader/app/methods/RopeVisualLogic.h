#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RopeVisualLogic {
    IL2CPP_REGISTER_METHOD(0x0136E210, void, Awake, (app::RopeVisualLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0136E2F0, void, FixedUpdate, (app::RopeVisualLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0136E930, void, ctor, (app::RopeVisualLogic * this_ptr))
} // namespace app::classes::RopeVisualLogic

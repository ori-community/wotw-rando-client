#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::LeftTriggerRightTriggerCycle {
    IL2CPP_REGISTER_METHOD(0x015C8A30, void, FixedUpdate, (app::LeftTriggerRightTriggerCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015C8C00, app::Panel*, get_CurrentPanel, (app::LeftTriggerRightTriggerCycle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LeftTriggerRightTriggerCycle * this_ptr))
} // namespace app::classes::LeftTriggerRightTriggerCycle

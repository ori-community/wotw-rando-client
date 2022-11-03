#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::IsXboxOneCondition {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, Validate, (app::IsXboxOneCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsXboxOneCondition * this_ptr))
} // namespace app::classes::IsXboxOneCondition

#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::BreakFireStickAction {
    IL2CPP_REGISTER_METHOD(0x00D4AE40, void, Perform, (app::BreakFireStickAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x004C87A0, void, ctor, (app::BreakFireStickAction * this_ptr))
} // namespace app::classes::BreakFireStickAction

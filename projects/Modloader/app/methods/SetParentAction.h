#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SetParentAction {
    IL2CPP_REGISTER_METHOD(0x005A3290, void, Perform, (app::SetParentAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SetParentAction * this_ptr))
} // namespace app::classes::SetParentAction

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SetPositionAction {
    IL2CPP_REGISTER_METHOD(0x005A3370, void, Perform, (app::SetPositionAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x005A3700, void, ctor, (app::SetPositionAction * this_ptr))
} // namespace app::classes::SetPositionAction

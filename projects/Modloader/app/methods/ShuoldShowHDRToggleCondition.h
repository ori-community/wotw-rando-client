#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ShuoldShowHDRToggleCondition {
    IL2CPP_REGISTER_METHOD(0x0073E0F0, bool, Validate, (app::ShuoldShowHDRToggleCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ShuoldShowHDRToggleCondition * this_ptr))
} // namespace app::classes::ShuoldShowHDRToggleCondition

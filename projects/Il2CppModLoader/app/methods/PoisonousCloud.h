#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PoisonousCloud {
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsSuspended, (app::PoisonousCloud * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsSuspended, (app::PoisonousCloud * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01431EA0, void, ApplySetting, (app::PoisonousCloud * this_ptr, app::CloudAttackSettings* settings))
    IL2CPP_REGISTER_METHOD(0x00444DD0, void, ctor, (app::PoisonousCloud * this_ptr))
} // namespace app::classes::PoisonousCloud

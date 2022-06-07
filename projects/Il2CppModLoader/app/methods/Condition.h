#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Condition {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetCondition, (app::Condition_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateCondition, (app::Condition_1 * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x004C50B0, app::String *, GetNiceName, (app::Condition_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::Condition_1 * this_ptr))
}

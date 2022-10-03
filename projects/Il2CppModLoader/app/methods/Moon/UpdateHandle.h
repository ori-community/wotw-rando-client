#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::UpdateHandle {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::UpdateType__Enum, get_UpdateType, (app::UpdateHandle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_ExecutionOrderOffset, (app::UpdateHandle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0313D6C0, void, ctor, (app::UpdateHandle * this_ptr, app::Action_1_Single_* method_1, int32_t order, app::UpdateType__Enum update_type))
    IL2CPP_REGISTER_METHOD(0x0313D6D0, void, OnUpdate, (app::UpdateHandle * this_ptr, float delta_time))
} // namespace app::classes::Moon::UpdateHandle

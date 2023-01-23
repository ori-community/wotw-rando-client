#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FloatUberStateCondition.h>

namespace app::classes::FloatUberStateCondition {
    IL2CPP_REGISTER_METHOD(0x01B5B4E0, void, ctor, (app::FloatUberStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5B6B0, bool, Validate, (app::FloatUberStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5B900, float, get_Min, (app::FloatUberStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5B9B0, void, set_Min, (app::FloatUberStateCondition * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01B5BA90, float, get_Max, (app::FloatUberStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5BB40, void, set_Max, (app::FloatUberStateCondition * this_ptr, float value))
} // namespace app::classes::FloatUberStateCondition

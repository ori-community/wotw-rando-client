#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::GenericUberStateCondition {
    IL2CPP_REGISTER_METHOD(0x01B5DAE0, void, ctor, (app::GenericUberStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5DCB0, bool, Validate, (app::GenericUberStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5DF00, float, get_Min, (app::GenericUberStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5DFB0, void, set_Min, (app::GenericUberStateCondition * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01B5E090, float, get_Max, (app::GenericUberStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5E140, void, set_Max, (app::GenericUberStateCondition * this_ptr, float value))
} // namespace app::classes::GenericUberStateCondition

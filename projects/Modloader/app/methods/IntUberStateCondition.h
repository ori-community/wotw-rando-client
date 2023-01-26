#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IntUberStateCondition.h>

namespace app::classes::IntUberStateCondition {
    IL2CPP_REGISTER_METHOD(0x01B5EAF0, void, ctor, (app::IntUberStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5ECC0, bool, Validate_1, (app::IntUberStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5EE00, bool, Validate_2, (app::IntUberStateCondition * this_ptr, int32_t external_value))
    IL2CPP_REGISTER_METHOD(0x01B5EE50, int32_t, get_Min, (app::IntUberStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5EF00, void, set_Min, (app::IntUberStateCondition * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01B5EFE0, int32_t, get_Max, (app::IntUberStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5F090, void, set_Max, (app::IntUberStateCondition * this_ptr, int32_t value))
} // namespace app::classes::IntUberStateCondition

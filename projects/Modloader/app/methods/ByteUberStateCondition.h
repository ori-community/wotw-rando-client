#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ByteUberStateCondition.h>

namespace app::classes::ByteUberStateCondition {
    IL2CPP_REGISTER_METHOD(0x01B56F20, void, ctor, (app::ByteUberStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B570F0, bool, Validate_1, (app::ByteUberStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B57230, bool, Validate_2, (app::ByteUberStateCondition * this_ptr, uint8_t external_value))
    IL2CPP_REGISTER_METHOD(0x01B57280, uint8_t, get_Min, (app::ByteUberStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B57330, void, set_Min, (app::ByteUberStateCondition * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x01B57410, uint8_t, get_Max, (app::ByteUberStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B574C0, void, set_Max, (app::ByteUberStateCondition * this_ptr, uint8_t value))
} // namespace app::classes::ByteUberStateCondition

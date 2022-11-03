#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ValueWithMaxValue {
    IL2CPP_REGISTER_METHOD(0x006B5650, float, get_Value, (app::ValueWithMaxValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013B9120, void, set_Value, (app::ValueWithMaxValue * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x013B9160, bool, get_ValueIsMax, (app::ValueWithMaxValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013B9180, void, add_ValueChanged, (app::ValueWithMaxValue * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x013B9270, void, remove_ValueChanged, (app::ValueWithMaxValue * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x013B9360, void, Serialize, (app::ValueWithMaxValue * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x013B9390, void, Awake, (app::ValueWithMaxValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ValueWithMaxValue * this_ptr))
} // namespace app::classes::ValueWithMaxValue

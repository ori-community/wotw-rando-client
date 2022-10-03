#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SmartInput::AxisButtonInput {
    IL2CPP_REGISTER_METHOD(0x006CA000, void, ctor, (app::AxisButtonInput * this_ptr, app::IAxisInput* axis, app::AxisButtonInput_AxisMode__Enum axis_mode, float value))
    IL2CPP_REGISTER_METHOD(0x006CA050, bool, GetValue, (app::AxisButtonInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006CA130, void, DeclareSources, (app::AxisButtonInput * this_ptr, app::InputCacheManager* manager))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IAxisInput*, GetAxisInput, (app::AxisButtonInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, app::AxisButtonInput_AxisMode__Enum, GetAxisMode, (app::AxisButtonInput * this_ptr))
} // namespace app::classes::SmartInput::AxisButtonInput

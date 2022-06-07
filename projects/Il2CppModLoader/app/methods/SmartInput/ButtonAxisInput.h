#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SmartInput::ButtonAxisInput {
    IL2CPP_REGISTER_METHOD(0x006CA160, void, ctor, (app::ButtonAxisInput * this_ptr, app::IButtonInput * button_input, app::ButtonAxisInput_Mode__Enum mode))
    IL2CPP_REGISTER_METHOD(0x006CA130, void, DeclareSources, (app::ButtonAxisInput * this_ptr, app::InputCacheManager * manager))
    IL2CPP_REGISTER_METHOD(0x006CA1A0, float, GetValue, (app::ButtonAxisInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IButtonInput *, GetButtonInput, (app::ButtonAxisInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006CA2A0, bool, get_Positive, (app::ButtonAxisInput * this_ptr))
}

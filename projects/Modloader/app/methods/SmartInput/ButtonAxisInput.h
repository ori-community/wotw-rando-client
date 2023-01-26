#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ButtonAxisInput.h>
#include <Modloader/app/structs/ButtonAxisInput_Mode__Enum.h>
#include <Modloader/app/structs/IButtonInput.h>
#include <Modloader/app/structs/InputCacheManager.h>

namespace app::classes::SmartInput::ButtonAxisInput {
    IL2CPP_REGISTER_METHOD(0x006CA160, void, ctor, (app::ButtonAxisInput * this_ptr, app::IButtonInput* button_input, app::ButtonAxisInput_Mode__Enum mode))
    IL2CPP_REGISTER_METHOD(0x006CA130, void, DeclareSources, (app::ButtonAxisInput * this_ptr, app::InputCacheManager* manager))
    IL2CPP_REGISTER_METHOD(0x006CA1A0, float, GetValue, (app::ButtonAxisInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IButtonInput*, GetButtonInput, (app::ButtonAxisInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006CA2A0, bool, get_Positive, (app::ButtonAxisInput * this_ptr))
} // namespace app::classes::SmartInput::ButtonAxisInput

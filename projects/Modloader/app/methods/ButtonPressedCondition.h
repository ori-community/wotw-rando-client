#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ButtonPressedCondition.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/Input_Button__Enum.h>
#include <Modloader/app/structs/ButtonPressedCondition_ButtonStates__Enum.h>

namespace app::classes::ButtonPressedCondition {
    IL2CPP_REGISTER_METHOD(0x008220A0, bool, Validate, (app::ButtonPressedCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x008222A0, bool, ValidateInput, (app::Input_Button__Enum button, app::ButtonPressedCondition_ButtonStates__Enum state))
    IL2CPP_REGISTER_METHOD(0x008223A0, void, ctor, (app::ButtonPressedCondition * this_ptr))
} // namespace app::classes::ButtonPressedCondition

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CommandPressedCondition {
    IL2CPP_REGISTER_METHOD(0x011DE880, bool, Validate, (app::CommandPressedCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011DEA00, bool, ValidateInput, (app::Input_Command__Enum button, app::CommandPressedCondition_ButtonStates__Enum state))
    IL2CPP_REGISTER_METHOD(0x008223A0, void, ctor, (app::CommandPressedCondition * this_ptr))
} // namespace app::classes::CommandPressedCondition

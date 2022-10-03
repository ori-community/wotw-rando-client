#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::BehaviourSystem::BlackboardVariableBool {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonType_1_System_Boolean_*, GetMoonType, (app::BlackboardVariableBool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03009B90, bool, GetValue, (app::BlackboardVariableBool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03009BC0, void, SetValue, (app::BlackboardVariableBool * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x03009BF0, bool, get_IsValid, (app::BlackboardVariableBool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03009C40, bool, get_IsStatic, (app::BlackboardVariableBool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03009C60, void, ctor, (app::BlackboardVariableBool * this_ptr))
} // namespace app::classes::Moon::BehaviourSystem::BlackboardVariableBool

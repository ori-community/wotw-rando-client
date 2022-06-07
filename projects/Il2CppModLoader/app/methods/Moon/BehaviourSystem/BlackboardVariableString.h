#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::BlackboardVariableString {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonType_1_System_String_ *, GetMoonType, (app::BlackboardVariableString * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300A560, app::String *, GetValue, (app::BlackboardVariableString * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300A590, void, SetValue, (app::BlackboardVariableString * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x0300A5C0, bool, get_IsValid, (app::BlackboardVariableString * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300A610, bool, get_IsStatic, (app::BlackboardVariableString * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300A630, void, ctor, (app::BlackboardVariableString * this_ptr))
}

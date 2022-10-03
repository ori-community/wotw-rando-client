#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::BehaviourSystem::BlackboardVariableFloat {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonType_1_System_Single_*, GetMoonType, (app::BlackboardVariableFloat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03009CE0, float, GetValue, (app::BlackboardVariableFloat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03009D10, void, SetValue, (app::BlackboardVariableFloat * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x03009D40, bool, get_IsValid, (app::BlackboardVariableFloat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03009D90, bool, get_IsStatic, (app::BlackboardVariableFloat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03009DB0, void, ctor, (app::BlackboardVariableFloat * this_ptr))
} // namespace app::classes::Moon::BehaviourSystem::BlackboardVariableFloat

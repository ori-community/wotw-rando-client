#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::BlackboardVariableObject {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonType_1_UnityEngine_Object_ *, GetMoonType, (app::BlackboardVariableObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300A270, app::Object_1 *, GetValue, (app::BlackboardVariableObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300A300, void, SetValue, (app::BlackboardVariableObject * this_ptr, app::Object_1 * value))
    IL2CPP_REGISTER_METHOD(0x0300A3A0, bool, get_IsValid, (app::BlackboardVariableObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300A450, bool, get_IsStatic, (app::BlackboardVariableObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300A4E0, void, ctor, (app::BlackboardVariableObject * this_ptr))
}

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::BehaviourSystem::BlackboardVariableVector3 {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonType_1_UnityEngine_Vector3_*, GetMoonType, (app::BlackboardVariableVector3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300A6B0, app::Vector3, GetValue, (app::BlackboardVariableVector3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300A6F0, void, SetValue, (app::BlackboardVariableVector3 * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x0300A730, bool, get_IsValid, (app::BlackboardVariableVector3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300A780, bool, get_IsStatic, (app::BlackboardVariableVector3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300A7A0, void, ctor, (app::BlackboardVariableVector3 * this_ptr))
} // namespace app::classes::Moon::BehaviourSystem::BlackboardVariableVector3

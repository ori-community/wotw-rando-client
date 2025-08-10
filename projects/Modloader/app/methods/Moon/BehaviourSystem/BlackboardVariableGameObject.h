#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BlackboardVariableGameObject.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IMoonType_1_UnityEngine_GameObject_.h>

namespace app::classes::Moon::BehaviourSystem::BlackboardVariableGameObject {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonType_1_UnityEngine_GameObject_*, GetMoonType, app::BlackboardVariableGameObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03009E30, app::GameObject*, GetValue, app::BlackboardVariableGameObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03009EC0, void, SetValue, app::BlackboardVariableGameObject* this_ptr, app::GameObject* value)
    IL2CPP_REGISTER_METHOD(0x03009F60, bool, get_IsValid, app::BlackboardVariableGameObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0300A010, bool, get_IsStatic, app::BlackboardVariableGameObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0300A0A0, void, ctor, app::BlackboardVariableGameObject* this_ptr)
} // namespace app::classes::Moon::BehaviourSystem::BlackboardVariableGameObject

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMoonType_1_System_Int32_.h>
#include <Modloader/app/structs/BlackboardVariableInt.h>

namespace app::classes::Moon::BehaviourSystem::BlackboardVariableInt {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonType_1_System_Int32_*, GetMoonType, (app::BlackboardVariableInt * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300A120, int32_t, GetValue, (app::BlackboardVariableInt * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300A150, void, SetValue, (app::BlackboardVariableInt * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0300A180, bool, get_IsValid, (app::BlackboardVariableInt * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300A1D0, bool, get_IsStatic, (app::BlackboardVariableInt * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300A1F0, void, ctor, (app::BlackboardVariableInt * this_ptr))
} // namespace app::classes::Moon::BehaviourSystem::BlackboardVariableInt

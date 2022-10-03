#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UberStateCondition {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::UberStateConditionType__Enum, get_ConditionClassID, (app::UberStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03149650, bool, Validate, (app::UberStateCondition * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047084D8, UberStateCondition_Validate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031496B0, void, ctor, (app::UberStateCondition * this_ptr))
} // namespace app::classes::UberStateCondition

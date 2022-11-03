#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::FloatValueWithCondition {
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::ConditionAndValue_1_System_Single___Array*, get_m_conditionsAndValues, (app::FloatValueWithCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01271D50, float, get_Value, (app::FloatValueWithCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01271E90, void, ctor, (app::FloatValueWithCondition * this_ptr))
} // namespace app::classes::FloatValueWithCondition

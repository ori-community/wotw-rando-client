#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Expression0_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ParameterCount, (app::Expression0_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018E6DC0, void, ctor, (app::Expression0_1_System_Object_ * this_ptr, app::Expression * body))
    IL2CPP_REGISTER_METHOD(0x02543130, app::ParameterExpression *, GetParameter, (app::Expression0_1_System_Object_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0472D918, Expression0_1_System_Object__GetParameter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02543170, app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ *, GetOrMakeParameters, (app::Expression0_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02543210, app::Expression_1_System_Object_ *, Rewrite, (app::Expression0_1_System_Object_ * this_ptr, app::Expression * body, app::ParameterExpression__Array * parameters))
}

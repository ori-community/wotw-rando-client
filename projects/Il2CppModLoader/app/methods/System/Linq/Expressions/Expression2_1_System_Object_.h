#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Expression2_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ParameterCount, (app::Expression2_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02543520, void, ctor, (app::Expression2_1_System_Object_ * this_ptr, app::Expression* body, app::ParameterExpression* par0, app::ParameterExpression* par1))
    IL2CPP_REGISTER_METHOD(0x02543580, app::ParameterExpression*, GetParameter, (app::Expression2_1_System_Object_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0470CBF0, Expression2_1_System_Object__GetParameter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025433C0, app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_*, GetOrMakeParameters, (app::Expression2_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02543650, app::Expression_1_System_Object_*, Rewrite, (app::Expression2_1_System_Object_ * this_ptr, app::Expression* body, app::ParameterExpression__Array* parameters))
} // namespace app::classes::System::Linq::Expressions::Expression2_1_System_Object_

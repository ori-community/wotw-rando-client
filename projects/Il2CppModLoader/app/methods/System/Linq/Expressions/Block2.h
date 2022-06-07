#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Block2 {
    IL2CPP_REGISTER_METHOD(0x01F9E3E0, void, ctor, (app::Block2 * this_ptr, app::Expression * arg0, app::Expression * arg1))
    IL2CPP_REGISTER_METHOD(0x01F9E420, app::Expression *, GetExpression, (app::Block2 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047130E0, Block2_GetExpression__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ExpressionCount, (app::Block2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F9E4F0, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeExpressions, (app::Block2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F9E500, app::BlockExpression *, Rewrite, (app::Block2 * this_ptr, app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ * variables, app::Expression__Array * args))
}
